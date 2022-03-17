#ifndef ENGINE_H
#define ENGINE_H

#include <QObject>
#include <QDebug>
#include <QRandomGenerator>

class Engine : public QObject
{
    Q_OBJECT
public:
    Engine(QObject * parent = nullptr);
    ~Engine();
    void generate();
signals:
    void sendNumberToInterface(short);

private:
    QRandomGenerator gen;

};

#endif // ENGINE_H
