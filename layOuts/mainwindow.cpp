#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
      : QMainWindow(parent)
 //   , ui(new Ui::MainWindow)
{
    ui = new Ui::MainWindow;
    ui->setupUi(this);
    ptoka = new Dialog(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete ptoka;
}


void MainWindow::on_pushButton_clicked()
{
    //ptoka->show();
    qDebug()<<"Window modality = "<<this->windowModality();
    this->setWindowModality(Qt::WindowModal);
    qDebug()<<"Window modality = "<<this->windowModality();
    ptoka->show();
    //ptoka->exec();
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->label->setText("Vaihdettu");
}

