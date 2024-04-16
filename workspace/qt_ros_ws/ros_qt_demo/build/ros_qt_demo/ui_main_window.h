/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowDesign
{
public:
    QAction *action_Quit;
    QAction *action_Preferences;
    QAction *actionAbout;
    QAction *actionAbout_Qt;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_4;
    QTabWidget *tab_manager;
    QWidget *tab_status;
    QGridLayout *gridLayout_6;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_7;
    QWidget *widget_3;
    QLabel *label_map;
    QGroupBox *groupBox_12;
    QVBoxLayout *verticalLayout_6;
    QListView *view_logging;
    QGroupBox *groupBoxset;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *line_edit_master;
    QLabel *label_2;
    QLineEdit *line_edit_host;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkbox_remember_settings;
    QCheckBox *checkbox_use_autoip;
    QPushButton *button_connect;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QToolBox *toolBox;
    QWidget *topic_set;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_pose_topic;
    QLabel *label_4;
    QLineEdit *lineEdit_mapset_topic;
    QSpacerItem *verticalSpacer;
    QWidget *map_set;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEdit_set_lane;
    QLineEdit *lineEdit_set_length;
    QLineEdit *lineEdit_set_width;
    QPushButton *button_set_startP;
    QSpacerItem *verticalSpacer_2;
    QWidget *route_set;
    QVBoxLayout *verticalLayout_7;
    QRadioButton *radioButton_plan1;
    QRadioButton *radioButton_plan2;
    QRadioButton *radioButton_diy1;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *button_ok_P;
    QRadioButton *radioButton_diy2;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *button_record;
    QPushButton *button_ok_record;
    QSpacerItem *verticalSpacer_3;
    QWidget *map_page;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_map;
    QGridLayout *gridLayout_3;
    QLabel *baidumap;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_8;
    QPushButton *sensor_record_button;
    QLabel *mouse_info_log;
    QTextBrowser *lon_show;
    QRadioButton *mouse_mark_radio_button;
    QLabel *latitude_info;
    QSpacerItem *verticalSpacer_4;
    QPushButton *follow_launcher;
    QLineEdit *longtitude_set;
    QTextBrowser *lat_show;
    QPushButton *load_map_button;
    QPushButton *route_generate;
    QPushButton *locate_button;
    QPushButton *init_button;
    QLabel *init_point_set_info;
    QLabel *ridge_set_info;
    QRadioButton *gps_mark_radio_button;
    QLineEdit *latitude_set;
    QLabel *mouse_info_lat;
    QLineEdit *ridge_set;
    QPushButton *slam_launcher;
    QLabel *longtitude_info;
    QPushButton *mark_button;
    QPushButton *plan_launcher;
    QPushButton *bringup_all;
    QMenuBar *menubar;
    QMenu *menu_File;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowDesign)
    {
        if (MainWindowDesign->objectName().isEmpty())
            MainWindowDesign->setObjectName(QString::fromUtf8("MainWindowDesign"));
        MainWindowDesign->resize(1377, 808);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindowDesign->sizePolicy().hasHeightForWidth());
        MainWindowDesign->setSizePolicy(sizePolicy);
        MainWindowDesign->setMinimumSize(QSize(600, 400));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindowDesign->setWindowIcon(icon);
        MainWindowDesign->setLocale(QLocale(QLocale::English, QLocale::Australia));
        action_Quit = new QAction(MainWindowDesign);
        action_Quit->setObjectName(QString::fromUtf8("action_Quit"));
        action_Quit->setShortcutContext(Qt::ApplicationShortcut);
        action_Preferences = new QAction(MainWindowDesign);
        action_Preferences->setObjectName(QString::fromUtf8("action_Preferences"));
        actionAbout = new QAction(MainWindowDesign);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAbout_Qt = new QAction(MainWindowDesign);
        actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
        centralwidget = new QWidget(MainWindowDesign);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_4 = new QHBoxLayout(centralwidget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        tab_manager = new QTabWidget(centralwidget);
        tab_manager->setObjectName(QString::fromUtf8("tab_manager"));
        tab_manager->setMinimumSize(QSize(0, 0));
        tab_manager->setStyleSheet(QString::fromUtf8("QTabWidget{border:none}"));
        tab_manager->setLocale(QLocale(QLocale::English, QLocale::Australia));
        tab_status = new QWidget();
        tab_status->setObjectName(QString::fromUtf8("tab_status"));
        gridLayout_6 = new QGridLayout(tab_status);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        groupBox_4 = new QGroupBox(tab_status);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy1);
        gridLayout_7 = new QGridLayout(groupBox_4);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        widget_3 = new QWidget(groupBox_4);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        sizePolicy1.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy1);
        widget_3->setMinimumSize(QSize(0, 0));
        widget_3->setMaximumSize(QSize(16777215, 16777215));
        label_map = new QLabel(widget_3);
        label_map->setObjectName(QString::fromUtf8("label_map"));
        label_map->setGeometry(QRect(0, 0, 16, 17));
        sizePolicy1.setHeightForWidth(label_map->sizePolicy().hasHeightForWidth());
        label_map->setSizePolicy(sizePolicy1);
        label_map->setMaximumSize(QSize(16777215, 16777215));
        label_map->setScaledContents(false);

        gridLayout_7->addWidget(widget_3, 0, 0, 1, 1);

        groupBox_12 = new QGroupBox(groupBox_4);
        groupBox_12->setObjectName(QString::fromUtf8("groupBox_12"));
        sizePolicy1.setHeightForWidth(groupBox_12->sizePolicy().hasHeightForWidth());
        groupBox_12->setSizePolicy(sizePolicy1);
        groupBox_12->setMaximumSize(QSize(16777215, 130));
        verticalLayout_6 = new QVBoxLayout(groupBox_12);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        view_logging = new QListView(groupBox_12);
        view_logging->setObjectName(QString::fromUtf8("view_logging"));
        sizePolicy1.setHeightForWidth(view_logging->sizePolicy().hasHeightForWidth());
        view_logging->setSizePolicy(sizePolicy1);
        view_logging->setMaximumSize(QSize(16777215, 150));

        verticalLayout_6->addWidget(view_logging);


        gridLayout_7->addWidget(groupBox_12, 1, 0, 1, 1);


        gridLayout_6->addWidget(groupBox_4, 0, 0, 1, 1);

        groupBoxset = new QGroupBox(tab_status);
        groupBoxset->setObjectName(QString::fromUtf8("groupBoxset"));
        groupBoxset->setMaximumSize(QSize(250, 16777215));
        verticalLayout = new QVBoxLayout(groupBoxset);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_2 = new QGroupBox(groupBoxset);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMaximumSize(QSize(250, 250));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(16777215, 25));
        label->setFrameShape(QFrame::StyledPanel);
        label->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        line_edit_master = new QLineEdit(groupBox_2);
        line_edit_master->setObjectName(QString::fromUtf8("line_edit_master"));

        gridLayout->addWidget(line_edit_master, 1, 0, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(16777215, 25));
        label_2->setFrameShape(QFrame::StyledPanel);
        label_2->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        line_edit_host = new QLineEdit(groupBox_2);
        line_edit_host->setObjectName(QString::fromUtf8("line_edit_host"));

        gridLayout->addWidget(line_edit_host, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        checkbox_remember_settings = new QCheckBox(groupBox_2);
        checkbox_remember_settings->setObjectName(QString::fromUtf8("checkbox_remember_settings"));
        checkbox_remember_settings->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout->addWidget(checkbox_remember_settings);

        checkbox_use_autoip = new QCheckBox(groupBox_2);
        checkbox_use_autoip->setObjectName(QString::fromUtf8("checkbox_use_autoip"));
        checkbox_use_autoip->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout->addWidget(checkbox_use_autoip);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 1);

        button_connect = new QPushButton(groupBox_2);
        button_connect->setObjectName(QString::fromUtf8("button_connect"));
        button_connect->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(button_connect->sizePolicy().hasHeightForWidth());
        button_connect->setSizePolicy(sizePolicy2);
        button_connect->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(button_connect, 5, 0, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        groupBox = new QGroupBox(groupBoxset);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMaximumSize(QSize(250, 16777215));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        toolBox = new QToolBox(groupBox);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setMaximumSize(QSize(250, 16777215));
        toolBox->setFocusPolicy(Qt::NoFocus);
        topic_set = new QWidget();
        topic_set->setObjectName(QString::fromUtf8("topic_set"));
        topic_set->setGeometry(QRect(0, 0, 202, 252));
        topic_set->setMaximumSize(QSize(250, 16777215));
        verticalLayout_2 = new QVBoxLayout(topic_set);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(topic_set);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(16777215, 25));

        verticalLayout_2->addWidget(label_3);

        lineEdit_pose_topic = new QLineEdit(topic_set);
        lineEdit_pose_topic->setObjectName(QString::fromUtf8("lineEdit_pose_topic"));

        verticalLayout_2->addWidget(lineEdit_pose_topic);

        label_4 = new QLabel(topic_set);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(16777215, 25));

        verticalLayout_2->addWidget(label_4);

        lineEdit_mapset_topic = new QLineEdit(topic_set);
        lineEdit_mapset_topic->setObjectName(QString::fromUtf8("lineEdit_mapset_topic"));
        lineEdit_mapset_topic->setMaximumSize(QSize(16777215, 25));

        verticalLayout_2->addWidget(lineEdit_mapset_topic);

        verticalSpacer = new QSpacerItem(58, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        toolBox->addItem(topic_set, QString::fromUtf8("\350\257\235\351\242\230\350\256\276\347\275\256"));
        map_set = new QWidget();
        map_set->setObjectName(QString::fromUtf8("map_set"));
        map_set->setEnabled(false);
        map_set->setGeometry(QRect(0, 0, 202, 252));
        map_set->setMaximumSize(QSize(250, 16777215));
        verticalLayout_3 = new QVBoxLayout(map_set);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setHorizontalSpacing(0);
        gridLayout_4->setVerticalSpacing(6);
        label_5 = new QLabel(map_set);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_4->addWidget(label_5, 0, 0, 1, 1);

        label_6 = new QLabel(map_set);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_4->addWidget(label_6, 1, 0, 1, 1);

        label_7 = new QLabel(map_set);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_4->addWidget(label_7, 2, 0, 1, 2);

        lineEdit_set_lane = new QLineEdit(map_set);
        lineEdit_set_lane->setObjectName(QString::fromUtf8("lineEdit_set_lane"));

        gridLayout_4->addWidget(lineEdit_set_lane, 2, 2, 1, 1);

        lineEdit_set_length = new QLineEdit(map_set);
        lineEdit_set_length->setObjectName(QString::fromUtf8("lineEdit_set_length"));

        gridLayout_4->addWidget(lineEdit_set_length, 0, 1, 1, 2);

        lineEdit_set_width = new QLineEdit(map_set);
        lineEdit_set_width->setObjectName(QString::fromUtf8("lineEdit_set_width"));

        gridLayout_4->addWidget(lineEdit_set_width, 1, 1, 1, 2);


        verticalLayout_3->addLayout(gridLayout_4);

        button_set_startP = new QPushButton(map_set);
        button_set_startP->setObjectName(QString::fromUtf8("button_set_startP"));
        button_set_startP->setMaximumSize(QSize(16777215, 35));

        verticalLayout_3->addWidget(button_set_startP);

        verticalSpacer_2 = new QSpacerItem(40, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        toolBox->addItem(map_set, QString::fromUtf8("\345\234\260\345\233\276\350\256\276\347\275\256"));
        route_set = new QWidget();
        route_set->setObjectName(QString::fromUtf8("route_set"));
        route_set->setEnabled(false);
        route_set->setGeometry(QRect(0, 0, 202, 252));
        route_set->setMaximumSize(QSize(250, 16777215));
        verticalLayout_7 = new QVBoxLayout(route_set);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        radioButton_plan1 = new QRadioButton(route_set);
        radioButton_plan1->setObjectName(QString::fromUtf8("radioButton_plan1"));
        radioButton_plan1->setChecked(false);
        radioButton_plan1->setAutoExclusive(true);

        verticalLayout_7->addWidget(radioButton_plan1);

        radioButton_plan2 = new QRadioButton(route_set);
        radioButton_plan2->setObjectName(QString::fromUtf8("radioButton_plan2"));

        verticalLayout_7->addWidget(radioButton_plan2);

        radioButton_diy1 = new QRadioButton(route_set);
        radioButton_diy1->setObjectName(QString::fromUtf8("radioButton_diy1"));

        verticalLayout_7->addWidget(radioButton_diy1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        button_ok_P = new QPushButton(route_set);
        button_ok_P->setObjectName(QString::fromUtf8("button_ok_P"));
        button_ok_P->setEnabled(false);
        button_ok_P->setMaximumSize(QSize(75, 25));

        horizontalLayout_3->addWidget(button_ok_P);


        verticalLayout_7->addLayout(horizontalLayout_3);

        radioButton_diy2 = new QRadioButton(route_set);
        radioButton_diy2->setObjectName(QString::fromUtf8("radioButton_diy2"));

        verticalLayout_7->addWidget(radioButton_diy2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        button_record = new QPushButton(route_set);
        button_record->setObjectName(QString::fromUtf8("button_record"));
        button_record->setEnabled(false);
        button_record->setMaximumSize(QSize(75, 25));

        horizontalLayout_5->addWidget(button_record);

        button_ok_record = new QPushButton(route_set);
        button_ok_record->setObjectName(QString::fromUtf8("button_ok_record"));
        button_ok_record->setEnabled(false);
        button_ok_record->setMaximumSize(QSize(75, 25));

        horizontalLayout_5->addWidget(button_ok_record);


        verticalLayout_7->addLayout(horizontalLayout_5);

        verticalSpacer_3 = new QSpacerItem(40, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_3);

        toolBox->addItem(route_set, QString::fromUtf8("\350\275\250\350\277\271\350\256\276\347\275\256"));

        gridLayout_2->addWidget(toolBox, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox);


        gridLayout_6->addWidget(groupBoxset, 0, 1, 1, 1);

        tab_manager->addTab(tab_status, QString());
        map_page = new QWidget();
        map_page->setObjectName(QString::fromUtf8("map_page"));
        horizontalLayout_2 = new QHBoxLayout(map_page);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        widget_map = new QWidget(map_page);
        widget_map->setObjectName(QString::fromUtf8("widget_map"));
        widget_map->setEnabled(true);
        widget_map->setStyleSheet(QString::fromUtf8("QWidget{border:black;}"));
        gridLayout_3 = new QGridLayout(widget_map);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        baidumap = new QLabel(widget_map);
        baidumap->setObjectName(QString::fromUtf8("baidumap"));

        gridLayout_3->addWidget(baidumap, 0, 1, 1, 1);


        horizontalLayout_2->addWidget(widget_map);

        scrollArea = new QScrollArea(map_page);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy3);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 336, 691));
        gridLayout_8 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        sensor_record_button = new QPushButton(scrollAreaWidgetContents);
        sensor_record_button->setObjectName(QString::fromUtf8("sensor_record_button"));
        sensor_record_button->setMinimumSize(QSize(0, 40));
        QFont font;
        font.setPointSize(15);
        sensor_record_button->setFont(font);

        gridLayout_8->addWidget(sensor_record_button, 13, 0, 1, 1);

        mouse_info_log = new QLabel(scrollAreaWidgetContents);
        mouse_info_log->setObjectName(QString::fromUtf8("mouse_info_log"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(mouse_info_log->sizePolicy().hasHeightForWidth());
        mouse_info_log->setSizePolicy(sizePolicy4);
        mouse_info_log->setMaximumSize(QSize(16777215, 40));
        mouse_info_log->setFont(font);

        gridLayout_8->addWidget(mouse_info_log, 17, 0, 1, 1);

        lon_show = new QTextBrowser(scrollAreaWidgetContents);
        lon_show->setObjectName(QString::fromUtf8("lon_show"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(lon_show->sizePolicy().hasHeightForWidth());
        lon_show->setSizePolicy(sizePolicy5);
        lon_show->setMinimumSize(QSize(0, 0));
        lon_show->setMaximumSize(QSize(16777215, 40));

        gridLayout_8->addWidget(lon_show, 18, 0, 1, 3);

        mouse_mark_radio_button = new QRadioButton(scrollAreaWidgetContents);
        mouse_mark_radio_button->setObjectName(QString::fromUtf8("mouse_mark_radio_button"));
        QFont font1;
        font1.setPointSize(14);
        mouse_mark_radio_button->setFont(font1);

        gridLayout_8->addWidget(mouse_mark_radio_button, 5, 0, 1, 1);

        latitude_info = new QLabel(scrollAreaWidgetContents);
        latitude_info->setObjectName(QString::fromUtf8("latitude_info"));
        sizePolicy4.setHeightForWidth(latitude_info->sizePolicy().hasHeightForWidth());
        latitude_info->setSizePolicy(sizePolicy4);
        latitude_info->setMinimumSize(QSize(0, 0));
        latitude_info->setMaximumSize(QSize(16777215, 16777215));
        latitude_info->setFont(font);

        gridLayout_8->addWidget(latitude_info, 1, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_4, 22, 0, 1, 1);

        follow_launcher = new QPushButton(scrollAreaWidgetContents);
        follow_launcher->setObjectName(QString::fromUtf8("follow_launcher"));
        follow_launcher->setMaximumSize(QSize(16777215, 40));
        follow_launcher->setFont(font);

        gridLayout_8->addWidget(follow_launcher, 14, 2, 1, 1);

        longtitude_set = new QLineEdit(scrollAreaWidgetContents);
        longtitude_set->setObjectName(QString::fromUtf8("longtitude_set"));
        longtitude_set->setMinimumSize(QSize(0, 0));
        longtitude_set->setMaximumSize(QSize(16777215, 16777215));
        longtitude_set->setFont(font);

        gridLayout_8->addWidget(longtitude_set, 0, 2, 1, 1);

        lat_show = new QTextBrowser(scrollAreaWidgetContents);
        lat_show->setObjectName(QString::fromUtf8("lat_show"));
        sizePolicy5.setHeightForWidth(lat_show->sizePolicy().hasHeightForWidth());
        lat_show->setSizePolicy(sizePolicy5);
        lat_show->setMaximumSize(QSize(16777215, 40));

        gridLayout_8->addWidget(lat_show, 21, 0, 1, 3);

        load_map_button = new QPushButton(scrollAreaWidgetContents);
        load_map_button->setObjectName(QString::fromUtf8("load_map_button"));
        load_map_button->setFont(font);

        gridLayout_8->addWidget(load_map_button, 10, 0, 1, 1);

        route_generate = new QPushButton(scrollAreaWidgetContents);
        route_generate->setObjectName(QString::fromUtf8("route_generate"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(route_generate->sizePolicy().hasHeightForWidth());
        route_generate->setSizePolicy(sizePolicy6);
        route_generate->setMinimumSize(QSize(0, 40));
        route_generate->setFont(font);

        gridLayout_8->addWidget(route_generate, 10, 2, 1, 1);

        locate_button = new QPushButton(scrollAreaWidgetContents);
        locate_button->setObjectName(QString::fromUtf8("locate_button"));
        locate_button->setFont(font);

        gridLayout_8->addWidget(locate_button, 3, 0, 1, 3);

        init_button = new QPushButton(scrollAreaWidgetContents);
        init_button->setObjectName(QString::fromUtf8("init_button"));
        init_button->setMinimumSize(QSize(0, 0));
        init_button->setFont(font);

        gridLayout_8->addWidget(init_button, 7, 2, 1, 1);

        init_point_set_info = new QLabel(scrollAreaWidgetContents);
        init_point_set_info->setObjectName(QString::fromUtf8("init_point_set_info"));
        init_point_set_info->setFont(font);
        init_point_set_info->setLayoutDirection(Qt::LeftToRight);

        gridLayout_8->addWidget(init_point_set_info, 7, 0, 1, 1);

        ridge_set_info = new QLabel(scrollAreaWidgetContents);
        ridge_set_info->setObjectName(QString::fromUtf8("ridge_set_info"));
        ridge_set_info->setFont(font);

        gridLayout_8->addWidget(ridge_set_info, 4, 0, 1, 1);

        gps_mark_radio_button = new QRadioButton(scrollAreaWidgetContents);
        gps_mark_radio_button->setObjectName(QString::fromUtf8("gps_mark_radio_button"));
        gps_mark_radio_button->setFont(font1);

        gridLayout_8->addWidget(gps_mark_radio_button, 6, 0, 1, 1);

        latitude_set = new QLineEdit(scrollAreaWidgetContents);
        latitude_set->setObjectName(QString::fromUtf8("latitude_set"));
        sizePolicy1.setHeightForWidth(latitude_set->sizePolicy().hasHeightForWidth());
        latitude_set->setSizePolicy(sizePolicy1);
        latitude_set->setMinimumSize(QSize(0, 0));
        latitude_set->setMaximumSize(QSize(16777215, 16777215));
        latitude_set->setFont(font);

        gridLayout_8->addWidget(latitude_set, 1, 2, 1, 1);

        mouse_info_lat = new QLabel(scrollAreaWidgetContents);
        mouse_info_lat->setObjectName(QString::fromUtf8("mouse_info_lat"));
        sizePolicy4.setHeightForWidth(mouse_info_lat->sizePolicy().hasHeightForWidth());
        mouse_info_lat->setSizePolicy(sizePolicy4);
        mouse_info_lat->setMaximumSize(QSize(16777215, 40));
        mouse_info_lat->setFont(font);

        gridLayout_8->addWidget(mouse_info_lat, 19, 0, 1, 1);

        ridge_set = new QLineEdit(scrollAreaWidgetContents);
        ridge_set->setObjectName(QString::fromUtf8("ridge_set"));
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(ridge_set->sizePolicy().hasHeightForWidth());
        ridge_set->setSizePolicy(sizePolicy7);
        ridge_set->setMinimumSize(QSize(0, 0));
        ridge_set->setMaximumSize(QSize(16777215, 16777215));
        ridge_set->setFont(font);

        gridLayout_8->addWidget(ridge_set, 4, 2, 1, 1);

        slam_launcher = new QPushButton(scrollAreaWidgetContents);
        slam_launcher->setObjectName(QString::fromUtf8("slam_launcher"));
        slam_launcher->setMinimumSize(QSize(0, 40));
        slam_launcher->setFont(font);

        gridLayout_8->addWidget(slam_launcher, 13, 2, 1, 1);

        longtitude_info = new QLabel(scrollAreaWidgetContents);
        longtitude_info->setObjectName(QString::fromUtf8("longtitude_info"));
        longtitude_info->setMinimumSize(QSize(0, 0));
        longtitude_info->setMaximumSize(QSize(16777215, 16777215));
        longtitude_info->setFont(font);

        gridLayout_8->addWidget(longtitude_info, 0, 0, 1, 1);

        mark_button = new QPushButton(scrollAreaWidgetContents);
        mark_button->setObjectName(QString::fromUtf8("mark_button"));
        mark_button->setMinimumSize(QSize(0, 40));
        mark_button->setFont(font);

        gridLayout_8->addWidget(mark_button, 6, 2, 1, 1);

        plan_launcher = new QPushButton(scrollAreaWidgetContents);
        plan_launcher->setObjectName(QString::fromUtf8("plan_launcher"));
        sizePolicy6.setHeightForWidth(plan_launcher->sizePolicy().hasHeightForWidth());
        plan_launcher->setSizePolicy(sizePolicy6);
        plan_launcher->setMaximumSize(QSize(16777215, 40));
        plan_launcher->setFont(font);

        gridLayout_8->addWidget(plan_launcher, 14, 0, 1, 1);

        bringup_all = new QPushButton(scrollAreaWidgetContents);
        bringup_all->setObjectName(QString::fromUtf8("bringup_all"));
        bringup_all->setMinimumSize(QSize(0, 40));
        bringup_all->setFont(font1);

        gridLayout_8->addWidget(bringup_all, 16, 0, 1, 3);

        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout_2->addWidget(scrollArea);

        horizontalLayout_2->setStretch(0, 10);
        tab_manager->addTab(map_page, QString());

        horizontalLayout_4->addWidget(tab_manager);

        MainWindowDesign->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowDesign);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1377, 28));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        MainWindowDesign->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindowDesign);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindowDesign->setStatusBar(statusbar);

        menubar->addAction(menu_File->menuAction());
        menu_File->addAction(action_Preferences);
        menu_File->addSeparator();
        menu_File->addAction(actionAbout);
        menu_File->addAction(actionAbout_Qt);
        menu_File->addSeparator();
        menu_File->addAction(action_Quit);

        retranslateUi(MainWindowDesign);
        QObject::connect(action_Quit, SIGNAL(triggered()), MainWindowDesign, SLOT(close()));

        tab_manager->setCurrentIndex(0);
        toolBox->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindowDesign);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowDesign)
    {
        MainWindowDesign->setWindowTitle(QApplication::translate("MainWindowDesign", "QRosApp", nullptr));
        action_Quit->setText(QApplication::translate("MainWindowDesign", "&Quit", nullptr));
#ifndef QT_NO_SHORTCUT
        action_Quit->setShortcut(QApplication::translate("MainWindowDesign", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        action_Preferences->setText(QApplication::translate("MainWindowDesign", "&Preferences\n"
"", nullptr));
        actionAbout->setText(QApplication::translate("MainWindowDesign", "&About", nullptr));
        actionAbout_Qt->setText(QApplication::translate("MainWindowDesign", "About &Qt", nullptr));
        label_map->setText(QString());
        groupBox_12->setTitle(QApplication::translate("MainWindowDesign", "\346\227\245\345\277\227\346\266\210\346\201\257", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindowDesign", "\350\277\236\346\216\245\347\212\266\346\200\201", nullptr));
        label->setText(QApplication::translate("MainWindowDesign", "<html><head/><body><p>Ros\344\270\273\346\234\272\345\234\260\345\235\200</p></body></html>", nullptr));
        line_edit_master->setText(QApplication::translate("MainWindowDesign", "http://192.168.1.2:11311/", nullptr));
        label_2->setText(QApplication::translate("MainWindowDesign", "<html><head/><body><p>Ros\346\234\254\346\234\272\345\234\260\345\235\200</p></body></html>", nullptr));
        line_edit_host->setText(QApplication::translate("MainWindowDesign", "192.168.1.67", nullptr));
        checkbox_remember_settings->setText(QApplication::translate("MainWindowDesign", "\350\207\252\345\212\250\350\277\236\346\216\245", nullptr));
        checkbox_use_autoip->setText(QApplication::translate("MainWindowDesign", "\350\207\252\345\212\250\346\243\200\346\265\213IP", nullptr));
#ifndef QT_NO_TOOLTIP
        button_connect->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        button_connect->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        button_connect->setText(QApplication::translate("MainWindowDesign", "\350\277\236\346\216\245", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindowDesign", "\345\217\202\346\225\260\350\256\276\347\275\256", nullptr));
        label_3->setText(QApplication::translate("MainWindowDesign", "\350\275\246\350\276\206\344\275\215\347\275\256\350\257\235\351\242\230\357\274\232", nullptr));
        lineEdit_pose_topic->setText(QApplication::translate("MainWindowDesign", "pub_mid_pos", nullptr));
        label_4->setText(QApplication::translate("MainWindowDesign", "\345\234\260\345\233\276\345\217\202\346\225\260\350\257\235\351\242\230\357\274\232", nullptr));
        lineEdit_mapset_topic->setText(QApplication::translate("MainWindowDesign", "map_set", nullptr));
        toolBox->setItemText(toolBox->indexOf(topic_set), QApplication::translate("MainWindowDesign", "\350\257\235\351\242\230\350\256\276\347\275\256", nullptr));
        label_5->setText(QApplication::translate("MainWindowDesign", "\351\225\277(m)\357\274\232", nullptr));
        label_6->setText(QApplication::translate("MainWindowDesign", "<html><head/><body><p>\345\256\275(m)\357\274\232</p></body></html>", nullptr));
        label_7->setText(QApplication::translate("MainWindowDesign", "<html><head/><body><p>\345\236\204\350\267\235(m)\357\274\232</p></body></html>", nullptr));
        button_set_startP->setText(QApplication::translate("MainWindowDesign", "\347\241\256\350\256\244\345\207\272\345\217\221\350\265\267\347\202\271", nullptr));
        toolBox->setItemText(toolBox->indexOf(map_set), QApplication::translate("MainWindowDesign", "\345\234\260\345\233\276\350\256\276\347\275\256", nullptr));
        radioButton_plan1->setText(QApplication::translate("MainWindowDesign", "\345\274\223\345\255\227\350\267\257\347\272\277\344\275\234\344\270\232", nullptr));
        radioButton_plan2->setText(QApplication::translate("MainWindowDesign", "\351\232\224\350\241\214\350\267\257\347\272\277\344\275\234\344\270\232", nullptr));
        radioButton_diy1->setText(QApplication::translate("MainWindowDesign", "\350\207\252\345\256\232\346\240\207\347\202\271\350\267\257\347\272\277\344\275\234\344\270\232", nullptr));
        button_ok_P->setText(QApplication::translate("MainWindowDesign", "\347\241\256\350\256\244", nullptr));
        radioButton_diy2->setText(QApplication::translate("MainWindowDesign", "\345\257\273\350\277\271\350\267\257\347\272\277\344\275\234\344\270\232", nullptr));
        button_record->setText(QApplication::translate("MainWindowDesign", "\345\274\200\345\247\213", nullptr));
        button_ok_record->setText(QApplication::translate("MainWindowDesign", "\347\241\256\350\256\244", nullptr));
        toolBox->setItemText(toolBox->indexOf(route_set), QApplication::translate("MainWindowDesign", "\350\275\250\350\277\271\350\256\276\347\275\256", nullptr));
        tab_manager->setTabText(tab_manager->indexOf(tab_status), QApplication::translate("MainWindowDesign", "Ros Communications", nullptr));
        baidumap->setText(QString());
        sensor_record_button->setText(QApplication::translate("MainWindowDesign", "\344\274\240\346\204\237\345\231\250\345\275\225\345\210\266", nullptr));
        mouse_info_log->setText(QApplication::translate("MainWindowDesign", " \351\274\240\346\240\207\346\211\200\346\214\207\347\273\217\345\272\246", nullptr));
        mouse_mark_radio_button->setText(QApplication::translate("MainWindowDesign", "\351\274\240\346\240\207\346\240\207\345\256\232", nullptr));
        latitude_info->setText(QApplication::translate("MainWindowDesign", "\350\276\223\345\205\245\347\272\254\345\272\246", nullptr));
        follow_launcher->setText(QApplication::translate("MainWindowDesign", "\345\220\257\345\212\250\350\267\237\350\270\252", nullptr));
        load_map_button->setText(QApplication::translate("MainWindowDesign", "\345\212\240\350\275\275\345\234\260\345\233\276", nullptr));
        route_generate->setText(QApplication::translate("MainWindowDesign", "\350\247\204\345\210\222\347\224\237\346\210\220", nullptr));
        locate_button->setText(QApplication::translate("MainWindowDesign", "\345\256\232\344\275\215", nullptr));
        init_button->setText(QApplication::translate("MainWindowDesign", "\347\241\256\345\256\232\345\210\235\345\247\213\347\202\271", nullptr));
        init_point_set_info->setText(QApplication::translate("MainWindowDesign", "\345\210\235\345\247\213\347\202\271\350\256\276\347\275\256", nullptr));
        ridge_set_info->setText(QApplication::translate("MainWindowDesign", "\350\256\276\347\275\256\345\236\204\351\227\264\350\267\235(m)", nullptr));
        gps_mark_radio_button->setText(QApplication::translate("MainWindowDesign", "gps\346\240\207\345\256\232", nullptr));
        mouse_info_lat->setText(QApplication::translate("MainWindowDesign", " \351\274\240\346\240\207\346\211\200\346\214\207\347\272\254\345\272\246", nullptr));
        slam_launcher->setText(QApplication::translate("MainWindowDesign", "\347\273\230\345\210\266\345\234\260\345\233\276", nullptr));
        longtitude_info->setText(QApplication::translate("MainWindowDesign", "\350\276\223\345\205\245\347\273\217\345\272\246", nullptr));
        mark_button->setText(QApplication::translate("MainWindowDesign", "\346\240\207\345\256\232\350\257\245\347\202\271", nullptr));
        plan_launcher->setText(QApplication::translate("MainWindowDesign", "Gps\350\267\257\345\276\204\346\230\276\347\244\272", nullptr));
        bringup_all->setText(QApplication::translate("MainWindowDesign", "\344\270\200\351\224\256\345\220\257\345\212\250", nullptr));
        tab_manager->setTabText(tab_manager->indexOf(map_page), QApplication::translate("MainWindowDesign", "\347\231\276\345\272\246\345\234\260\345\233\276", nullptr));
        menu_File->setTitle(QApplication::translate("MainWindowDesign", "&App", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowDesign: public Ui_MainWindowDesign {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
