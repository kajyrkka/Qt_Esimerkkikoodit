#include "interfaceclass.h"


InterfaceClass::InterfaceClass()
{
    qDebug()<<"DLL luotu";
    pEngineClass = new EngineClass;
}

InterfaceClass::~InterfaceClass()
{
    qDebug()<<"DLL tuhottu";
    delete pEngineClass;
    pEngineClass = nullptr;
}

void InterfaceClass::generateRandomNumber()
{
    pEngineClass->generateRandomNumber();
}

short InterfaceClass::getRandomNumber()
{
    return pEngineClass->returnValueToInterface();

}
