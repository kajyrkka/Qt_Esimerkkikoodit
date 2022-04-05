/********************************************************************************
** Form generated from reading UI file 'configuring.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURING_H
#define UI_CONFIGURING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Configuring
{
public:
    QLabel *label;

    void setupUi(QDialog *Configuring)
    {
        if (Configuring->objectName().isEmpty())
            Configuring->setObjectName(QString::fromUtf8("Configuring"));
        Configuring->resize(400, 300);
        label = new QLabel(Configuring);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 130, 241, 41));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setFrameShape(QFrame::Box);
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(Configuring);

        QMetaObject::connectSlotsByName(Configuring);
    } // setupUi

    void retranslateUi(QDialog *Configuring)
    {
        Configuring->setWindowTitle(QCoreApplication::translate("Configuring", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Configuring", "Configuring", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Configuring: public Ui_Configuring {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURING_H
