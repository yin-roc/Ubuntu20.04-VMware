/****************************************************************************
** Meta object code from reading C++ file 'admin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/demo/src/admin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'admin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Admin_t {
    QByteArrayData data[12];
    char stringdata0[313];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Admin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Admin_t qt_meta_stringdata_Admin = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Admin"
QT_MOC_LITERAL(1, 6, 16), // "back_menu_signal"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 31), // "handle_back_to_menu_signal_slot"
QT_MOC_LITERAL(4, 56, 32), // "on_pushButton_ser_screen_clicked"
QT_MOC_LITERAL(5, 89, 33), // "on_pushButton_base_screen_cli..."
QT_MOC_LITERAL(6, 123, 32), // "on_pushButton_map_screen_clicked"
QT_MOC_LITERAL(7, 156, 35), // "on_pushButton_sensor_screen_c..."
QT_MOC_LITERAL(8, 192, 28), // "deal_serial_back_signal_slot"
QT_MOC_LITERAL(9, 221, 31), // "deal_base_info_back_signal_slot"
QT_MOC_LITERAL(10, 253, 25), // "deal_map_back_signal_slot"
QT_MOC_LITERAL(11, 279, 33) // "deal_sensor_info_back_signal_..."

    },
    "Admin\0back_menu_signal\0\0"
    "handle_back_to_menu_signal_slot\0"
    "on_pushButton_ser_screen_clicked\0"
    "on_pushButton_base_screen_clicked\0"
    "on_pushButton_map_screen_clicked\0"
    "on_pushButton_sensor_screen_clicked\0"
    "deal_serial_back_signal_slot\0"
    "deal_base_info_back_signal_slot\0"
    "deal_map_back_signal_slot\0"
    "deal_sensor_info_back_signal_slot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Admin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

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

       0        // eod
};

void Admin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Admin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->back_menu_signal(); break;
        case 1: _t->handle_back_to_menu_signal_slot(); break;
        case 2: _t->on_pushButton_ser_screen_clicked(); break;
        case 3: _t->on_pushButton_base_screen_clicked(); break;
        case 4: _t->on_pushButton_map_screen_clicked(); break;
        case 5: _t->on_pushButton_sensor_screen_clicked(); break;
        case 6: _t->deal_serial_back_signal_slot(); break;
        case 7: _t->deal_base_info_back_signal_slot(); break;
        case 8: _t->deal_map_back_signal_slot(); break;
        case 9: _t->deal_sensor_info_back_signal_slot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Admin::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Admin::back_menu_signal)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Admin::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Admin.data,
    qt_meta_data_Admin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Admin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Admin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Admin.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Admin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void Admin::back_menu_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
