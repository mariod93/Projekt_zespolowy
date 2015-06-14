#include "modbus.h"
#include "ui_modbus.h"
#include <windows.h>
#include <queue>

#define FRAME_COUNT 2
#define CYCLIC_INTERVAL 1000

extern Struktura _struktura;

Frame_map cyclic_bufor []=
{
    Frame_map(1,1,0,1,  &_struktura.A_status,0),
    Frame_map(1,3,0,1,  0,&_struktura.A_val)

};

std::queue<Frame> frame_queue;


Frame::Frame(){
    address=0;
    function=0;
    start_addr=0;
    value=0;
}

Frame::Frame(char adres,char func,short addr_start, short val){
    address=adres;
    function=func;
    start_addr=addr_start;
    value=val;
}

Frame_map::Frame_map():frame(){
    ptr_coil=0;
    ptr_reg=0;
}

Frame_map::Frame_map(char adres,char func,short addr_start, short val,char *ptr_c, short *ptr_r):
    frame(adres,func,addr_start,val){
    ptr_coil=ptr_c;
    ptr_reg=ptr_r;
}



Modbus::Modbus(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Modbus)
{
    ui->setupUi(this);

    cyclic_counter=0;
    cyclic_finish=0;

    port_settings    = new SettingsDialog::Settings;
    settings_dialog  = new SettingsDialog;
    port             = new QSerialPort(this);
    timer            = new QTimer(this);
    cyclic_timer     = new QTimer(this);

    port_input_bufer  = new QByteArray;
    port_output_bufer = new QByteArray;

    connect(port, SIGNAL(readyRead()),this,SLOT(readData()));
    connect(timer,SIGNAL(timeout()),this,SLOT(processFrame()));
    connect(this,SIGNAL(frameReady(Frame)),this,SLOT(isFrameOk(Frame)));
    connect(this,SIGNAL(nextRequest()),this,SLOT(sendCyclicRequest()));
    connect(cyclic_timer,SIGNAL(timeout()),this,SLOT(startTransmision()));
    connect(this,SIGNAL(comOpen()),this,SLOT(startTransmision()));
}

Modbus::~Modbus()
{
    closePort();
    delete port;
    delete settings_dialog;
    delete port_settings;
    delete ui;
    delete timer;
    delete cyclic_timer;
    delete port_input_bufer;
    delete port_output_bufer;


}

void Modbus::processFrame(){
    static int state=0;
    static unsigned short data_length=0;
    static unsigned char array[2]={0,0};
    timer->stop();
    //qDebug() << port_input_bufer->size();
    while(!port_input_bufer->isEmpty()){
        switch(state){
        case 0: //address

            frame.address = port_input_bufer->at(0);
            port_input_bufer->remove(0,1);
            state++;
            break;
        case 1://function
            frame.function = port_input_bufer->at(0);
            port_input_bufer->remove(0,1);
            state++;
            break;
        case 2://start address hi
            array[0]=port_input_bufer->at(0);
            port_input_bufer->remove(0,1);
            //jesli to funkcje czytajace to value okresla ile bajtow przesyla slave
            if(frame.function != 0x05 && frame.function != 0x06){
                data_length=array[0];
                frame.data_len=data_length;
                state=6;
            }
            //inaczej sa to funkcje zapisujace ktore odsylaja echo
            else{
                state++;
            }
            break;
        case 3://start address lo
            array[1]=port_input_bufer->at(0);
            frame.start_addr = array[0]*256 + array[1];
            port_input_bufer->remove(0,1);
            state++;
            break;
        case 4://value address hi
            array[0]=port_input_bufer->at(0)-'0';
            port_input_bufer->remove(0,1);
            state++;
            break;
        case 5://value address lo
            array[1]=port_input_bufer->at(0);
            frame.value = array[0]*256 + array[1];
            port_input_bufer->remove(0,1);
            state=7;
            break;
        case 6://data
            if(data_length-- > 0){
                frame.data.append(port_input_bufer->at(0));
                port_input_bufer->remove(0,1);
            }
            else{
                state++;
            }
            break;
        case 7://crc hi
            array[0]=port_input_bufer->at(0);
            port_input_bufer->remove(0,1);
            state++;
            break;
        case 8://crc lo
            array[1]=port_input_bufer->at(0);
            frame.crc = array[0]*256 + array[1];
            port_input_bufer->remove(0,1);
            state++;
        case 9:
            //qDebug() << frame.address << frame.function << frame.start_addr << frame.value << frame.data.toShort()<<frame.crc;
            emit frameReady(frame);
            state=0;
            break;
        }
    }
}

bool Modbus::openPort(){
    *port_settings = settings_dialog->settings();
    port->setBaudRate(port_settings->baudRate);
    port->setDataBits(port_settings->dataBits);
    port->setStopBits(port_settings->stopBits);
    port->setPortName(port_settings->name);
    port->setParity(port_settings->parity);
    port->setFlowControl(port_settings->flowControl);
    if(port->open(QIODevice::ReadWrite)){
        qDebug() << "open ok";
        emit comOpen();
       return TRUE;
    }
    else qDebug() << "open failed";
    return FALSE;
}

