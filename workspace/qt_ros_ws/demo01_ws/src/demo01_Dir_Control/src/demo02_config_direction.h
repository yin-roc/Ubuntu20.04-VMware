#ifndef DEMO02_CONFIG_DIRECTION_H
#define DEMO02_CONFIG_DIRECTION_H

#include <QWidget>
#include "ros_node_1.h"
#include <QPushButton>

namespace Ui {
class demo02_config_direction;
}

class demo02_config_direction : public QWidget
{
    Q_OBJECT

public:
    explicit demo02_config_direction(QWidget *parent = nullptr);
    ~demo02_config_direction();
    void Send_back_to_main_slots();

private:
    Ui::demo02_config_direction *ui;

    // 创建一个全局的ROSController对象
    ROSController rosController;

signals:
    void back_to_main_Signal();

private slots:
    void on_pushButton_3_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_clicked();
};

#endif // DEMO02_CONFIG_DIRECTION_H
