#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    connect(this,SIGNAL(doneConfiguring_signal(states,events)),
            this,SLOT(runStateMachine(states,events)));

    connect(this,SIGNAL(pinCorrect_signal(states,events)),
            this,SLOT(runStateMachine(states,events)));

    connect(this,SIGNAL(startMonitoring_signal(states,events)),
            this,SLOT(runStateMachine(states,events)));

    connect(this,SIGNAL(startAlarmTimer_signal(states,events)),
            this,SLOT(runStateMachine(states,events)));

    connect(this,SIGNAL(startAlarm_signal(states,events)),
            this,SLOT(runStateMachine(states,events)));

    connect(&this->timer,SIGNAL(timeout()),
            this,SLOT(handleTimeout()));

    State = configuring;
    Event = programStart;

    runStateMachine(State,Event);

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::runStateMachine(states s, events e)
{
    switch (s) {

        case configuring:
            ConfiguringHandler(e);
        break;

        case notArmed:
            notarmedHandler(e);
        break;

        case armed:
            armedHandler(e);
        break;

        case alarm:
            alarmHandler(e);
        break;

        case goingToAlarm:
            goingtoalarmHandler(e);
        break;

        default:
            qDebug()<<"State = "<<State<<" and event = "<< e;

    }

}

void MainWindow::handleTimeout()
{
    State = goingToAlarm;
    Event = timerExpires;
    runStateMachine(State,Event);
}





void MainWindow::ConfiguringHandler(events e)
{
    qDebug()<<"State = "<<State<<" and event = "<< e;
    if(e == programStart)
    {
        State = configuring;
        qDebug()<<"Entered to Configuring state";
        ui->label->setText("Entry to CONFIGURING state!");
    }
    else if(e == configure)
    {
        // Just staying in this state
        qDebug()<<"Staying at Configuring state";
        ui->label->setText("Staying at CONFIGURING state!");
    }
    else if(e==storeConfig)
    {
        qDebug()<<"Exiting from Configuring state, emitting doneConfiguring";
        State = notArmed;
        Event = doneConfiguring;
        emit doneConfiguring_signal(State,Event);
        //runStateMachine(State,Event);

    }
    else
    {
        qDebug()<<"Wrong event in this state = "<<State<<" Event = "<<e;
    }
}

void MainWindow::notarmedHandler(events e)
{

    if(e==armTheSystem)
    {
        qDebug()<<"Exiting from NotArmed State emitting startMonitoring signal";
        ui->label->setText("Changing to ARMED state!");
        State = armed;
        Event = startMonitoring;
        emit startMonitoring_signal(State,Event);
        //runStateMachine(State,Event);

    }
    else if(e == doneConfiguring)
    {
        qDebug()<<"Entering to NotArmed State";
        ui->label->setText("Entry to NOTARMED state!");
    }
    else if(e == pinCorrect)
    {
        qDebug()<<"Entering to NotArmed State from Armed, GoingToAlarm or Alarm state";
        ui->label->setText("Entry to NOTARMED state with pinCorrect!");
    }
    else
    {
        qDebug()<<"Wrong event in this state = "<<State<<" Event = "<<e;
    }

}

void MainWindow::armedHandler(events e)
{
    if(e==startMonitoring)
    {
        qDebug()<<"Entering to Armed State";
        ui->label->setText("Entry to ARMED state!");
    }
    else if(e == userGaveCorrectPin)
    {
        qDebug()<<"UserGaveCorrectPin in ARMED state";
        ui->label->setText("Entering to NOTARMED state!");
        State = notArmed;
        Event = pinCorrect;
        emit pinCorrect_signal(State,Event);
        //runStateMachine(State,Event);


    }
    else if(e == UserGaveWrongPin)
    {
        qDebug()<<"Staying at Armed State, userGaveWrongPIN";
        ui->label->setText("Staying at ARMED state!");
    }
    else if(e == doorOpened)
    {
        qDebug()<<"Going to GoingToAlarm, doorOpened";
        ui->label->setText("Going to GOINGTOALAMR state!");
        State = goingToAlarm;
        Event = startAlarmTimer;
        emit startAlarmTimer_signal(State,Event);
        //runStateMachine(State,Event);


    }
    else
    {
        qDebug()<<"Wrong event in this state = "<<State<<" Event = "<<e;
    }



}

void MainWindow::goingtoalarmHandler(events e)
{
    if(e==startAlarmTimer)
    {
        qDebug()<<"Entering to GOINGTOALARM state";
        ui->label->setText("Entry to GOINGTOALARM state!");
        timer.start(5000);

    }
    else if(e == userGaveCorrectPin)
    {
        qDebug()<<"UserGaveCorrectPin in GOINGTOALARM state";
        ui->label->setText("Entering to NOTARMED state!");
        timer.stop();
        State = notArmed;
        Event = pinCorrect;
        emit pinCorrect_signal(State,Event);
    }
    else if(e == timerExpires)
    {
        timer.stop();
        qDebug()<<"timerExpires in GOINGTOALARM state";
        ui->label->setText("Going to ALARM state!");
        State = alarm;
        Event = startAlarm;
        emit startAlarm_signal(State,Event);

    }
    else
    {
        qDebug()<<"Wrong event in this state = "<<State<<" Event = "<<e;
    }
}

void MainWindow::alarmHandler(events e)
{
    if(e==startAlarm)
    {
        qDebug()<<"Entering to ALARM state";
        ui->label->setText("Entry to ALARM state!");
    }
    else if(e == userGaveCorrectPin)
    {
        qDebug()<<"UserGaveCorrectPin in ALARM state";
        ui->label->setText("Entering to NOTARMED state!");
        State = notArmed;
        Event = pinCorrect;
        emit pinCorrect_signal(State,Event);
    }
    else
    {
        qDebug()<<"Wrong event in this state = "<<State<<" Event = "<<e;
    }

}



/******************************************
   Click Handlers
******************************************/
void MainWindow::on_storeConfig_clicked()
{
    // State = configuring
    // Event = storeConfig
    runStateMachine(State,storeConfig);
}

void MainWindow::on_configure_clicked()
{
     State = configuring;
     Event = configure;
    runStateMachine(State,Event);
}


void MainWindow::on_doorOpened_clicked()
{
    // State should already be ARMED
    Event = doorOpened;
    runStateMachine(State,Event);
}


void MainWindow::on_armThesystem_clicked()
{
    //State = notArmed;
    Event = armTheSystem;
    runStateMachine(State,Event);
}


void MainWindow::on_UserGaveCorrectPin_clicked()
{
    // State can be either Armed, GoingToAlarm or Alarm
    Event = userGaveCorrectPin;
    runStateMachine(State,Event);
}


void MainWindow::on_UserGaveWrongPin_clicked()
{
    //State = armed; This way WrongPin can be give at any state
    Event = UserGaveWrongPin;
    runStateMachine(State,Event);
}


void MainWindow::on_programStart_clicked()
{
    State = configuring;
    Event = programStart;
    runStateMachine(State,Event);
}




