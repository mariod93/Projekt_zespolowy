/********************************************************************************
** Form generated from reading UI file 'alarm.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALARM_H
#define UI_ALARM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Alarm
{
public:
    QPushButton *wlacz_alarmButton;
    QProgressBar *alarmBar;

    void setupUi(QWidget *Alarm)
    {
        if (Alarm->objectName().isEmpty())
            Alarm->setObjectName(QStringLiteral("Alarm"));
        Alarm->resize(400, 300);
        wlacz_alarmButton = new QPushButton(Alarm);
        wlacz_alarmButton->setObjectName(QStringLiteral("wlacz_alarmButton"));
        wlacz_alarmButton->setGeometry(QRect(40, 50, 75, 23));
        alarmBar = new QProgressBar(Alarm);
        alarmBar->setObjectName(QStringLiteral("alarmBar"));
        alarmBar->setGeometry(QRect(170, 40, 41, 41));
        alarmBar->setLayoutDirection(Qt::LeftToRight);
        alarmBar->setAutoFillBackground(true);
        alarmBar->setMaximum(1);
        alarmBar->setTextVisible(false);
        alarmBar->setOrientation(Qt::Vertical);

        retranslateUi(Alarm);

        QMetaObject::connectSlotsByName(Alarm);
    } // setupUi

    void retranslateUi(QWidget *Alarm)
    {
        Alarm->setWindowTitle(QApplication::translate("Alarm", "Form", 0));
        wlacz_alarmButton->setText(QApplication::translate("Alarm", "Uzbr\303\263j alarm", 0));
    } // retranslateUi

};

namespace Ui {
    class Alarm: public Ui_Alarm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALARM_H
