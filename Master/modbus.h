#ifndef MODBUS_H
#define MODBUS_H

#include <QWidget>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QTimer>
#include <windows.h>
#include <settingsdialog.h>
#include <QDebug>
#include "struktura.hh"


struct Frame{
    char address;
    char function;
    unsigned short start_addr;
    short value;
    QByteArray data;
    unsigned short crc;
    int data_len;

    Frame();
    Frame(char adres,char func,short addr_start, short val);
};


struct Frame_map{
    Frame   frame;
    char    *ptr_coil;
    short   *ptr_reg;

    Frame_map();
    Frame_map(char adres,char func,short addr_start, short val,char *ptr_c, short *ptr_r);
};


namespace Ui {
class Modbus;
}

class Modbus : public QWidget
{
    Q_OBJECT

public:
    explicit Modbus(QWidget *parent = 0);
    ~Modbus();

public slots:
    bool openPort();    // otwiera port COM
    bool statePort();   // zwraca status portu COM, czy otwarty
    void closePort();   // zamyka port COM
    void showContent(); // F. POM, wypisuje zawartosc bufora wejsciowego
    void writeData(const QByteArray &data); // wysyła dane na kable
    void readData();    //odczytuje dane z kabli do bufora wejsciowego
    // wysyla pojedyncza ramke MODBUS na kable
    void sendRequest(unsigned char, unsigned char, unsigned short,short);
    void sendRequest(Frame);
    void sendCyclicRequest();
    // powinna zapisywac ramke przekazana w argumentach do bufora niecyklicznego
    void recive_data_from_widget(unsigned char,unsigned char,unsigned short,short);
    void startTransmision();

private slots:

    void processFrame(); //przetwarza bufor wejsciowy, gdy odbierzemy cala ramke z kabli
    bool isFrameOk(Frame frame);    //sprawdza czy odebrana ramka jest poprawna (CRC)
    void zapiszDaneDoStruktury(Frame frame); //zapisuje odebrane dane do recznie zmapowanej zmiennej w strukturze



signals:
    void frameReady(Frame frame);  //triger zalaczajacy sie gdy odbierzemy cala ramke
    void noweDane();
    void nextRequest();
    void comOpen();
    void sendTempRequests();


public:
    SettingsDialog *settings_dialog;//okienko konfiguracji portu COM
private:
    Ui::Modbus *ui;
    QSerialPort *port;//port COM
    SettingsDialog::Settings *port_settings;//informacje o sesji i porcie COM
    QTimer *timer; //timer odmierzajacy timeout transmisji MODBUS
    QTimer *cyclic_timer;//timer do bufora cyklicznie wysylajacego ramki na kable

    QByteArray *port_input_bufer;//bufor wejsciowy, do ktorego przychodzą dane z portu szeregowego
    QByteArray *port_output_bufer;//bufor wyjsciowy, z ktorego dane sa wyslane
    Frame frame;

    int cyclic_counter;
    bool cyclic_finish; //flaga okreslajaca czy wszystkie ramki cyklicze zostaly juz wyslane w danym cyklu
                        //jesli tak to wyslij ramki z kolejki

    unsigned short crcChk(unsigned char *data, unsigned char length); //suma kontrolna
};

#endif // MODBUS_H
