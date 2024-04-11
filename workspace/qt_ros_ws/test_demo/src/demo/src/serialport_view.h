#ifndef SERIALPORT_VIEW_H
#define SERIALPORT_VIEW_H

#include <QWidget>

namespace Ui {
class serialport_view;
}

class serialport_view : public QWidget
{
    Q_OBJECT

public:
    explicit serialport_view(QWidget *parent = nullptr);
    ~serialport_view();

private:
    Ui::serialport_view *ui;
};

#endif // SERIALPORT_VIEW_H
