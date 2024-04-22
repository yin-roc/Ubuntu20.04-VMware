#ifndef ADMIN_H
#define ADMIN_H

#include <QWidget>
#include "serial.h"
#include "base_info.h"
#include "map.h"
#include "sensor_info.h"

namespace Ui {
class Admin;
}

class Admin : public QWidget
{
    Q_OBJECT

public:
    explicit Admin(QWidget *parent = nullptr);
    ~Admin();



signals:
    void back_menu_signal();

private slots:
    void handle_back_to_menu_signal_slot(); // 槽函数：发送回退到主菜单信号
    void on_pushButton_ser_screen_clicked(); // 槽函数：前往串口界面
    void on_pushButton_base_screen_clicked(); // 槽函数：前往底盘信息界面
    void on_pushButton_map_screen_clicked(); // 槽函数：前往地图调试界面
    void on_pushButton_sensor_screen_clicked(); // 槽函数：前往传感器信息界面

    // 处理各子界面回退到本界面（管理员）信号
    void deal_serial_back_signal_slot();
    void deal_base_info_back_signal_slot();
    void deal_map_back_signal_slot();
    void deal_sensor_info_back_signal_slot();



private:
    Ui::Admin *ui;
    Serial ser_screen;
    Base_info base_screen;
    Map map_screen;
    Sensor_info sensor_screen;
};

#endif // ADMIN_H
