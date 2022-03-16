#ifndef ENGINECLASS_H
#define ENGINECLASS_H
#include <QRandomGenerator>
#include <QObject>
class EngineClass : public QObject
{
    Q_OBJECT
public:
    EngineClass(QObject * parent = nullptr);
    short returnValueToInterface();
    void generateRandomNumber();
private:
    short number;
    QRandomGenerator gen;
signals:
    void sendNumberToInterface(short);

};

#endif // ENGINECLASS_H
