/********************************************************************************
** Form generated from reading UI file 'modbus.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODBUS_H
#define UI_MODBUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Modbus
{
public:

    void setupUi(QWidget *Modbus)
    {
        if (Modbus->objectName().isEmpty())
            Modbus->setObjectName(QStringLiteral("Modbus"));
        Modbus->resize(400, 300);

        retranslateUi(Modbus);

        QMetaObject::connectSlotsByName(Modbus);
    } // setupUi

    void retranslateUi(QWidget *Modbus)
    {
        Modbus->setWindowTitle(QApplication::translate("Modbus", "Modbus", 0));
    } // retranslateUi

};

namespace Ui {
    class Modbus: public Ui_Modbus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODBUS_H
