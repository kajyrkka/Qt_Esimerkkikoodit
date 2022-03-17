#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pInterface = new Interface(this);
    connect(pInterface,SIGNAL(sendNumberToExe(short)),
            this,SLOT(recvNumberFunction(short)));

    connect(pInterface,SIGNAL(sendNumberToExe(short)),
            this,SLOT(recvNumberSignal(short)));

    connect(this,SIGNAL(generateNumber()),
            pInterface,SLOT(recvGenerateRandomNumberCommand()));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete pInterface;
    pInterface = nullptr;
}


void MainWindow::on_function_clicked()
{
    pInterface->generateRandomNumber();
}


void MainWindow::on_signal_clicked()
{
   emit generateNumber();
}

void MainWindow::recvNumberFunction(short num)
{
    ui->lineEdit->setText(QString::number(num));
}

void MainWindow::recvNumberSignal(short num)
{
    ui->lineEdit2->setText(QString::number(num));
}

