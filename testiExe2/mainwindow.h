#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "interface.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_function_clicked();
    void on_signal_clicked();

public slots:
    void recvNumberFunction(short);
    void recvNumberSignal(short);
signals:
    void generateNumber();

private:
    Ui::MainWindow *ui;
    Interface * pInterface;
};
#endif // MAINWINDOW_H
