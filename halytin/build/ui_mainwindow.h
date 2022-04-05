/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *configure;
    QPushButton *storeConfig;
    QPushButton *programStart;
    QPushButton *armThesystem;
    QPushButton *doorOpened;
    QPushButton *UserGaveCorrectPin;
    QPushButton *UserGaveWrongPin;
    QPushButton *testiButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 30, 691, 61));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setFrameShape(QFrame::Box);
        label->setAlignment(Qt::AlignCenter);
        configure = new QPushButton(centralwidget);
        configure->setObjectName(QString::fromUtf8("configure"));
        configure->setGeometry(QRect(280, 160, 141, 25));
        storeConfig = new QPushButton(centralwidget);
        storeConfig->setObjectName(QString::fromUtf8("storeConfig"));
        storeConfig->setGeometry(QRect(280, 200, 141, 25));
        programStart = new QPushButton(centralwidget);
        programStart->setObjectName(QString::fromUtf8("programStart"));
        programStart->setGeometry(QRect(280, 120, 141, 25));
        armThesystem = new QPushButton(centralwidget);
        armThesystem->setObjectName(QString::fromUtf8("armThesystem"));
        armThesystem->setGeometry(QRect(280, 240, 141, 25));
        doorOpened = new QPushButton(centralwidget);
        doorOpened->setObjectName(QString::fromUtf8("doorOpened"));
        doorOpened->setGeometry(QRect(280, 280, 141, 25));
        UserGaveCorrectPin = new QPushButton(centralwidget);
        UserGaveCorrectPin->setObjectName(QString::fromUtf8("UserGaveCorrectPin"));
        UserGaveCorrectPin->setGeometry(QRect(280, 320, 141, 25));
        UserGaveWrongPin = new QPushButton(centralwidget);
        UserGaveWrongPin->setObjectName(QString::fromUtf8("UserGaveWrongPin"));
        UserGaveWrongPin->setGeometry(QRect(280, 360, 141, 25));
        testiButton = new QPushButton(centralwidget);
        testiButton->setObjectName(QString::fromUtf8("testiButton"));
        testiButton->setGeometry(QRect(290, 420, 80, 25));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "State = Configuring", nullptr));
        configure->setText(QCoreApplication::translate("MainWindow", "Configure", nullptr));
        storeConfig->setText(QCoreApplication::translate("MainWindow", "storeConfig", nullptr));
        programStart->setText(QCoreApplication::translate("MainWindow", "programStart", nullptr));
        armThesystem->setText(QCoreApplication::translate("MainWindow", "armTheSystem", nullptr));
        doorOpened->setText(QCoreApplication::translate("MainWindow", "doorOpened", nullptr));
        UserGaveCorrectPin->setText(QCoreApplication::translate("MainWindow", "UserGaveCorrectPIn", nullptr));
        UserGaveWrongPin->setText(QCoreApplication::translate("MainWindow", "UserGaveWrongPin", nullptr));
        testiButton->setText(QCoreApplication::translate("MainWindow", "TestiButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
