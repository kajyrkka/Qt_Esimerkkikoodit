#include "engine.h"



Engine::Engine(QObject *parent) : QObject(parent)
{
    qDebug()<<"At DLL Engine constructor!";
}

Engine::~Engine()
{
    qDebug()<<"At DLL Engine destructor!";
}

void Engine::generate()
{
    qDebug()<<"At DLL Engine generate function!";
    short number = gen.generate();
    emit sendNumberToInterface(number);
}
