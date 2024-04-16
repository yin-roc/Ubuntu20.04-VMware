#include "basic.h"
#include "ui_basic.h"
#include <QDebug>

Basic::Basic(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Basic)
{
    ui->setupUi(this);
}

Basic::~Basic()
{
    delete ui;
}

void Basic::on_pushButton_start_clicked()
{

}


void Basic::on_pushButton_turtle_clicked()
{
    qDebug() << "on_pushButton_turtle_clicked";

    system("gnome-terminal -- bash -c 'source /opt/ros/noetic/setup.bash ;rosrun turtlesim turtlesim_node'&");
    //system("gnome-terminal -- bash -c 'source /opt/ros/noetic/setup.bash ;rosrun turtlesim turtle_teleop_key'&");
}


void Basic::on_pushButton_3_clicked()
{

}


void Basic::on_pushButton_4_clicked()
{

}

