/****************************************************************************
** Meta object code from reading C++ file 'gpsmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/gpsmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gpsmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GPSManager_t {
    QByteArrayData data[12];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GPSManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GPSManager_t qt_meta_stringdata_GPSManager = {
    {
QT_MOC_LITERAL(0, 0, 10), // "GPSManager"
QT_MOC_LITERAL(1, 11, 10), // "routeDrawn"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 18), // "speedLimitReceived"
QT_MOC_LITERAL(4, 42, 5), // "limit"
QT_MOC_LITERAL(5, 48, 10), // "gpsUpdated"
QT_MOC_LITERAL(6, 59, 8), // "latitude"
QT_MOC_LITERAL(7, 68, 9), // "longitude"
QT_MOC_LITERAL(8, 78, 9), // "drawRoute"
QT_MOC_LITERAL(9, 88, 15), // "QWebEnginePage*"
QT_MOC_LITERAL(10, 104, 7), // "webPage"
QT_MOC_LITERAL(11, 112, 14) // "setGPSLocation"

    },
    "GPSManager\0routeDrawn\0\0speedLimitReceived\0"
    "limit\0gpsUpdated\0latitude\0longitude\0"
    "drawRoute\0QWebEnginePage*\0webPage\0"
    "setGPSLocation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GPSManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    1,   40,    2, 0x06 /* Public */,
       5,    2,   43,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   48,    2, 0x0a /* Public */,
      11,    2,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    6,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    6,    7,

       0        // eod
};

void GPSManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GPSManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->routeDrawn(); break;
        case 1: _t->speedLimitReceived((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->gpsUpdated((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 3: _t->drawRoute((*reinterpret_cast< QWebEnginePage*(*)>(_a[1]))); break;
        case 4: _t->setGPSLocation((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWebEnginePage* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GPSManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSManager::routeDrawn)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GPSManager::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSManager::speedLimitReceived)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GPSManager::*)(double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSManager::gpsUpdated)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GPSManager::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_GPSManager.data,
    qt_meta_data_GPSManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GPSManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GPSManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GPSManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GPSManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void GPSManager::routeDrawn()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void GPSManager::speedLimitReceived(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GPSManager::gpsUpdated(double _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
