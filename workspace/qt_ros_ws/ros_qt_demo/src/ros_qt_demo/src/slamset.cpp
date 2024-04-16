#include "../include/ros_qt_demo/slamset.hpp"
#include "ui_slamset.h"
#include <QDebug>
#include <QMessageBox>
#include <QFile>
#include <QDir>
#include <QInputDialog>
#include <QProcess>

slamSet::slamSet(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::slamSet)
{
    //qDebug() << "slam window generated." << endl;
    init();
    setAttribute(Qt::WA_DeleteOnClose);
    _fileCheckThread->run();
}

slamSet::~slamSet()
{
    deleteHeap();
    qDebug() << "slam window desctruted." << endl;
}

void slamSet::on_lowest_height_confirm_clicked()
{
    if("确认" == ui->lowest_height_confirm->text()){
        if(!_checkedHeightValid("low"))return;
        _lowestHeight = ui->lowest_height->text().toDouble();
        qDebug() << _lowestHeight << endl;
        ui->lowest_height->setEnabled(false);
        ui->lowest_height_confirm->setText("重新设置");
        _checkBothConfirmed();
    }else{
        ui->lowest_height->setEnabled(true);
        ui->lowest_height_confirm->setText("确认");
        _setBrkPointBtn(false);
        _showInfo("重新设置最低高度");
        _showInfo("--------------");
    }
}

void slamSet::on_highest_height_confirm_clicked()
{
    if("确认" == ui->highest_height_confirm->text()){
        if(!_checkedHeightValid("high"))return;
        _highestHeight = ui->highest_height->text().toDouble();
        qDebug() << _highestHeight << endl;
        ui->highest_height->setEnabled(false);
        ui->highest_height_confirm->setText("重新设置");
        _checkBothConfirmed();
    }else{
        ui->highest_height->setEnabled(true);
        ui->highest_height_confirm->setText("确认");
        _setBrkPointBtn(false);
        _showInfo("重新设置最高高度");
        _showInfo("--------------");
    }
}

void slamSet::_checkBothConfirmed()
{
    if(!ui->lowest_height->isEnabled() && !ui->highest_height->isEnabled()){
        //qDebug() << "should show" << endl;
        if(_checkedHeightValid("both")){_showHeightSetInfo(); _setBrkPointBtn(true);}
        else{
            ui->lowest_height->setEnabled(true);
            ui->lowest_height_confirm->setText("确认");
            ui->highest_height->setEnabled(true);
            ui->highest_height_confirm->setText("确认");
            _setBrkPointBtn(false);
        }
    }
}

void slamSet::_showHeightSetInfo()
{
    QString lowShow = QString::number(_lowestHeight,'f', 2);
    QString highShow =  QString::number(_highestHeight, 'f', 2);
    lowShow = "当前最低高度：" + lowShow + "m";
    highShow = "当前最高高度: " + highShow + "m";
    QString msg = lowShow + ",   " + highShow;
    _showInfo(msg);
}

inline void slamSet::_showInfo(const QString &s) const
{
    ui->height_viewer->append(s);
}

inline void slamSet::_showWrongInfo(const QString &msg)
{
    QMessageBox msgBox;
    msgBox.setText(msg); msgBox.exec();
    return;
}

bool slamSet::_checkedHeightValid(const QString& height)
{
    if("low" == height){
        if(0 > ui->lowest_height->text().toDouble()){
            _showWrongInfo("高度不能小于０！");
            return false;
        }
        if(!ui->lowest_height->isModified()){
            _showWrongInfo("高度不能为空！");
            return false;
        }
    }
    else if("high" == height){
        if(0 > ui->highest_height->text().toDouble()){
            _showWrongInfo("高度不能小于０！");
            return false;
        }
        if(!ui->highest_height->isModified()){
            _showWrongInfo("高度不能为空！");
            return false;
        }
    }
    else if("both" == height){
        if(ui->lowest_height->text().toDouble() > ui->highest_height->text().toDouble()){
            _showWrongInfo("最低高度不能小于最高高度！");
            return false;
        }
    }
    return true;
}

void slamSet::init()
{
    _finalCmd = "";
    _bagPath = "/home/liyunhui/";
    _savePath = "/home/liyunhui/map_out/";
    _slamShName = "../slam.sh";
    _brkPoints.clear();
    _imagePath = "/home/itcast/workingSpaceSet/guoyuan_ws/";
    _filter.append("*.jpg");
    ui->setupUi(this);
    this->_initUi();
    _setBrkPointBtn(false);
    //qDebug() << "slam set init" << endl;
    this->_fileCheckThread = new FileCheckThread(this);
}

void slamSet::deleteHeap()
{
    //qDebug() << "thread destructs." << endl;
    if(_fileCheckThread) delete _fileCheckThread;
    delete ui;
}

