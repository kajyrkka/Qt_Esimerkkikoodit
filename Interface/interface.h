#ifndef INTERFACE_H
#define INTERFACE_H

#include "Interface_global.h"
#include <QDebug>
#include <QObject>
#include "engine.h"

class INTERFACE_EXPORT Interface : public QObject
{
    Q_OBJECT
public:
    Interface(QObject * parent = nullptr);
    ~Interface();
    void generateRandomNumber();
signals:
    void sendNumberToExe(short);
public slots:
    void recvGenerateRandomNumberCommand();
    void recvNumberFromEngine(short);
private:
    Engine * pEngine;
};

#endif // INTERFACE_H
