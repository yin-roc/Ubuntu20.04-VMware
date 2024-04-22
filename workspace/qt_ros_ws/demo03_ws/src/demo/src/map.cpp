#include "map.h"
#include "ui_map.h"

Map::Map(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Map)
{
    ui->setupUi(this);

    this->setWindowTitle("地图调试界面");

    // 返回管理员界面
    connect(ui->pushButton_back_to_admin, &QPushButton::clicked, this, &Map::handle_back_to_admin_signal_slot);
}

Map::~Map()
{
    delete ui;
}



void Map::handle_back_to_admin_signal_slot(){
    emit back_to_admin_signal();
}