void slamSet::_setBrkPointBtn(bool need)
{
    ui->add_brkpoint_btn->setEnabled(need);
    ui->del_brkpoint_btn->setEnabled(need);
    ui->reveal_brkpoint_btn->setEnabled(need);
}

void slamSet::_initUi()
{
    ui->lowest_height->setPlaceholderText("单位: 米(m)");
    ui->highest_height->setPlaceholderText("单位: 米(m)");
}

void slamSet::_showSlamRes()
{
    _imageList.clear();
    this->scanData(_imagePath, _filter);
    for(int i = 0; i < _imageList.size(); i++)qDebug() << _imageList[i] << endl;
    if(_imageList.size() > 0){
        QString tmpPicPath = _imagePath.path() + "/" + _imageList[0];

        ui->slam_res->installEventFilter(this);
        _showPic(tmpPicPath);
        _srv = new SlamResViewer(_imagePath, _imageList);
        _srv->show();
    }
    //qDebug() <<_imageList.size() << endl;



    //   _imagePath.setNameFilters(_filter);
    //   _imageCount = _imagePath.count();
    //   ui->slam_res->installEventFilter(this);
    //   QString iamgeName = _imagePath[0];
    //   QImage iamge(iamgeName);
    //   ui->slam_res->setPixmap(QPixmap::fromImage(iamge));
    //   //qDebug() << _imageCount << endl;

}

bool slamSet::eventFilter(QObject *obj, QEvent *event)
{
    if(obj==ui->slam_res && event->type()==QEvent::MouseButtonPress)
    {

        static int flag=1;
        qDebug() << flag << endl;
        if(flag>_imageList.size() - 1)
        {
            qDebug() << "hhhh" << endl;
            flag=0;
        }
        QString tmpPicPath = _imagePath.path() + "/" + _imageList[flag];
        _showPic(tmpPicPath);
        ++flag;
        return 1;
    }
}

bool slamSet::scanData(const QDir &fromDir, const QStringList &filters)
{
    QFileInfoList fileInfoList = fromDir.entryInfoList(filters, QDir::Files);
    foreach(QFileInfo fileInfo, fileInfoList){
        if(fileInfo.fileName() == "." || fileInfo.fileName() == "..")continue;
        if(fileInfo.isDir()){
            if(!scanData(fileInfo.filePath(), filters))return false;
        }else{
            qDebug() << "worked" << endl;
            _imageList.append(fileInfo.fileName());
        }
    }
    return true;
}

void slamSet::resizeEvent(QResizeEvent *event)
{
    QWidget::resizeEvent(event);
    ui->slam_res->resize(ui->slam_res->size());
    qDebug() << ui->slam_res->width() << endl;
    qDebug() << "slam set resize event triggered." << endl;
}

void slamSet::_showPic(const QString &pic)
{
    QPixmap pix(pic);
    QPixmap dest = pix.scaled(ui->slam_res->size(), Qt::KeepAspectRatioByExpanding);
    ui->slam_res->setScaledContents(true);
    ui->slam_res->setPixmap(dest);
    ui->slam_res->show();
}

QString slamSet::executeLinuxCmd(const QString &cmd) const
{
    QProcess p;
    p.start("bash", QStringList() <<"-c" << cmd);
    bool flag = p.waitForFinished();
    Q_UNUSED(flag);
    //    qDebug() << flag <<endl;
    QByteArray Result = p.readAllStandardOutput();
    qDebug() << Result<< endl;
    return QString(Result);
}



void slamSet::on_clr_screen_button_clicked()
{
    ui->height_viewer->clear();
}

bool FileCheckThread::scanData(const QDir &fromDir, const QStringList &filters)
{
    QFileInfoList fileInfoList = fromDir.entryInfoList(filters, QDir::AllDirs | QDir::Files);
    foreach(QFileInfo fileInfo, fileInfoList){
        if(fileInfo.fileName() == "." || fileInfo.fileName() == "..")continue;
        if(fileInfo.isDir()){
            if(!scanData(fileInfo.filePath(), filters))return false;
        }else{
            _fileNameList.append(fileInfo.fileName());
        }
    }
    return true;
}

void FileCheckThread::_threadInit()
{
    _searchDir = "../";
    _filter.append("*.bag");
}


FileCheckThread::FileCheckThread(slamSet *sm):
    _sm(sm)
{
    qDebug() << "thread init" << endl;
    _threadInit();
}

FileCheckThread::~FileCheckThread()
{
}

