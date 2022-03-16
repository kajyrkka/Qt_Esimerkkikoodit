#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    napit.append(ui->B1);
    napit.append(ui->B2);
    napit.append(ui->B3);
    napit.append(ui->B4);
    napit.append(ui->B5);
    napit.append(ui->B6);
    napit.append(ui->B7);
    napit.append(ui->B8);
    napit.append(ui->B9);



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleClick()
{
    QObject * sender = QObject::sender();
    qDebug() << sender->objectName();
    QString ruutu = sender->objectName();

    foreach(QPushButton * ptr,napit)
    {
        if(ptr->objectName() == ruutu)
        {
            qDebug() << " eka iffissä";
            if(ptr->text() == " ")
            {
                qDebug() << " toka iffissä";
                ptr->setText(pelaaja);
                togglePlayer();
            }
        }
    }
    checkGameResult();
}

void MainWindow::togglePlayer()
{
    if(pelaaja == "0")
    {
        pelaaja = "X";
    }
    else
    {
        pelaaja = "0";
    }
    ui->label->setText("Pelaaja "+ pelaaja +" vuorossa");
}

void MainWindow::checkGameResult()
{
    if(checkThree(0, 1, 2))
    {
        printGameResult(0, 1, 2);
    }
    if(checkThree(3, 4, 5))
    {
        printGameResult(3, 4, 5);
    }
    if(checkThree(6, 7, 8))
    {
        printGameResult(6, 7, 8);
    }

    if(checkThree(0, 3, 6))
    {
        printGameResult(0, 3, 6);
    }
    if(checkThree(1, 4, 7))
    {
        printGameResult(1, 4, 7);
    }
    if(checkThree(2, 5, 8))
    {
        printGameResult(2, 5, 8);
    }

    if(checkThree(0, 4, 8))
    {
        printGameResult(0, 4, 8);
    }
    if(checkThree(2, 4, 6))
    {
        printGameResult(2, 4, 6);
    }
}

bool MainWindow::checkThree(int a, int b, int c)
{
    QString str1 = napit.at(a)->text();
    QString str2 = napit.at(b)->text();
    QString str3 = napit.at(c)->text();
    if ( (str1 ==" ") || (str2 == " ") || (str3 == " "))
    {
        return false;
    }
    if( (str1 == str2) && (str2 == str3))
    {
        return true;
    }
    return false;
}

void MainWindow::printGameResult(int a, int b, int c)
{
    QFont font("Times", 10, QFont::Bold);
    napit.at(a)->setFont(font);
    napit.at(b)->setFont(font);
    napit.at(c)->setFont(font);
    togglePlayer();
    ui->label->setText("Pelaaja "+ pelaaja +" voitti !!!!");
    ui->label->setFont(font);
    QPalette palette = ui->label->palette();
    palette.setColor(ui->label->backgroundRole(), Qt::white);
    palette.setColor(ui->label->foregroundRole(), Qt::red);
    ui->label->setPalette(palette);

    // ja varmistetaan vielä, että tämän jälkeen ei voi enää pelata
    foreach(QPushButton * ptr,napit)
    {
        if(ptr->text()==" ")
        {
            ptr->setText("  ");
        }
    }

}



void MainWindow::on_start_clicked()
{
    QFont font("Times", 10, QFont::Medium);
    pelaaja = "0";
    ui->label->setText("Pelaaja "+ pelaaja +" vuorossa");

    i = 0;
    foreach(QPushButton * ptr,napit)
    {
        ptr->setText(" ");
        ptr->setFont(font);
    }
    ui->label->setFont(font);
    QPalette palette = ui->label->palette();
    palette.setColor(ui->label->backgroundRole(), Qt::white);
    palette.setColor(ui->label->foregroundRole(), Qt::black);
    ui->label->setPalette(palette);

}

void MainWindow::on_next_clicked()
{
    this->close();
}

void MainWindow::on_B1_clicked()
{
    handleClick();
}

void MainWindow::on_B2_clicked()
{
    handleClick();
}

void MainWindow::on_B3_clicked()
{
    handleClick();
}

void MainWindow::on_B4_clicked()
{
    handleClick();
}

void MainWindow::on_B5_clicked()
{
    handleClick();
}

void MainWindow::on_B6_clicked()
{
    handleClick();
}

void MainWindow::on_B7_clicked()
{
    handleClick();
}

void MainWindow::on_B8_clicked()
{
    handleClick();
}

void MainWindow::on_B9_clicked()
{
     handleClick();
}
