#ifndef TOKA_H
#define TOKA_H

#include <QDialog>
class MainWindow;

namespace Ui {
class Toka;
}

class Toka : public QDialog
{
    Q_OBJECT

public:
    explicit Toka(QWidget *parent = nullptr,MainWindow * ptr = nullptr);
    ~Toka();
    QString fetchText(void);

private slots:
    void on_send_clicked();
signals:
    void sendText(QString);

private:
    Ui::Toka *ui;
    QString text;
    MainWindow * pMainwindow;
};

#endif // TOKA_H
