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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *B5;
    QPushButton *B3;
    QPushButton *B4;
    QPushButton *B6;
    QPushButton *B8;
    QPushButton *B7;
    QPushButton *B2;
    QPushButton *B1;
    QPushButton *B9;
    QFormLayout *formLayout;
    QPushButton *start;
    QLabel *label;
    QPushButton *next;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(403, 292);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        B5 = new QPushButton(centralwidget);
        B5->setObjectName(QString::fromUtf8("B5"));

        gridLayout->addWidget(B5, 1, 1, 1, 1);

        B3 = new QPushButton(centralwidget);
        B3->setObjectName(QString::fromUtf8("B3"));

        gridLayout->addWidget(B3, 0, 2, 1, 1);

        B4 = new QPushButton(centralwidget);
        B4->setObjectName(QString::fromUtf8("B4"));

        gridLayout->addWidget(B4, 1, 0, 1, 1);

        B6 = new QPushButton(centralwidget);
        B6->setObjectName(QString::fromUtf8("B6"));

        gridLayout->addWidget(B6, 1, 2, 1, 1);

        B8 = new QPushButton(centralwidget);
        B8->setObjectName(QString::fromUtf8("B8"));

        gridLayout->addWidget(B8, 2, 1, 1, 1);

        B7 = new QPushButton(centralwidget);
        B7->setObjectName(QString::fromUtf8("B7"));

        gridLayout->addWidget(B7, 2, 0, 1, 1);

        B2 = new QPushButton(centralwidget);
        B2->setObjectName(QString::fromUtf8("B2"));

        gridLayout->addWidget(B2, 0, 1, 1, 1);

        B1 = new QPushButton(centralwidget);
        B1->setObjectName(QString::fromUtf8("B1"));

        gridLayout->addWidget(B1, 0, 0, 1, 1);

        B9 = new QPushButton(centralwidget);
        B9->setObjectName(QString::fromUtf8("B9"));

        gridLayout->addWidget(B9, 2, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        start = new QPushButton(centralwidget);
        start->setObjectName(QString::fromUtf8("start"));

        formLayout->setWidget(0, QFormLayout::LabelRole, start);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFrameShape(QFrame::Box);

        formLayout->setWidget(0, QFormLayout::FieldRole, label);

        next = new QPushButton(centralwidget);
        next->setObjectName(QString::fromUtf8("next"));

        formLayout->setWidget(1, QFormLayout::LabelRole, next);


        verticalLayout->addLayout(formLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 403, 25));
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
        B5->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        B3->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        B4->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        B6->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        B8->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        B7->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        B2->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        B1->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        B9->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        start->setText(QCoreApplication::translate("MainWindow", "start", nullptr));
        label->setText(QString());
        next->setText(QCoreApplication::translate("MainWindow", "quit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
