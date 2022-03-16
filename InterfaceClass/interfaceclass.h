#ifndef INTERFACECLASS_H
#define INTERFACECLASS_H

#include "InterfaceClass_global.h"
#include <QDebug>
#include "engineclass.h"

class INTERFACECLASS_EXPORT InterfaceClass
{
public:
    InterfaceClass();
    ~InterfaceClass();
    void generateRandomNumber();
    short getRandomNumber();
private:
    EngineClass * pEngineClass;


};

#endif // INTERFACECLASS_H
