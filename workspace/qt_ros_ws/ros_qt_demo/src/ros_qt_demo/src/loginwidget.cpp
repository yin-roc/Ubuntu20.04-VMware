
#include "../include/ros_qt_demo/loginwidget.h"

#include <QMovie>
#include <QtGui>
#include <QMainWindow>
#include <QMessageBox>
#include <QDesktopWidget>

LoginWidget::LoginWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoginWidget)
{
    //设置ui
    ui->setupUi(this);

    //登录设置
    LoginReadSettings();

    //设置登录界面的图片
    QMovie *movie = new QMovie(":/images/background.jpg");
    movie->setScaledSize(ui->label_video->size());
    ui->label_video->setMovie(movie);
    movie->start();
}

LoginWidget::~LoginWidget()
{
    delete ui;
}

//登录设置按钮的槽函数
void LoginWidget::on_login_Button_clicked(bool checked)
{
    //文本内容是登录
    if(ui->login_Button->text() == "登录"){

        /*
         * 用户名：hf
         * 密码：123
        */
        if(ui->user_lineEdit->text() == "hf"&& ui->password_lineEdit->text() == "123")
        {
            /*
             * 登录界面的改变：
             * 1、将登录按钮的文本内容设置为登出
             * 2、启动车辆设置、gps设置的按钮
             * 3、关闭用户名、密码的lineEdit
             */
            ui->login_Button->setText("登出");
            ui->carset_Button->setEnabled(true);
            ui->gpsset_Button->setEnabled(true);
            ui->user_lineEdit->setEnabled(false);
            ui->password_lineEdit->setEnabled(false);
        }
        //密码错误
        else
        {
            //使用一个信息提示框显示错误信息
            QMessageBox msgBox;
            msgBox.setText("用户或密码错误！");
            msgBox.exec();
        }
    }
    else
    {
        //设置逻辑同上
        ui->login_Button->setText("登录");
        ui->carset_Button->setEnabled(false);
        ui->gpsset_Button->setEnabled(false);
        ui->user_lineEdit->setEnabled(true);
        ui->password_lineEdit->setEnabled(true);
    }
}

//gps设置按钮槽函数
void LoginWidget::on_gpsset_Button_clicked(bool checked)
{
    int argc;
    char **argv;
    //这个是原本的主函数，现在作为gps设置窗口
    class1_ros_qt_demo::MainWindow* tw = new class1_ros_qt_demo::MainWindow(argc, argv);
    //title
    tw->setWindowTitle(QStringLiteral("GPS参数设置"));
    tw->show();
    tw->move((QApplication::desktop()->width()-tw->width())/2,(QApplication::desktop()->height()-tw->height())/2);

    //隐藏登录界面
    this->hide();

    //槽：退出该界面，显示登录窗口
    //ExitWin:退出当前的窗口
    connect(tw,SIGNAL(ExitWin()),this,SLOT(show()));
}

void LoginWidget::on_carset_Button_clicked(bool checked)
{
    CarsetWindow* cw = new CarsetWindow;
    cw->setWindowTitle(QStringLiteral("车辆参数设置"));//窗口标题
    //显示车辆设置窗口
    cw->show();

    //目前不知道这个功能是干嘛的
    /*
     *move:设置QWidget部件的坐标
     */
    cw->move((QApplication::desktop()->width()-cw->width())/2,(QApplication::desktop()->height()-cw->height())/2);

    //隐藏登录界面
    this->hide();

    //槽：退出该界面，显示登录窗口
    connect(cw,SIGNAL(ExitCar()),this,SLOT(show()));
}

//用于设置自动登录,读取设定
void LoginWidget::LoginReadSettings()
{
    //QSetting类：提供独立于平台的设置
    QSettings settings("Qt-Ros-Wqt", "Login-Win-Set");

    //value: geometry
    restoreGeometry(settings.value("geometry").toByteArray());

    //用户名和密码
    QString username = settings.value("username",QString("")).toString();
    QString password = settings.value("password", QString("")).toString();

    //设置用户名
    ui->user_lineEdit->setText(username);

    //是否记住密码，默认为false
    bool remember_password = settings.value("remember_password", false).toBool();
    ui->remeber_pw_checkBox->setChecked(remember_password);

    //设置是否自动登录
    bool auto_login = settings.value("auto_login", false).toBool();
    ui->auto_login_checkBox->setChecked(auto_login);

    //记住密码
    if ( ui->remeber_pw_checkBox->isChecked() )
    {
        ui->password_lineEdit->setText(password);
    }

    //自动点登录
    if ( ui->remeber_pw_checkBox->isChecked()  && ui->auto_login_checkBox->isChecked() )
    {
      on_login_Button_clicked(true);
    }
}

void LoginWidget::LoginWriteSettings()
{
    //设置
    QSettings settings("Qt-Ros-Wqt", "Login-Win-Set");
    //把退出的时还在编辑框内的记录下来
    settings.setValue("username",ui->user_lineEdit->text());
    settings.setValue("password",ui->password_lineEdit->text());
    settings.setValue("geometry", saveGeometry());

    //设置是否自动登录：读取两个checkbox
    settings.setValue("auto_login",QVariant(ui->auto_login_checkBox->isChecked()));
    settings.setValue("remember_password",QVariant(ui->remeber_pw_checkBox->isChecked()));
}

//关闭登录界面的槽函数，每次关闭都会进行相关设置
void LoginWidget::closeEvent(QCloseEvent *event)
{
    LoginWriteSettings();
}
