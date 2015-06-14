/********************************************************************************
** Form generated from reading UI file 'swiatlo.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SWIATLO_H
#define UI_SWIATLO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Swiatlo
{
public:

    void setupUi(QWidget *Swiatlo)
    {
        if (Swiatlo->objectName().isEmpty())
            Swiatlo->setObjectName(QStringLiteral("Swiatlo"));
        Swiatlo->resize(400, 300);

        retranslateUi(Swiatlo);

        QMetaObject::connectSlotsByName(Swiatlo);
    } // setupUi

    void retranslateUi(QWidget *Swiatlo)
    {
        Swiatlo->setWindowTitle(QApplication::translate("Swiatlo", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class Swiatlo: public Ui_Swiatlo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SWIATLO_H
