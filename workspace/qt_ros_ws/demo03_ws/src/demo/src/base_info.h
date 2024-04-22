#ifndef BASE_INFO_H
#define BASE_INFO_H

#include <QWidget>

namespace Ui {
class Base_info;
}

class Base_info : public QWidget
{
    Q_OBJECT

public:
    explicit Base_info(QWidget *parent = nullptr);
    ~Base_info();

private:
    Ui::Base_info *ui;

signals:
    void back_to_admin_signal();

private slots:
    void handle_back_to_admin_signal_slot();
};

#endif // BASE_INFO_H
