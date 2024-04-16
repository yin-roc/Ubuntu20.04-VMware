/****************************************************************************
** Meta object code from reading C++ file 'slamset.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/ros_qt_demo/include/ros_qt_demo/slamset.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'slamset.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_slamSet_t {
    QByteArrayData data[14];
    char stringdata0[311];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_slamSet_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_slamSet_t qt_meta_stringdata_slamSet = {
    {
QT_MOC_LITERAL(0, 0, 7), // "slamSet"
QT_MOC_LITERAL(1, 8, 19), // "_sendFinalSlamShCmd"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 3), // "cmd"
QT_MOC_LITERAL(4, 33, 32), // "on_lowest_height_confirm_clicked"
QT_MOC_LITERAL(5, 66, 33), // "on_highest_height_confirm_cli..."
QT_MOC_LITERAL(6, 100, 28), // "on_clr_screen_button_clicked"
QT_MOC_LITERAL(7, 129, 21), // "on_reload_bag_clicked"
QT_MOC_LITERAL(8, 151, 25), // "on_confirm_button_clicked"
QT_MOC_LITERAL(9, 177, 24), // "on_cancel_button_clicked"
QT_MOC_LITERAL(10, 202, 27), // "on_add_brkpoint_btn_clicked"
QT_MOC_LITERAL(11, 230, 27), // "on_del_brkpoint_btn_clicked"
QT_MOC_LITERAL(12, 258, 30), // "on_reveal_brkpoint_btn_clicked"
QT_MOC_LITERAL(13, 289, 21) // "on_pushButton_clicked"

    },
    "slamSet\0_sendFinalSlamShCmd\0\0cmd\0"
    "on_lowest_height_confirm_clicked\0"
    "on_highest_height_confirm_clicked\0"
    "on_clr_screen_button_clicked\0"
    "on_reload_bag_clicked\0on_confirm_button_clicked\0"
    "on_cancel_button_clicked\0"
    "on_add_brkpoint_btn_clicked\0"
    "on_del_brkpoint_btn_clicked\0"
    "on_reveal_brkpoint_btn_clicked\0"
    "on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_slamSet[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   72,    2, 0x08 /* Private */,
       5,    0,   73,    2, 0x08 /* Private */,
       6,    0,   74,    2, 0x08 /* Private */,
       7,    0,   75,    2, 0x08 /* Private */,
       8,    0,   76,    2, 0x08 /* Private */,
       9,    0,   77,    2, 0x08 /* Private */,
      10,    0,   78,    2, 0x08 /* Private */,
      11,    0,   79,    2, 0x08 /* Private */,
      12,    0,   80,    2, 0x08 /* Private */,
      13,    0,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
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

void slamSet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<slamSet *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->_sendFinalSlamShCmd((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_lowest_height_confirm_clicked(); break;
        case 2: _t->on_highest_height_confirm_clicked(); break;
        case 3: _t->on_clr_screen_button_clicked(); break;
        case 4: _t->on_reload_bag_clicked(); break;
        case 5: _t->on_confirm_button_clicked(); break;
        case 6: _t->on_cancel_button_clicked(); break;
        case 7: _t->on_add_brkpoint_btn_clicked(); break;
        case 8: _t->on_del_brkpoint_btn_clicked(); break;
        case 9: _t->on_reveal_brkpoint_btn_clicked(); break;
        case 10: _t->on_pushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (slamSet::*)(const QString & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&slamSet::_sendFinalSlamShCmd)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject slamSet::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_slamSet.data,
    qt_meta_data_slamSet,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *slamSet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *slamSet::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_slamSet.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int slamSet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void slamSet::_sendFinalSlamShCmd(const QString & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< slamSet *>(this), &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_FileCheckThread_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileCheckThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileCheckThread_t qt_meta_stringdata_FileCheckThread = {
    {
QT_MOC_LITERAL(0, 0, 15) // "FileCheckThread"

    },
    "FileCheckThread"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileCheckThread[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void FileCheckThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject FileCheckThread::staticMetaObject = { {
    &QThread::staticMetaObject,
    qt_meta_stringdata_FileCheckThread.data,
    qt_meta_data_FileCheckThread,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FileCheckThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileCheckThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FileCheckThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int FileCheckThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
