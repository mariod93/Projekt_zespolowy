/****************************************************************************
** Meta object code from reading C++ file 'modbus.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Master/modbus.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modbus.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Modbus_t {
    QByteArrayData data[23];
    char stringdata[258];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Modbus_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Modbus_t qt_meta_stringdata_Modbus = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Modbus"
QT_MOC_LITERAL(1, 7, 10), // "frameReady"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 5), // "Frame"
QT_MOC_LITERAL(4, 25, 5), // "frame"
QT_MOC_LITERAL(5, 31, 8), // "noweDane"
QT_MOC_LITERAL(6, 40, 11), // "nextRequest"
QT_MOC_LITERAL(7, 52, 7), // "comOpen"
QT_MOC_LITERAL(8, 60, 16), // "sendTempRequests"
QT_MOC_LITERAL(9, 77, 8), // "openPort"
QT_MOC_LITERAL(10, 86, 9), // "statePort"
QT_MOC_LITERAL(11, 96, 9), // "closePort"
QT_MOC_LITERAL(12, 106, 11), // "showContent"
QT_MOC_LITERAL(13, 118, 9), // "writeData"
QT_MOC_LITERAL(14, 128, 4), // "data"
QT_MOC_LITERAL(15, 133, 8), // "readData"
QT_MOC_LITERAL(16, 142, 11), // "sendRequest"
QT_MOC_LITERAL(17, 154, 17), // "sendCyclicRequest"
QT_MOC_LITERAL(18, 172, 23), // "recive_data_from_widget"
QT_MOC_LITERAL(19, 196, 16), // "startTransmision"
QT_MOC_LITERAL(20, 213, 12), // "processFrame"
QT_MOC_LITERAL(21, 226, 9), // "isFrameOk"
QT_MOC_LITERAL(22, 236, 21) // "zapiszDaneDoStruktury"

    },
    "Modbus\0frameReady\0\0Frame\0frame\0noweDane\0"
    "nextRequest\0comOpen\0sendTempRequests\0"
    "openPort\0statePort\0closePort\0showContent\0"
    "writeData\0data\0readData\0sendRequest\0"
    "sendCyclicRequest\0recive_data_from_widget\0"
    "startTransmision\0processFrame\0isFrameOk\0"
    "zapiszDaneDoStruktury"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Modbus[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  109,    2, 0x06 /* Public */,
       5,    0,  112,    2, 0x06 /* Public */,
       6,    0,  113,    2, 0x06 /* Public */,
       7,    0,  114,    2, 0x06 /* Public */,
       8,    0,  115,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,  116,    2, 0x0a /* Public */,
      10,    0,  117,    2, 0x0a /* Public */,
      11,    0,  118,    2, 0x0a /* Public */,
      12,    0,  119,    2, 0x0a /* Public */,
      13,    1,  120,    2, 0x0a /* Public */,
      15,    0,  123,    2, 0x0a /* Public */,
      16,    4,  124,    2, 0x0a /* Public */,
      16,    1,  133,    2, 0x0a /* Public */,
      17,    0,  136,    2, 0x0a /* Public */,
      18,    4,  137,    2, 0x0a /* Public */,
      19,    0,  146,    2, 0x0a /* Public */,
      20,    0,  147,    2, 0x08 /* Private */,
      21,    1,  148,    2, 0x08 /* Private */,
      22,    1,  151,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar, QMetaType::UShort, QMetaType::Short,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar, QMetaType::UShort, QMetaType::Short,    2,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Modbus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Modbus *_t = static_cast<Modbus *>(_o);
        switch (_id) {
        case 0: _t->frameReady((*reinterpret_cast< Frame(*)>(_a[1]))); break;
        case 1: _t->noweDane(); break;
        case 2: _t->nextRequest(); break;
        case 3: _t->comOpen(); break;
        case 4: _t->sendTempRequests(); break;
        case 5: { bool _r = _t->openPort();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->statePort();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: _t->closePort(); break;
        case 8: _t->showContent(); break;
        case 9: _t->writeData((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 10: _t->readData(); break;
        case 11: _t->sendRequest((*reinterpret_cast< unsigned char(*)>(_a[1])),(*reinterpret_cast< unsigned char(*)>(_a[2])),(*reinterpret_cast< unsigned short(*)>(_a[3])),(*reinterpret_cast< short(*)>(_a[4]))); break;
        case 12: _t->sendRequest((*reinterpret_cast< Frame(*)>(_a[1]))); break;
        case 13: _t->sendCyclicRequest(); break;
        case 14: _t->recive_data_from_widget((*reinterpret_cast< unsigned char(*)>(_a[1])),(*reinterpret_cast< unsigned char(*)>(_a[2])),(*reinterpret_cast< unsigned short(*)>(_a[3])),(*reinterpret_cast< short(*)>(_a[4]))); break;
        case 15: _t->startTransmision(); break;
        case 16: _t->processFrame(); break;
        case 17: { bool _r = _t->isFrameOk((*reinterpret_cast< Frame(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: _t->zapiszDaneDoStruktury((*reinterpret_cast< Frame(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Modbus::*_t)(Frame );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Modbus::frameReady)) {
                *result = 0;
            }
        }
        {
            typedef void (Modbus::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Modbus::noweDane)) {
                *result = 1;
            }
        }
        {
            typedef void (Modbus::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Modbus::nextRequest)) {
                *result = 2;
            }
        }
        {
            typedef void (Modbus::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Modbus::comOpen)) {
                *result = 3;
            }
        }
        {
            typedef void (Modbus::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Modbus::sendTempRequests)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject Modbus::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Modbus.data,
      qt_meta_data_Modbus,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Modbus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Modbus::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Modbus.stringdata))
        return static_cast<void*>(const_cast< Modbus*>(this));
    return QWidget::qt_metacast(_clname);
}

int Modbus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void Modbus::frameReady(Frame _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Modbus::noweDane()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void Modbus::nextRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void Modbus::comOpen()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void Modbus::sendTempRequests()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
