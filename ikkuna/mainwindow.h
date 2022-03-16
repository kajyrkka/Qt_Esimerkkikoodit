#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "toka.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setTeksti(QString);
    QString getTeksti(void);
    void WriteTextToLineEdit2(void);

private slots:
    void on_close_clicked();
    void on_open_clicked();
public slots:
    void recvText(QString);

private:
    Ui::MainWindow *ui;
    Toka * pToka;
    QString teksti;
};

#endif // MAINWINDOW_H
