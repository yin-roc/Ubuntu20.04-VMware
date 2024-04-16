#include "../include/ros_qt_demo/slamresviewer.hpp"
#include "ui_slamresviewer.h"
#include <QDebug>
#include <QTimer>

SlamResViewer::SlamResViewer(QDir ip, QStringList il) : _imagePath(ip), _imageList(il)
{
    ui = new Ui::SlamResViewer();
    ui->setupUi(this);
    ui->label->resize(ui->widget->size());
    qDebug() <<  ui->label->size() << endl;
    init();

}

SlamResViewer::~SlamResViewer()
{
    delete ui;
}

void SlamResViewer::resizeEvent(QResizeEvent *event)
{
    QWidget::resizeEvent(event);
    ui->label->resize(ui->widget->size());
    qDebug() << "slam res resize event triggered." << endl;
    qDebug() << ui->label->size() << endl;
}

void SlamResViewer::_showPic(const QString &pic)
{
    QPixmap pix(pic);
    QPixmap dest = pix.scaled(ui->label->size(), Qt::KeepAspectRatioByExpanding);
    qDebug() << "this time label's size : " << ui->label->size() << endl;
    ui->label->setScaledContents(true);
    ui->label->setPixmap(dest);
    ui->label->show();
}

bool SlamResViewer::eventFilter(QObject *obj, QEvent *event)
{
    if(obj==ui->label && event->type()==QEvent::MouseButtonPress)
    {

        static int flag=1;
        qDebug() << flag << endl;
        if(flag>_imageList.size() - 1)
        {
            flag=0;
        }
        QString tmpPicPath = _imagePath.path() + "/" + _imageList[flag];
        this->setWindowTitle(_imageList[flag]);
        _showPic(tmpPicPath);
        ++flag;
        return 1;
    }
    return false;

}

void SlamResViewer::init()
{
    QTimer::singleShot(300, this, [=](){
        ui->label->installEventFilter(this);
        QString tmpPicPath = _imagePath.path() + "/" + _imageList[0];
        this->setWindowTitle(_imageList[0]);
        _showPic(tmpPicPath);
    });
}
