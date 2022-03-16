#include "engineclass.h"

EngineClass::EngineClass()
{

}

short EngineClass::returnValueToInterface()
{
    return number;
}

void EngineClass::generateRandomNumber()
{
    number = gen.generate();
}
