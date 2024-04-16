/****************************************************************************
** Meta object code from reading C++ file 'main_window.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/ros_qt_demo/include/ros_qt_demo/main_window.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main_window.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_class1_ros_qt_demo__MainWindow_t {
    QByteArrayData data[38];
    char stringdata0[724];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_class1_ros_qt_demo__MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_class1_ros_qt_demo__MainWindow_t qt_meta_stringdata_class1_ros_qt_demo__MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 30), // "class1_ros_qt_demo::MainWindow"
QT_MOC_LITERAL(1, 31, 7), // "ExitWin"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 19), // "_killGpsRouteThread"
QT_MOC_LITERAL(4, 60, 3), // "run"
QT_MOC_LITERAL(5, 64, 24), // "on_actionAbout_triggered"
QT_MOC_LITERAL(6, 89, 25), // "on_button_connect_clicked"
QT_MOC_LITERAL(7, 115, 5), // "check"
QT_MOC_LITERAL(8, 121, 35), // "on_checkbox_use_autoip_stateC..."
QT_MOC_LITERAL(9, 157, 5), // "state"
QT_MOC_LITERAL(10, 163, 17), // "updateLoggingView"
QT_MOC_LITERAL(11, 181, 15), // "shutdownMessage"
QT_MOC_LITERAL(12, 197, 15), // "_finalSlamShCmd"
QT_MOC_LITERAL(13, 213, 3), // "cmd"
QT_MOC_LITERAL(14, 217, 22), // "on_init_button_clicked"
QT_MOC_LITERAL(15, 240, 25), // "on_route_generate_clicked"
QT_MOC_LITERAL(16, 266, 24), // "on_locate_button_clicked"
QT_MOC_LITERAL(17, 291, 26), // "on_load_map_button_clicked"
QT_MOC_LITERAL(18, 318, 27), // "on_radioButton_diy1_clicked"
QT_MOC_LITERAL(19, 346, 7), // "checked"
QT_MOC_LITERAL(20, 354, 28), // "on_radioButton_plan2_clicked"
QT_MOC_LITERAL(21, 383, 28), // "on_radioButton_plan1_clicked"
QT_MOC_LITERAL(22, 412, 28), // "on_button_set_startP_clicked"
QT_MOC_LITERAL(23, 441, 34), // "on_mouse_mark_radio_button_cl..."
QT_MOC_LITERAL(24, 476, 32), // "on_gps_mark_radio_button_clicked"
QT_MOC_LITERAL(25, 509, 22), // "on_mark_button_clicked"
QT_MOC_LITERAL(26, 532, 22), // "on_bringup_all_clicked"
QT_MOC_LITERAL(27, 555, 26), // "on_follow_launcher_clicked"
QT_MOC_LITERAL(28, 582, 24), // "on_plan_launcher_clicked"
QT_MOC_LITERAL(29, 607, 24), // "on_slam_launcher_clicked"
QT_MOC_LITERAL(30, 632, 31), // "on_sensor_record_button_clicked"
QT_MOC_LITERAL(31, 664, 14), // "getCoordinates"
QT_MOC_LITERAL(32, 679, 3), // "lon"
QT_MOC_LITERAL(33, 683, 3), // "lat"
QT_MOC_LITERAL(34, 687, 11), // "getDistance"
QT_MOC_LITERAL(35, 699, 3), // "dis"
QT_MOC_LITERAL(36, 703, 12), // "receivePoint"
QT_MOC_LITERAL(37, 716, 7) // "jsDebug"

    },
    "class1_ros_qt_demo::MainWindow\0ExitWin\0"
    "\0_killGpsRouteThread\0run\0"
    "on_actionAbout_triggered\0"
    "on_button_connect_clicked\0check\0"
    "on_checkbox_use_autoip_stateChanged\0"
    "state\0updateLoggingView\0shutdownMessage\0"
    "_finalSlamShCmd\0cmd\0on_init_button_clicked\0"
    "on_route_generate_clicked\0"
    "on_locate_button_clicked\0"
    "on_load_map_button_clicked\0"
    "on_radioButton_diy1_clicked\0checked\0"
    "on_radioButton_plan2_clicked\0"
    "on_radioButton_plan1_clicked\0"
    "on_button_set_startP_clicked\0"
    "on_mouse_mark_radio_button_clicked\0"
    "on_gps_mark_radio_button_clicked\0"
    "on_mark_button_clicked\0on_bringup_all_clicked\0"
    "on_follow_launcher_clicked\0"
    "on_plan_launcher_clicked\0"
    "on_slam_launcher_clicked\0"
    "on_sensor_record_button_clicked\0"
    "getCoordinates\0lon\0lat\0getDistance\0"
    "dis\0receivePoint\0jsDebug"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_class1_ros_qt_demo__MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  154,    2, 0x06 /* Public */,
       3,    1,  155,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,  158,    2, 0x0a /* Public */,
       6,    1,  159,    2, 0x0a /* Public */,
       8,    1,  162,    2, 0x0a /* Public */,
      10,    0,  165,    2, 0x0a /* Public */,
      11,    0,  166,    2, 0x0a /* Public */,
      12,    1,  167,    2, 0x0a /* Public */,
      14,    0,  170,    2, 0x08 /* Private */,
      15,    0,  171,    2, 0x08 /* Private */,
      16,    0,  172,    2, 0x08 /* Private */,
      17,    0,  173,    2, 0x08 /* Private */,
      18,    1,  174,    2, 0x08 /* Private */,
      20,    1,  177,    2, 0x08 /* Private */,
      21,    1,  180,    2, 0x08 /* Private */,
      22,    1,  183,    2, 0x08 /* Private */,
      23,    0,  186,    2, 0x08 /* Private */,
      24,    0,  187,    2, 0x08 /* Private */,
      25,    0,  188,    2, 0x08 /* Private */,
      26,    0,  189,    2, 0x08 /* Private */,
      27,    0,  190,    2, 0x08 /* Private */,
      28,    0,  191,    2, 0x08 /* Private */,
      29,    0,  192,    2, 0x08 /* Private */,
      30,    0,  193,    2, 0x08 /* Private */,
      31,    2,  194,    2, 0x0a /* Public */,
      34,    1,  199,    2, 0x0a /* Public */,
      36,    2,  202,    2, 0x0a /* Public */,
      37,    1,  207,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   32,   33,
    QMetaType::Void, QMetaType::Double,   35,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   32,   33,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void class1_ros_qt_demo::MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ExitWin(); break;
        case 1: _t->_killGpsRouteThread((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_actionAbout_triggered(); break;
        case 3: _t->on_button_connect_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_checkbox_use_autoip_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->updateLoggingView(); break;
        case 6: _t->shutdownMessage(); break;
        case 7: _t->_finalSlamShCmd((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_init_button_clicked(); break;
        case 9: _t->on_route_generate_clicked(); break;
        case 10: _t->on_locate_button_clicked(); break;
        case 11: _t->on_load_map_button_clicked(); break;
        case 12: _t->on_radioButton_diy1_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->on_radioButton_plan2_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->on_radioButton_plan1_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->on_button_set_startP_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->on_mouse_mark_radio_button_clicked(); break;
        case 17: _t->on_gps_mark_radio_button_clicked(); break;
        case 18: _t->on_mark_button_clicked(); break;
        case 19: _t->on_bringup_all_clicked(); break;
        case 20: _t->on_follow_launcher_clicked(); break;
        case 21: _t->on_plan_launcher_clicked(); break;
        case 22: _t->on_slam_launcher_clicked(); break;
        case 23: _t->on_sensor_record_button_clicked(); break;
        case 24: _t->getCoordinates((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 25: _t->getDistance((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 26: _t->receivePoint((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 27: _t->jsDebug((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::ExitWin)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::_killGpsRouteThread)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject class1_ros_qt_demo::MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_class1_ros_qt_demo__MainWindow.data,
    qt_meta_data_class1_ros_qt_demo__MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *class1_ros_qt_demo::MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *class1_ros_qt_demo::MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_class1_ros_qt_demo__MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int class1_ros_qt_demo::MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 28)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 28;
    }
    return _id;
}

// SIGNAL 0
void class1_ros_qt_demo::MainWindow::ExitWin()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void class1_ros_qt_demo::MainWindow::_killGpsRouteThread(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