void FileCheckThread::run()
{
    //qDebug() << _run << endl;
    //qDebug() << "running" << endl;
    //    QDir fromDir("/home/itcat/workingSpaceSet/guoyuan_ws/devel/lib");
    //    QStringList filters;
    //    filters.append("*.bag");
    _fileNameList.clear();
    scanData(_searchDir, _filter);
    //qDebug() << _fileNameList[1] << endl;
    _sm->ui->bag_chooser->clear();
    _sm->ui->bag_chooser->addItems(_fileNameList);
}

void slamSet::on_reload_bag_clicked()
{
    _fileCheckThread->run();
}

void slamSet::on_confirm_button_clicked()
{
    if(ui->lowest_height->isEnabled() || ui->highest_height->isEnabled()){
        _showWrongInfo("请确认最小与最大高度！");return;
    }else{
        _finalCmd ="sh " + _slamShName;
        QString _heightRange;
        if(_brkPoints.empty()){_heightRange += "'" + ui->lowest_height->text() + ":" + ui->highest_height->text() + "'";}
        else{
            qSort(_brkPoints.begin(), _brkPoints.end());
            _heightRange += "'" + ui->lowest_height->text() + ":";
            for(auto it = _brkPoints.begin(); it != _brkPoints.end(); it++){
                double temp = *it;
                _heightRange += QString::number(temp, 'f', 3) + ":";
            }
            _heightRange += ui->highest_height->text() + "'";
        }
        QString bagPath = "'" + _bagPath + ui->bag_chooser->currentText() + "'";
        _finalCmd = _finalCmd + " " + _heightRange + " " + bagPath;
        QString savePath = "'" + _savePath + ui->lowest_height->text() + "-" + ui->highest_height->text() + "'";;
        _finalCmd += " " + savePath;
        //qDebug() << _finalCmd << endl;
        emit _sendFinalSlamShCmd(_finalCmd);}


}

void slamSet::on_cancel_button_clicked()
{
    close();
}

void slamSet::on_add_brkpoint_btn_clicked()
{
    //bool ok;
    QString text = QInputDialog::getText(this
                                         , QString("断点设置")
                                         ,QString("请输入断点(单位：米)")
                                         , QLineEdit::Normal
                                         , nullptr);
    if(text.toDouble() < ui->lowest_height->text().toDouble()){
        _showWrongInfo("断点不能小于最低高度！"); return;
    }
    if(text.toDouble() > ui->highest_height->text().toDouble()){
        _showWrongInfo("断点不能大于最高高度！"); return;
    }
    if(text.toDouble() == ui->lowest_height->text().toDouble() ||
            text.toDouble() == ui->highest_height->text().toDouble()){
        _showWrongInfo("断点不能等于最高高度或最低高度！"); return;
    }
    QString msg = "增加断点：" + text + "米";
    _showInfo(msg);
    _brkPoints.append(text.toDouble()); //QSet不提供自动排序

    //    qSort(_brkPoints.begin(), _brkPoints.end());
    //    for(auto it = _brkPoints.begin(); it != _brkPoints.end(); it++)qDebug() << *it << endl;

}

void slamSet::on_del_brkpoint_btn_clicked()
{
    QString text = QInputDialog::getText(this
                                         , QString("断点设置")
                                         ,QString("请输入所要删除的断点(单位：米)")
                                         , QLineEdit::Normal
                                         , nullptr);
    if(_brkPoints.contains(text.toDouble())){
        int bias = _brkPoints.indexOf(text.toDouble());
        _brkPoints.erase(_brkPoints.begin() + bias);
        //       for(auto it = _brkPoints.begin(); it != _brkPoints.end(); it++)qDebug() << *it << endl;
        QString msg = "删除分断点：" + text + "米";
        _showInfo(msg);
    }else{_showWrongInfo("断点不存在！删除失败"); return;}
}

void slamSet::on_reveal_brkpoint_btn_clicked()
{
    if(!_brkPoints.empty()){
        qSort(_brkPoints.begin(), _brkPoints.end());
        QString msg("当前高度范围：");
        for(auto it = _brkPoints.begin(); it != _brkPoints.end(); it++){
            double temp = *it;
            if(_brkPoints.begin() == it){
                msg += ui->lowest_height->text() + "米" + "~" + QString::number(temp, 'f', 3) + "米" + "|";
            }else{
                msg += "~" + QString::number(temp, 'f', 3) + "米" + "|";
            }
            msg += QString::number(temp, 'f', 3) + "米";
        }
        msg += "~" + ui->highest_height->text() + "米";
        _showInfo(msg);
    }else{
        QString msg("当前高度范围：");
        msg += ui->lowest_height->text() + "米" + "~" + ui->highest_height->text() + "米";
        _showInfo(msg);
    }


}

void slamSet::on_pushButton_clicked()
{
    _showSlamRes();
    QString cmd("ps -aux | grep roscore");
    QString res = executeLinuxCmd(cmd);
    qDebug() << res << endl;
}
