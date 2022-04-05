#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QDebug>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

enum states
{
    configuring,    // When user is setting clock and other parameters
    notArmed,       // When user is inside and can either configure or arm the system
    armed,          // When waiting for door to open
    goingToAlarm,   // When door has opened and timer is running for user PIN input
    alarm           // When timeout or incorrect pin
};
enum events
{
    programStart,           // Program started
    configure,              // User enters configuration info from GUI
    storeConfig,            // User stores config and doneConfiguring signal is emitted.
    doneConfiguring,        // User stores configuration
    armTheSystem,           // User initiates armed state
    startMonitoring,        // User gives monitoring command
    userGaveCorrectPin,     // User gives correct pin
    UserGaveWrongPin,       // User gives wrong pin
    pinCorrect,             // User gives 4 digit pin and it's correct
    doorOpened,             // the door that system monitors is opened.
    startAlarmTimer,        // door opened and time to star timer.
    timerExpires,           // 15 second timer expires
    startAlarm              // timer expires and alarm signal is sent
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void runStateMachine(states,events);
    void handleTimeout();

signals:
    void doneConfiguring_signal(states,events);
    void pinCorrect_signal(states,events);
    void startMonitoring_signal(states,events);
    void startAlarmTimer_signal(states,events);
    void startAlarm_signal(states,events);


private slots:
    void on_configure_clicked();
    void on_storeConfig_clicked();
    void on_doorOpened_clicked();
    void on_armThesystem_clicked();
    void on_UserGaveCorrectPin_clicked();
    void on_UserGaveWrongPin_clicked();
    void on_programStart_clicked();



private:
    Ui::MainWindow *ui;
    states State = configuring;
    events Event;
    QTimer timer;

    void ConfiguringHandler(events e);
    void notarmedHandler(events e);
    void armedHandler(events e);
    void alarmHandler(events e);
    void goingtoalarmHandler(events e);
};
#endif // MAINWINDOW_H
