/********************************************************************************
** Form generated from reading UI file 'toka.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOKA_H
#define UI_TOKA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Toka
{
public:
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QPushButton *send;
    QLineEdit *lineEdit;

    void setupUi(QDialog *Toka)
    {
        if (Toka->objectName().isEmpty())
            Toka->setObjectName(QString::fromUtf8("Toka"));
        Toka->resize(346, 65);
        horizontalLayout = new QHBoxLayout(Toka);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        send = new QPushButton(Toka);
        send->setObjectName(QString::fromUtf8("send"));

        formLayout->setWidget(0, QFormLayout::LabelRole, send);

        lineEdit = new QLineEdit(Toka);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);


        horizontalLayout->addLayout(formLayout);


        retranslateUi(Toka);

        QMetaObject::connectSlotsByName(Toka);
    } // setupUi

    void retranslateUi(QDialog *Toka)
    {
        Toka->setWindowTitle(QCoreApplication::translate("Toka", "Dialog", nullptr));
        send->setText(QCoreApplication::translate("Toka", "send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Toka: public Ui_Toka {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOKA_H
