/********************************************************************************
** Form generated from reading UI file 'zaluzje.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZALUZJE_H
#define UI_ZALUZJE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Zaluzje
{
public:

    void setupUi(QWidget *Zaluzje)
    {
        if (Zaluzje->objectName().isEmpty())
            Zaluzje->setObjectName(QStringLiteral("Zaluzje"));
        Zaluzje->resize(400, 300);

        retranslateUi(Zaluzje);

        QMetaObject::connectSlotsByName(Zaluzje);
    } // setupUi

    void retranslateUi(QWidget *Zaluzje)
    {
        Zaluzje->setWindowTitle(QApplication::translate("Zaluzje", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class Zaluzje: public Ui_Zaluzje {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZALUZJE_H
