#include "view.h"
#include "ui_view.h"

view::view(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::view)
{
    ui->setupUi(this);
}

view::~view()
{
    delete ui;
}
