#include "serialport_view.h"
#include "ui_serialport_view.h"

serialport_view::serialport_view(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::serialport_view)
{
    ui->setupUi(this);
}

serialport_view::~serialport_view()
{
    delete ui;
}
