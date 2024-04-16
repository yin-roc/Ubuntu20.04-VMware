/********************************************************************************
** Form generated from reading UI file 'pointcloud.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POINTCLOUD_H
#define UI_POINTCLOUD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PointCloud
{
public:
    QWidget *layout;
    QHBoxLayout *horizontalLayout_4;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *moveCameraBtn;
    QPushButton *setSelectBtn;
    QPushButton *setPosBtn;
    QPushButton *setGoalBtn;
    QPushButton *setReturnBtn;
    QPushButton *returnBtn;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *rviz_layout;
    QLabel *label_rviz_show;
    QVBoxLayout *verticalLayout_2;
    QTreeView *rvizDisplayTree;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *addTopicBtn;
    QPushButton *removeTopicBtn;
    QPushButton *renameTopicBtn;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *rvizReadSetBtn;
    QPushButton *rvizSaveSetBtn;
    QMenuBar *menubar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PointCloud)
    {
        if (PointCloud->objectName().isEmpty())
            PointCloud->setObjectName(QString::fromUtf8("PointCloud"));
        PointCloud->resize(1017, 728);
        layout = new QWidget(PointCloud);
        layout->setObjectName(QString::fromUtf8("layout"));
        horizontalLayout_4 = new QHBoxLayout(layout);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        moveCameraBtn = new QPushButton(layout);
        moveCameraBtn->setObjectName(QString::fromUtf8("moveCameraBtn"));

        horizontalLayout->addWidget(moveCameraBtn);

        setSelectBtn = new QPushButton(layout);
        setSelectBtn->setObjectName(QString::fromUtf8("setSelectBtn"));

        horizontalLayout->addWidget(setSelectBtn);

        setPosBtn = new QPushButton(layout);
        setPosBtn->setObjectName(QString::fromUtf8("setPosBtn"));

        horizontalLayout->addWidget(setPosBtn);

        setGoalBtn = new QPushButton(layout);
        setGoalBtn->setObjectName(QString::fromUtf8("setGoalBtn"));

        horizontalLayout->addWidget(setGoalBtn);

        setReturnBtn = new QPushButton(layout);
        setReturnBtn->setObjectName(QString::fromUtf8("setReturnBtn"));

        horizontalLayout->addWidget(setReturnBtn);

        returnBtn = new QPushButton(layout);
        returnBtn->setObjectName(QString::fromUtf8("returnBtn"));

        horizontalLayout->addWidget(returnBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        rviz_layout = new QVBoxLayout();
        rviz_layout->setObjectName(QString::fromUtf8("rviz_layout"));
        label_rviz_show = new QLabel(layout);
        label_rviz_show->setObjectName(QString::fromUtf8("label_rviz_show"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_rviz_show->sizePolicy().hasHeightForWidth());
        label_rviz_show->setSizePolicy(sizePolicy);
        label_rviz_show->setAlignment(Qt::AlignCenter);

        rviz_layout->addWidget(label_rviz_show);


        gridLayout->addLayout(rviz_layout, 1, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        rvizDisplayTree = new QTreeView(layout);
        rvizDisplayTree->setObjectName(QString::fromUtf8("rvizDisplayTree"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(rvizDisplayTree->sizePolicy().hasHeightForWidth());
        rvizDisplayTree->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(rvizDisplayTree);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        addTopicBtn = new QPushButton(layout);
        addTopicBtn->setObjectName(QString::fromUtf8("addTopicBtn"));

        horizontalLayout_3->addWidget(addTopicBtn);

        removeTopicBtn = new QPushButton(layout);
        removeTopicBtn->setObjectName(QString::fromUtf8("removeTopicBtn"));

        horizontalLayout_3->addWidget(removeTopicBtn);

        renameTopicBtn = new QPushButton(layout);
        renameTopicBtn->setObjectName(QString::fromUtf8("renameTopicBtn"));

        horizontalLayout_3->addWidget(renameTopicBtn);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        rvizReadSetBtn = new QPushButton(layout);
        rvizReadSetBtn->setObjectName(QString::fromUtf8("rvizReadSetBtn"));

        horizontalLayout_2->addWidget(rvizReadSetBtn);

        rvizSaveSetBtn = new QPushButton(layout);
        rvizSaveSetBtn->setObjectName(QString::fromUtf8("rvizSaveSetBtn"));

        horizontalLayout_2->addWidget(rvizSaveSetBtn);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);


        gridLayout->addLayout(verticalLayout_2, 1, 1, 1, 1);


        horizontalLayout_4->addLayout(gridLayout);

        PointCloud->setCentralWidget(layout);
        menubar = new QMenuBar(PointCloud);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1017, 28));
        PointCloud->setMenuBar(menubar);
        statusBar = new QStatusBar(PointCloud);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        PointCloud->setStatusBar(statusBar);

        retranslateUi(PointCloud);

        QMetaObject::connectSlotsByName(PointCloud);
    } // setupUi

    void retranslateUi(QMainWindow *PointCloud)
    {
        PointCloud->setWindowTitle(QApplication::translate("PointCloud", "MainWindow", nullptr));
        moveCameraBtn->setText(QApplication::translate("PointCloud", "MoveCamera", nullptr));
        setSelectBtn->setText(QApplication::translate("PointCloud", "select", nullptr));
        setPosBtn->setText(QApplication::translate("PointCloud", "2D Pose Estimate", nullptr));
        setGoalBtn->setText(QApplication::translate("PointCloud", "2D Nav Goal", nullptr));
        setReturnBtn->setText(QApplication::translate("PointCloud", "\350\256\276\347\275\256\350\277\224\350\210\252\347\202\271", nullptr));
        returnBtn->setText(QApplication::translate("PointCloud", "\350\277\224\350\210\252", nullptr));
        label_rviz_show->setText(QApplication::translate("PointCloud", "\345\275\223\345\211\215\346\227\240\350\277\236\346\216\245", nullptr));
        addTopicBtn->setText(QApplication::translate("PointCloud", "Add", nullptr));
        removeTopicBtn->setText(QApplication::translate("PointCloud", "Remove", nullptr));
        renameTopicBtn->setText(QApplication::translate("PointCloud", "Rename", nullptr));
        rvizReadSetBtn->setText(QApplication::translate("PointCloud", "\345\257\274\345\205\245\351\205\215\347\275\256", nullptr));
        rvizSaveSetBtn->setText(QApplication::translate("PointCloud", "\345\257\274\345\207\272\351\205\215\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PointCloud: public Ui_PointCloud {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POINTCLOUD_H
