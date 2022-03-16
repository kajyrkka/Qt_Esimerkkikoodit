#include "toka.h"
#include "ui_toka.h"
#include "mainwindow.h"

Toka::Toka(QWidget *parent, MainWindow *ptr) :
    QDialog(parent),
    ui(new Ui::Toka),
    pMainwindow(ptr)
{
    ui->setupUi(this);
    //this->setWindowModality(Qt::WindowModal);
}

Toka::~Toka()
{
    delete ui;
}

QString Toka::fetchText()
{
    return text;
}

void Toka::on_send_clicked()
{
    text = ui->lineEdit->text();
    emit sendText(text);
    pMainwindow->setTeksti(text);
    pMainwindow->WriteTextToLineEdit2();
    this->close();
}

