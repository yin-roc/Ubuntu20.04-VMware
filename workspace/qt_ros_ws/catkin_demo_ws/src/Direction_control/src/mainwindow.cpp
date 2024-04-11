#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(int argc, char ** argv, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton, &QPushButton::clicked, this, [=](){
        ROSNode node(argc, argv);
    });
    ui->
}

MainWindow::~MainWindow()
{
    delete ui;
}
