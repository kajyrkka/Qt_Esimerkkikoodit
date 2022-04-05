/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[18];
    char stringdata0[333];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 22), // "doneConfiguring_signal"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 6), // "states"
QT_MOC_LITERAL(4, 42, 6), // "events"
QT_MOC_LITERAL(5, 49, 17), // "pinCorrect_signal"
QT_MOC_LITERAL(6, 67, 22), // "startMonitoring_signal"
QT_MOC_LITERAL(7, 90, 22), // "startAlarmTimer_signal"
QT_MOC_LITERAL(8, 113, 17), // "startAlarm_signal"
QT_MOC_LITERAL(9, 131, 15), // "runStateMachine"
QT_MOC_LITERAL(10, 147, 13), // "handleTimeout"
QT_MOC_LITERAL(11, 161, 20), // "on_configure_clicked"
QT_MOC_LITERAL(12, 182, 22), // "on_storeConfig_clicked"
QT_MOC_LITERAL(13, 205, 21), // "on_doorOpened_clicked"
QT_MOC_LITERAL(14, 227, 23), // "on_armThesystem_clicked"
QT_MOC_LITERAL(15, 251, 29), // "on_UserGaveCorrectPin_clicked"
QT_MOC_LITERAL(16, 281, 27), // "on_UserGaveWrongPin_clicked"
QT_MOC_LITERAL(17, 309, 23) // "on_programStart_clicked"

    },
    "MainWindow\0doneConfiguring_signal\0\0"
    "states\0events\0pinCorrect_signal\0"
    "startMonitoring_signal\0startAlarmTimer_signal\0"
    "startAlarm_signal\0runStateMachine\0"
    "handleTimeout\0on_configure_clicked\0"
    "on_storeConfig_clicked\0on_doorOpened_clicked\0"
    "on_armThesystem_clicked\0"
    "on_UserGaveCorrectPin_clicked\0"
    "on_UserGaveWrongPin_clicked\0"
    "on_programStart_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   84,    2, 0x06 /* Public */,
       5,    2,   89,    2, 0x06 /* Public */,
       6,    2,   94,    2, 0x06 /* Public */,
       7,    2,   99,    2, 0x06 /* Public */,
       8,    2,  104,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    2,  109,    2, 0x0a /* Public */,
      10,    0,  114,    2, 0x0a /* Public */,
      11,    0,  115,    2, 0x08 /* Private */,
      12,    0,  116,    2, 0x08 /* Private */,
      13,    0,  117,    2, 0x08 /* Private */,
      14,    0,  118,    2, 0x08 /* Private */,
      15,    0,  119,    2, 0x08 /* Private */,
      16,    0,  120,    2, 0x08 /* Private */,
      17,    0,  121,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4,    2,    2,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4,    2,    2,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4,    2,    2,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4,    2,    2,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4,    2,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->doneConfiguring_signal((*reinterpret_cast< states(*)>(_a[1])),(*reinterpret_cast< events(*)>(_a[2]))); break;
        case 1: _t->pinCorrect_signal((*reinterpret_cast< states(*)>(_a[1])),(*reinterpret_cast< events(*)>(_a[2]))); break;
        case 2: _t->startMonitoring_signal((*reinterpret_cast< states(*)>(_a[1])),(*reinterpret_cast< events(*)>(_a[2]))); break;
        case 3: _t->startAlarmTimer_signal((*reinterpret_cast< states(*)>(_a[1])),(*reinterpret_cast< events(*)>(_a[2]))); break;
        case 4: _t->startAlarm_signal((*reinterpret_cast< states(*)>(_a[1])),(*reinterpret_cast< events(*)>(_a[2]))); break;
        case 5: _t->runStateMachine((*reinterpret_cast< states(*)>(_a[1])),(*reinterpret_cast< events(*)>(_a[2]))); break;
        case 6: _t->handleTimeout(); break;
        case 7: _t->on_configure_clicked(); break;
        case 8: _t->on_storeConfig_clicked(); break;
        case 9: _t->on_doorOpened_clicked(); break;
        case 10: _t->on_armThesystem_clicked(); break;
        case 11: _t->on_UserGaveCorrectPin_clicked(); break;
        case 12: _t->on_UserGaveWrongPin_clicked(); break;
        case 13: _t->on_programStart_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(states , events );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::doneConfiguring_signal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(states , events );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::pinCorrect_signal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(states , events );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::startMonitoring_signal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(states , events );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::startAlarmTimer_signal)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(states , events );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::startAlarm_signal)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::doneConfiguring_signal(states _t1, events _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::pinCorrect_signal(states _t1, events _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::startMonitoring_signal(states _t1, events _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWindow::startAlarmTimer_signal(states _t1, events _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MainWindow::startAlarm_signal(states _t1, events _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
