/********************************************************************************
** Form generated from reading UI file 'armed.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARMED_H
#define UI_ARMED_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Armed
{
public:
    QLabel *label;
    QPushButton *doorOpened;
    QPushButton *pincorrect;

    void setupUi(QDialog *Armed)
    {
        if (Armed->objectName().isEmpty())
            Armed->setObjectName(QString::fromUtf8("Armed"));
        Armed->resize(400, 300);
        label = new QLabel(Armed);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 115, 261, 51));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        doorOpened = new QPushButton(Armed);
        doorOpened->setObjectName(QString::fromUtf8("doorOpened"));
        doorOpened->setGeometry(QRect(50, 230, 80, 25));
        pincorrect = new QPushButton(Armed);
        pincorrect->setObjectName(QString::fromUtf8("pincorrect"));
        pincorrect->setGeometry(QRect(230, 230, 80, 25));

        retranslateUi(Armed);

        QMetaObject::connectSlotsByName(Armed);
    } // setupUi

    void retranslateUi(QDialog *Armed)
    {
        Armed->setWindowTitle(QCoreApplication::translate("Armed", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Armed", "STATE = ARMED", nullptr));
        doorOpened->setText(QCoreApplication::translate("Armed", "doorOpened", nullptr));
        pincorrect->setText(QCoreApplication::translate("Armed", "pinCorrect", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Armed: public Ui_Armed {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARMED_H
