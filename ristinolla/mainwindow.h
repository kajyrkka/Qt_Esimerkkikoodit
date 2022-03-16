#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include <QPushButton>
#include <QDebug>
#include <QFont>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void handleClick();
    void togglePlayer();
    void checkGameResult();
    bool checkThree(int,int,int);
    void printGameResult(int,int,int);
    void kokeilu();

private slots:
    void on_start_clicked();
    void on_next_clicked();
    void on_B1_clicked();
    void on_B2_clicked();
    void on_B3_clicked();
    void on_B4_clicked();
    void on_B5_clicked();
    void on_B6_clicked();
    void on_B7_clicked();
    void on_B8_clicked();
    void on_B9_clicked();

private:
    Ui::MainWindow *ui;
    QVector<QPushButton *> napit;
    QString pelaaja;
    short i;


};
#endif // MAINWINDOW_H
