/****************************************************************************
** Meta object code from reading C++ file 'alarm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Master/alarm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'alarm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Alarm_t {
    QByteArrayData data[9];
    char stringdata[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Alarm_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Alarm_t qt_meta_stringdata_Alarm = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Alarm"
QT_MOC_LITERAL(1, 6, 11), // "WyslijRamke"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 5), // "adres"
QT_MOC_LITERAL(4, 25, 7), // "funkcja"
QT_MOC_LITERAL(5, 33, 9), // "addr_pocz"
QT_MOC_LITERAL(6, 43, 5), // "value"
QT_MOC_LITERAL(7, 49, 15), // "zakutalizujDane"
QT_MOC_LITERAL(8, 65, 28) // "on_wlacz_alarmButton_clicked"

    },
    "Alarm\0WyslijRamke\0\0adres\0funkcja\0"
    "addr_pocz\0value\0zakutalizujDane\0"
    "on_wlacz_alarmButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Alarm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   38,    2, 0x0a /* Public */,
       8,    0,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar, QMetaType::UShort, QMetaType::Short,    3,    4,    5,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Alarm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Alarm *_t = static_cast<Alarm *>(_o);
        switch (_id) {
        case 0: _t->WyslijRamke((*reinterpret_cast< unsigned char(*)>(_a[1])),(*reinterpret_cast< unsigned char(*)>(_a[2])),(*reinterpret_cast< unsigned short(*)>(_a[3])),(*reinterpret_cast< short(*)>(_a[4]))); break;
        case 1: _t->zakutalizujDane(); break;
        case 2: _t->on_wlacz_alarmButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Alarm::*_t)(unsigned char , unsigned char , unsigned short , short );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Alarm::WyslijRamke)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject Alarm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Alarm.data,
      qt_meta_data_Alarm,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Alarm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Alarm::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Alarm.stringdata))
        return static_cast<void*>(const_cast< Alarm*>(this));
    return QWidget::qt_metacast(_clname);
}

int Alarm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Alarm::WyslijRamke(unsigned char _t1, unsigned char _t2, unsigned short _t3, short _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
