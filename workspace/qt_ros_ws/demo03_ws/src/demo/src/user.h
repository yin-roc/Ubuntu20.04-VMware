#ifndef USER_H
#define USER_H

#include <QWidget>

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

private:
    Ui::User *ui;
};

#endif // USER_H
