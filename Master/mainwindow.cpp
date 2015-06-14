#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "struktura.hh"

struct Struktura _struktura;



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    modbus = new Modbus;
    swiatlo= new Swiatlo;
    zaluzje= new Zaluzje;
    alarm=   new Alarm;
    connect(alarm,SIGNAL(WyslijRamke(unsigned char,unsigned char,unsigned short,short)),
            modbus,SLOT(recive_data_from_widget(unsigned char,unsigned char,unsigned short,short)));
    connect(zaluzje,SIGNAL(WyslijRamke(unsigned char,unsigned char,unsigned short,short)),
            modbus,SLOT(recive_data_from_widget(unsigned char,unsigned char,unsigned short,short)));
    connect(swiatlo,SIGNAL(WyslijRamke(unsigned char,unsigned char,unsigned short,short)),
            modbus,SLOT(recive_data_from_widget(unsigned char,unsigned char,unsigned short,short)));


    //MARIUSZ
    connect(ui->pbAlarm,SIGNAL(clicked(bool)),alarm,SLOT(show()));
    connect(modbus,SIGNAL(noweDane()),alarm,SLOT(zakutalizujDane()));

}

MainWindow::~MainWindow()
{
    delete ui;
    delete modbus;
    delete swiatlo;
    delete zaluzje;
    delete alarm;
}

void MainWindow::on_pbConnect_clicked()
{
   modbus->openPort();

}

