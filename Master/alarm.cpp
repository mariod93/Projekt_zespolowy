#include "alarm.h"
#include "ui_alarm.h"
#include "struktura.hh"
#include <qdebug.h>

extern Struktura _struktura;

Alarm::Alarm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Alarm)
{
    ui->setupUi(this);
}

Alarm::~Alarm()
{
    delete ui;
}

void Alarm::on_wlacz_alarmButton_clicked()
{
    qDebug() << ui->alarmBar->value();
    if(!ui->alarmBar->value())
        emit WyslijRamke(1,5,0,0xff00);
    else
        emit WyslijRamke(1,5,0,0x0000);
}

void Alarm::zakutalizujDane(){
    if((_struktura.A_status &0x01) == 1)
        stan_alarmu=1;
    else
        stan_alarmu=0;
    ui->alarmBar->setValue(stan_alarmu);

}
