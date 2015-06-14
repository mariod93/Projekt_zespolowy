/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionKonfiguracja_po_czenia;
    QWidget *centralWidget;
    QPushButton *pbConnect;
    QPushButton *pbZaluzje;
    QPushButton *pbSwiatlo;
    QPushButton *pbAlarm;
    QMenuBar *menuBar;
    QMenu *menuOpcje;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        actionKonfiguracja_po_czenia = new QAction(MainWindow);
        actionKonfiguracja_po_czenia->setObjectName(QStringLiteral("actionKonfiguracja_po_czenia"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pbConnect = new QPushButton(centralWidget);
        pbConnect->setObjectName(QStringLiteral("pbConnect"));
        pbConnect->setGeometry(QRect(120, 10, 151, 51));
        pbZaluzje = new QPushButton(centralWidget);
        pbZaluzje->setObjectName(QStringLiteral("pbZaluzje"));
        pbZaluzje->setGeometry(QRect(120, 70, 151, 41));
        pbSwiatlo = new QPushButton(centralWidget);
        pbSwiatlo->setObjectName(QStringLiteral("pbSwiatlo"));
        pbSwiatlo->setGeometry(QRect(120, 120, 151, 41));
        pbAlarm = new QPushButton(centralWidget);
        pbAlarm->setObjectName(QStringLiteral("pbAlarm"));
        pbAlarm->setGeometry(QRect(120, 170, 151, 41));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        menuOpcje = new QMenu(menuBar);
        menuOpcje->setObjectName(QStringLiteral("menuOpcje"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuOpcje->menuAction());
        menuOpcje->addSeparator();
        menuOpcje->addAction(actionKonfiguracja_po_czenia);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionKonfiguracja_po_czenia->setText(QApplication::translate("MainWindow", "konfiguracja po\305\202\304\205czenia", 0));
        pbConnect->setText(QApplication::translate("MainWindow", "connect", 0));
        pbZaluzje->setText(QApplication::translate("MainWindow", "\305\274aluzje", 0));
        pbSwiatlo->setText(QApplication::translate("MainWindow", "\305\233wiat\305\202o", 0));
        pbAlarm->setText(QApplication::translate("MainWindow", "alarm", 0));
        menuOpcje->setTitle(QApplication::translate("MainWindow", "Opcje", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
