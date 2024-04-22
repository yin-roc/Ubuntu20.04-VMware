#ifndef MAP_H
#define MAP_H

#include <QWidget>

namespace Ui {
class Map;
}

class Map : public QWidget
{
    Q_OBJECT

public:
    explicit Map(QWidget *parent = nullptr);
    ~Map();

private:
    Ui::Map *ui;

signals:
    void back_to_admin_signal(); // 信号：发送前往管理员界面信号

private slots:
    void handle_back_to_admin_signal_slot(); // 槽函数：回退到管理员界面

};

#endif // MAP_H
