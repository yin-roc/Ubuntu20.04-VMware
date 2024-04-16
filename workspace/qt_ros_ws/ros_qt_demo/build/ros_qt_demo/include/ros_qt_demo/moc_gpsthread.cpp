/****************************************************************************
** Meta object code from reading C++ file 'gpsthread.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/ros_qt_demo/include/ros_qt_demo/gpsthread.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gpsthread.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_class1_ros_qt_demo__GpsThread_t {
    QByteArrayData data[4];
    char stringdata0[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_class1_ros_qt_demo__GpsThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_class1_ros_qt_demo__GpsThread_t qt_meta_stringdata_class1_ros_qt_demo__GpsThread = {
    {
QT_MOC_LITERAL(0, 0, 29), // "class1_ros_qt_demo::GpsThread"
QT_MOC_LITERAL(1, 30, 18), // "_getGpsRouteSignal"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 4) // "flag"

    },
    "class1_ros_qt_demo::GpsThread\0"
    "_getGpsRouteSignal\0\0flag"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_class1_ros_qt_demo__GpsThread[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void class1_ros_qt_demo::GpsThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GpsThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->_getGpsRouteSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject class1_ros_qt_demo::GpsThread::staticMetaObject = { {
    &QThread::staticMetaObject,
    qt_meta_stringdata_class1_ros_qt_demo__GpsThread.data,
    qt_meta_data_class1_ros_qt_demo__GpsThread,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *class1_ros_qt_demo::GpsThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *class1_ros_qt_demo::GpsThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_class1_ros_qt_demo__GpsThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int class1_ros_qt_demo::GpsThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
