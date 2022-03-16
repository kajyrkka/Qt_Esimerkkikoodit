#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pToka = new Toka(this,this);
    connect(pToka,SIGNAL(sendText(QString)),
            this,SLOT(recvText(QString)));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete pToka;
}

void MainWindow::setTeksti(QString t)
{
    teksti = t;
}

QString MainWindow::getTeksti()
{
    return teksti;
}

void MainWindow::WriteTextToLineEdit2()
{
    ui->lineEdit2->setText(teksti);
}


void MainWindow::on_close_clicked()
{
    this->close();
}


void MainWindow::on_open_clicked()
{
    //pToka->exec();
    pToka->show();
    //ui->lineEdit->setText(pToka->fetchText());

}

void MainWindow::recvText(QString t)
{
    ui->lineEdit->setText(t);
}

