/********************************************************************************
** Form generated from reading UI file 'monitoring.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MONITORING_H
#define UI_MONITORING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Monitoring
{
public:
    QLabel *monitoring;

    void setupUi(QDialog *Monitoring)
    {
        if (Monitoring->objectName().isEmpty())
            Monitoring->setObjectName(QString::fromUtf8("Monitoring"));
        Monitoring->resize(400, 300);
        monitoring = new QLabel(Monitoring);
        monitoring->setObjectName(QString::fromUtf8("monitoring"));
        monitoring->setGeometry(QRect(80, 110, 221, 61));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        monitoring->setFont(font);
        monitoring->setFrameShape(QFrame::Box);

        retranslateUi(Monitoring);

        QMetaObject::connectSlotsByName(Monitoring);
    } // setupUi

    void retranslateUi(QDialog *Monitoring)
    {
        Monitoring->setWindowTitle(QCoreApplication::translate("Monitoring", "Dialog", nullptr));
        monitoring->setText(QCoreApplication::translate("Monitoring", "Monitoring", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Monitoring: public Ui_Monitoring {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONITORING_H