void Modbus::closePort(){
    if(port->isOpen()){
        port->close();
        qDebug() << "close ok";
    }
}

void Modbus::writeData(const QByteArray &data){
    port->write(data);
}

bool Modbus::statePort()
{
    if(port->open(QIODevice::ReadWrite))
        return TRUE;
    else
        return FALSE;
}

void Modbus::readData(){
    timer->stop();
    port_input_bufer->append(port->readAll());
    timer->start(3);
}

void Modbus::showContent(){
    qDebug() << "bufor: ";
    for(int i=0; i < frame.data.length(); i++)
        qDebug() << (int)frame.data.at(i) << ", ";
}

bool Modbus::isFrameOk(Frame frame){
//    QByteArray array;
//    QDataStream ds(&array, QIODevice::WriteOnly);
//    ds.setByteOrder(QDataStream::BigEndian);
//    ds << quint8(frame.address) << quint8(frame.function) << quint16(frame.start_addr) << quint16(frame.value);
//    int const crc = crcChk((BYTE*)array.constData(),array.size());
//    if(crc == frame.crc){

//        return true;
//    }
    if(!cyclic_finish){
        zapiszDaneDoStruktury(frame);
        cyclic_counter++;
        if(cyclic_counter < FRAME_COUNT){
            frame.data.clear();
            frame.data_len=0;
            emit nextRequest();
        }
        else{
        cyclic_counter=0;
        cyclic_finish=1;
        if(!frame_queue.empty()){
            sendRequest(frame_queue.front());
            frame_queue.pop();
        }
        }
    }
    else{ //koniec cyklicznych ramek
        if(!frame_queue.empty()){
            sendRequest(frame_queue.front());
            frame_queue.pop();
        }
    }
    return true;
}

void Modbus::sendRequest(unsigned char slave,unsigned char function,
                         unsigned short start_addr, short value){

    QByteArray array;
    QDataStream ds(&array, QIODevice::WriteOnly);
    ds.setByteOrder(QDataStream::BigEndian);
    ds << quint8(slave) << quint8(function) << quint16(start_addr) << quint16(value);
    //ds.writeRawData(data.constData(), data.size());
    int const crc = crcChk((BYTE*)array.constData(),array.size());
    ds.setByteOrder(QDataStream::LittleEndian);
    ds << quint16(crc);
    qDebug() << "crc: " << crc;
    qDebug() << "len: " << array.size();
    writeData(array);
}

void Modbus::sendRequest(Frame frame){

    QByteArray array;
    QDataStream ds(&array, QIODevice::WriteOnly);
    ds.setByteOrder(QDataStream::BigEndian);
    ds << quint8(frame.address) << quint8(frame.function) << quint16(frame.start_addr) << quint16(frame.value);
    int const crc = crcChk((BYTE*)array.constData(),array.size());
    ds.setByteOrder(QDataStream::LittleEndian);
    ds << quint16(crc);

    writeData(array);
}

void Modbus::sendCyclicRequest(){

    Frame frame = cyclic_bufor[cyclic_counter].frame;
    QByteArray array;
    QDataStream ds(&array, QIODevice::WriteOnly);
    ds.setByteOrder(QDataStream::BigEndian);
    ds << quint8(frame.address) << quint8(frame.function) << quint16(frame.start_addr) << quint16(frame.value);
    int const crc = crcChk((BYTE*)array.constData(),array.size());
    ds.setByteOrder(QDataStream::LittleEndian);
    ds << quint16(crc);

    writeData(array);

}

unsigned short Modbus::crcChk(unsigned char *data, unsigned char length)
{
        int i;
        unsigned int reg_crc=0xFFFF;

        while(length--) {
                reg_crc ^= *data++;
                for(i=0;i<8;i++) {
                        if( reg_crc & 0x01 ) { /*LSB(bit 0) = 1 */
                                reg_crc = (reg_crc >> 1)^0xA001;
                        } else {
                                reg_crc = (reg_crc>>1);
                        }
                }
        }
        return reg_crc;
}


void Modbus::recive_data_from_widget(unsigned char slave,unsigned char func,unsigned short addr,short val){
    Frame frame(slave,func,addr,val);
    frame_queue.push(frame);
}

void Modbus::zapiszDaneDoStruktury(Frame frame){
    if(frame.data_len == 1){
       *cyclic_bufor[cyclic_counter].ptr_coil=frame.data.at(0);
        qDebug()<< "wartosc0: " << (_struktura.A_status & 0x01);
    }
    else{
       *cyclic_bufor[cyclic_counter].ptr_reg=(static_cast<signed short>(frame.data[1] & 0xFF) << 8)
                 + (static_cast<signed short>(frame.data[2]) & 0xFF);
       qDebug() << "wartosc1: " << _struktura.A_val;
    }
    emit noweDane();

}

void Modbus::startTransmision(){
    frame.data.clear();
    frame.data_len=0;
    cyclic_finish=0;
    cyclic_timer->start(CYCLIC_INTERVAL);
    sendCyclicRequest();
}

