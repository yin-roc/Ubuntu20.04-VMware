#ifndef ADMIN_H
#define ADMIN_H

#include <QWidget>
#include "serial.h"

namespace Ui {
class Admin;
}

class Admin : public QWidget
{
    Q_OBJECT

public:
    explicit Admin(QWidget *parent = nullptr);
    ~Admin();
    void deal_serial_back_signal_slots();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Admin *ui;
    Serial ser_screen;
};

#endif // ADMIN_H
