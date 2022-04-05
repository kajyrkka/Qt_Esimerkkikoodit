/********************************************************************************
** Form generated from reading UI file 'notarmed.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTARMED_H
#define UI_NOTARMED_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_NotArmed
{
public:
    QLabel *label;
    QPushButton *Configure;
    QPushButton *StartMonitoring;

    void setupUi(QDialog *NotArmed)
    {
        if (NotArmed->objectName().isEmpty())
            NotArmed->setObjectName(QString::fromUtf8("NotArmed"));
        NotArmed->resize(400, 300);
        label = new QLabel(NotArmed);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 89, 371, 71));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setFrameShape(QFrame::HLine);
        Configure = new QPushButton(NotArmed);
        Configure->setObjectName(QString::fromUtf8("Configure"));
        Configure->setGeometry(QRect(50, 220, 80, 25));
        StartMonitoring = new QPushButton(NotArmed);
        StartMonitoring->setObjectName(QString::fromUtf8("StartMonitoring"));
        StartMonitoring->setGeometry(QRect(180, 220, 101, 25));

        retranslateUi(NotArmed);

        QMetaObject::connectSlotsByName(NotArmed);
    } // setupUi

    void retranslateUi(QDialog *NotArmed)
    {
        NotArmed->setWindowTitle(QCoreApplication::translate("NotArmed", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("NotArmed", "STATE = NOT ARMED", nullptr));
        Configure->setText(QCoreApplication::translate("NotArmed", "configure", nullptr));
        StartMonitoring->setText(QCoreApplication::translate("NotArmed", "StartMonitoring", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NotArmed: public Ui_NotArmed {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTARMED_H
