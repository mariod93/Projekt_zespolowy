#ifndef ALARM_H
#define ALARM_H

#include <QWidget>

namespace Ui {
class Alarm;
}

class Alarm : public QWidget
{
    Q_OBJECT

public:
    explicit Alarm(QWidget *parent = 0);
    ~Alarm();

private:
    Ui::Alarm *ui;

    //******************
    bool stan_alarmu;

    //******************
signals:
    void WyslijRamke(unsigned char adres, unsigned char funkcja, unsigned short addr_pocz, short value);

public slots:
    void zakutalizujDane();
private slots:
    void on_wlacz_alarmButton_clicked();
};

#endif // ALARM_H
