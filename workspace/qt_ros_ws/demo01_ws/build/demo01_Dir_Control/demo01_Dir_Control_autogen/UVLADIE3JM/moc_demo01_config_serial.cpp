/****************************************************************************
** Meta object code from reading C++ file 'demo01_config_serial.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/demo01_Dir_Control/src/demo01_config_serial.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'demo01_config_serial.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_demo01_Config_Serial_t {
    QByteArrayData data[18];
    char stringdata0[424];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_demo01_Config_Serial_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_demo01_Config_Serial_t qt_meta_stringdata_demo01_Config_Serial = {
    {
QT_MOC_LITERAL(0, 0, 20), // "demo01_Config_Serial"
QT_MOC_LITERAL(1, 21, 19), // "back_to_main_Signal"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 23), // "Send_back_to_main_slots"
QT_MOC_LITERAL(4, 66, 12), // "TimerEvent_1"
QT_MOC_LITERAL(5, 79, 33), // "on_pushButton_open_serial_cli..."
QT_MOC_LITERAL(6, 113, 17), // "handleSerialError"
QT_MOC_LITERAL(7, 131, 28), // "QSerialPort::SerialPortError"
QT_MOC_LITERAL(8, 160, 5), // "error"
QT_MOC_LITERAL(9, 166, 19), // "on_checkBox_clicked"
QT_MOC_LITERAL(10, 186, 21), // "on_checkBox_2_clicked"
QT_MOC_LITERAL(11, 208, 21), // "on_checkBox_3_clicked"
QT_MOC_LITERAL(12, 230, 26), // "on_pushButton_send_clicked"
QT_MOC_LITERAL(13, 257, 32), // "on_pushButton_clear_send_clicked"
QT_MOC_LITERAL(14, 290, 35), // "on_pushButton_clear_receive_c..."
QT_MOC_LITERAL(15, 326, 20), // "serialPort_readyRead"
QT_MOC_LITERAL(16, 347, 36), // "on_pushButton_reset_send_num_..."
QT_MOC_LITERAL(17, 384, 39) // "on_pushButton_reset_receive_n..."

    },
    "demo01_Config_Serial\0back_to_main_Signal\0"
    "\0Send_back_to_main_slots\0TimerEvent_1\0"
    "on_pushButton_open_serial_clicked\0"
    "handleSerialError\0QSerialPort::SerialPortError\0"
    "error\0on_checkBox_clicked\0"
    "on_checkBox_2_clicked\0on_checkBox_3_clicked\0"
    "on_pushButton_send_clicked\0"
    "on_pushButton_clear_send_clicked\0"
    "on_pushButton_clear_receive_clicked\0"
    "serialPort_readyRead\0"
    "on_pushButton_reset_send_num_clicked\0"
    "on_pushButton_reset_receive_num_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_demo01_Config_Serial[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    1,   88,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x08 /* Private */,
      12,    0,   94,    2, 0x08 /* Private */,
      13,    0,   95,    2, 0x08 /* Private */,
      14,    0,   96,    2, 0x08 /* Private */,
      15,    0,   97,    2, 0x08 /* Private */,
      16,    0,   98,    2, 0x08 /* Private */,
      17,    0,   99,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
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

void demo01_Config_Serial::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<demo01_Config_Serial *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->back_to_main_Signal(); break;
        case 1: _t->Send_back_to_main_slots(); break;
        case 2: _t->TimerEvent_1(); break;
        case 3: _t->on_pushButton_open_serial_clicked(); break;
        case 4: _t->handleSerialError((*reinterpret_cast< QSerialPort::SerialPortError(*)>(_a[1]))); break;
        case 5: _t->on_checkBox_clicked(); break;
        case 6: _t->on_checkBox_2_clicked(); break;
        case 7: _t->on_checkBox_3_clicked(); break;
        case 8: _t->on_pushButton_send_clicked(); break;
        case 9: _t->on_pushButton_clear_send_clicked(); break;
        case 10: _t->on_pushButton_clear_receive_clicked(); break;
        case 11: _t->serialPort_readyRead(); break;
        case 12: _t->on_pushButton_reset_send_num_clicked(); break;
        case 13: _t->on_pushButton_reset_receive_num_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (demo01_Config_Serial::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&demo01_Config_Serial::back_to_main_Signal)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject demo01_Config_Serial::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_demo01_Config_Serial.data,
    qt_meta_data_demo01_Config_Serial,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *demo01_Config_Serial::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *demo01_Config_Serial::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_demo01_Config_Serial.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int demo01_Config_Serial::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void demo01_Config_Serial::back_to_main_Signal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
