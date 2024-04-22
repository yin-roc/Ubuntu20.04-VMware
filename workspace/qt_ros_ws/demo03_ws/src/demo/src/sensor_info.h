#ifndef SENSOR_INFO_H
#define SENSOR_INFO_H

#include <QWidget>

namespace Ui {
class Sensor_info;
}

class Sensor_info : public QWidget
{
    Q_OBJECT

public:
    explicit Sensor_info(QWidget *parent = nullptr);
    ~Sensor_info();

private:
    Ui::Sensor_info *ui;

signals:
    void back_to_admin_signal(); // 信号：发送前往管理员界面信号

private slots:
    void handle_back_to_admin_signal_slot(); // 槽函数：回退到管理员界面
};

#endif // SENSOR_INFO_H
