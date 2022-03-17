#include "interface.h"


Interface::Interface(QObject *parent) : QObject(parent)
{
    qDebug()<<"At DLL interface constructor!";
    pEngine = new Engine(this);
    connect(pEngine,SIGNAL(sendNumberToInterface(short)),
            this,SLOT(recvNumberFromEngine(short)));
}

Interface::~Interface()
{
    qDebug()<<"At DLL interface destructor!";
    disconnect(pEngine,SIGNAL(sendNumberToInterface(short)),
            this,SLOT(recvNumberFromEngine(short)));
    delete pEngine;
    pEngine = nullptr;
}

void Interface::generateRandomNumber()
{
    qDebug()<<"At DLL interface function = generateRandomNumber()";
    pEngine->generate();
}

void Interface::recvGenerateRandomNumberCommand()
{
    qDebug()<<"At DLL interface SLOT function = recvGenerateRandomNumberCommand()";
    pEngine->generate();
}

void Interface::recvNumberFromEngine(short num)
{
    qDebug()<<"At DLL interface SLOT function = recvNumberFromEngine()";
    emit sendNumberToExe(num);
}
