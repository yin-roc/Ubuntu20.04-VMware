#ifndef USER_H
#define USER_H

#include <QWidget>
#include <QTimer>

// qnode1
extern double globalSpeed;


namespace Ui {
class User;
}

class User : public QWidget
{
    Q_OBJECT

public:
    explicit User(QWidget *parent = nullptr);
    ~User();
    // 测试用
    void onDoubleSpinBoxValueChanged(double value);

signals:
    void back_menu_signal();

private slots:
    void handle_back_menu_signal_slot();
    void on_work_pushButton_clicked();
    void updateSpeed();

private:
    Ui::User *ui;
    QTimer* timer;
};

#endif // USER_H
