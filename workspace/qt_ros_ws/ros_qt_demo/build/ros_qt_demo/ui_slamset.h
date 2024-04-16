/********************************************************************************
** Form generated from reading UI file 'slamset.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLAMSET_H
#define UI_SLAMSET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_slamSet
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *bag_choose_info;
    QComboBox *bag_chooser;
    QPushButton *reload_bag;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lowest_height_info;
    QLineEdit *lowest_height;
    QPushButton *lowest_height_confirm;
    QHBoxLayout *horizontalLayout_4;
    QLabel *highest_height_info;
    QLineEdit *highest_height;
    QPushButton *highest_height_confirm;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *add_brkpoint_btn;
    QPushButton *del_brkpoint_btn;
    QPushButton *reveal_brkpoint_btn;
    QTextBrowser *height_viewer;
    QPushButton *clr_screen_button;
    QWidget *slam_res_widget;
    QGridLayout *gridLayout;
    QLabel *slam_res;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *cancel_button;
    QPushButton *confirm_button;

    void setupUi(QWidget *slamSet)
    {
        if (slamSet->objectName().isEmpty())
            slamSet->setObjectName(QString::fromUtf8("slamSet"));
        slamSet->resize(375, 678);
        verticalLayout = new QVBoxLayout(slamSet);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        bag_choose_info = new QLabel(slamSet);
        bag_choose_info->setObjectName(QString::fromUtf8("bag_choose_info"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(bag_choose_info->sizePolicy().hasHeightForWidth());
        bag_choose_info->setSizePolicy(sizePolicy);
        bag_choose_info->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setPointSize(15);
        bag_choose_info->setFont(font);

        horizontalLayout->addWidget(bag_choose_info);

        bag_chooser = new QComboBox(slamSet);
        bag_chooser->setObjectName(QString::fromUtf8("bag_chooser"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(bag_chooser->sizePolicy().hasHeightForWidth());
        bag_chooser->setSizePolicy(sizePolicy1);
        bag_chooser->setMinimumSize(QSize(0, 40));

        horizontalLayout->addWidget(bag_chooser);

        reload_bag = new QPushButton(slamSet);
        reload_bag->setObjectName(QString::fromUtf8("reload_bag"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(reload_bag->sizePolicy().hasHeightForWidth());
        reload_bag->setSizePolicy(sizePolicy2);
        reload_bag->setMinimumSize(QSize(0, 40));

        horizontalLayout->addWidget(reload_bag);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lowest_height_info = new QLabel(slamSet);
        lowest_height_info->setObjectName(QString::fromUtf8("lowest_height_info"));
        sizePolicy.setHeightForWidth(lowest_height_info->sizePolicy().hasHeightForWidth());
        lowest_height_info->setSizePolicy(sizePolicy);
        lowest_height_info->setFont(font);

        horizontalLayout_2->addWidget(lowest_height_info);

        lowest_height = new QLineEdit(slamSet);
        lowest_height->setObjectName(QString::fromUtf8("lowest_height"));
        sizePolicy1.setHeightForWidth(lowest_height->sizePolicy().hasHeightForWidth());
        lowest_height->setSizePolicy(sizePolicy1);
        lowest_height->setMinimumSize(QSize(0, 40));

        horizontalLayout_2->addWidget(lowest_height);

        lowest_height_confirm = new QPushButton(slamSet);
        lowest_height_confirm->setObjectName(QString::fromUtf8("lowest_height_confirm"));
        sizePolicy2.setHeightForWidth(lowest_height_confirm->sizePolicy().hasHeightForWidth());
        lowest_height_confirm->setSizePolicy(sizePolicy2);
        lowest_height_confirm->setMinimumSize(QSize(0, 40));

        horizontalLayout_2->addWidget(lowest_height_confirm);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        highest_height_info = new QLabel(slamSet);
        highest_height_info->setObjectName(QString::fromUtf8("highest_height_info"));
        sizePolicy.setHeightForWidth(highest_height_info->sizePolicy().hasHeightForWidth());
        highest_height_info->setSizePolicy(sizePolicy);
        highest_height_info->setFont(font);

        horizontalLayout_4->addWidget(highest_height_info);

        highest_height = new QLineEdit(slamSet);
        highest_height->setObjectName(QString::fromUtf8("highest_height"));
        sizePolicy1.setHeightForWidth(highest_height->sizePolicy().hasHeightForWidth());
        highest_height->setSizePolicy(sizePolicy1);
        highest_height->setMinimumSize(QSize(0, 40));

        horizontalLayout_4->addWidget(highest_height);

        highest_height_confirm = new QPushButton(slamSet);
        highest_height_confirm->setObjectName(QString::fromUtf8("highest_height_confirm"));
        sizePolicy2.setHeightForWidth(highest_height_confirm->sizePolicy().hasHeightForWidth());
        highest_height_confirm->setSizePolicy(sizePolicy2);
        highest_height_confirm->setMinimumSize(QSize(0, 40));

        horizontalLayout_4->addWidget(highest_height_confirm);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        add_brkpoint_btn = new QPushButton(slamSet);
        add_brkpoint_btn->setObjectName(QString::fromUtf8("add_brkpoint_btn"));
        add_brkpoint_btn->setMinimumSize(QSize(0, 40));

        horizontalLayout_5->addWidget(add_brkpoint_btn);

        del_brkpoint_btn = new QPushButton(slamSet);
        del_brkpoint_btn->setObjectName(QString::fromUtf8("del_brkpoint_btn"));
        del_brkpoint_btn->setMinimumSize(QSize(0, 40));

        horizontalLayout_5->addWidget(del_brkpoint_btn);

        reveal_brkpoint_btn = new QPushButton(slamSet);
        reveal_brkpoint_btn->setObjectName(QString::fromUtf8("reveal_brkpoint_btn"));
        reveal_brkpoint_btn->setMinimumSize(QSize(0, 40));

        horizontalLayout_5->addWidget(reveal_brkpoint_btn);


        verticalLayout->addLayout(horizontalLayout_5);

        height_viewer = new QTextBrowser(slamSet);
        height_viewer->setObjectName(QString::fromUtf8("height_viewer"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(height_viewer->sizePolicy().hasHeightForWidth());
        height_viewer->setSizePolicy(sizePolicy3);
        height_viewer->setMinimumSize(QSize(40, 40));
        height_viewer->setMaximumSize(QSize(16777215, 160));

        verticalLayout->addWidget(height_viewer);

        clr_screen_button = new QPushButton(slamSet);
        clr_screen_button->setObjectName(QString::fromUtf8("clr_screen_button"));
        clr_screen_button->setFont(font);

        verticalLayout->addWidget(clr_screen_button);

        slam_res_widget = new QWidget(slamSet);
        slam_res_widget->setObjectName(QString::fromUtf8("slam_res_widget"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(slam_res_widget->sizePolicy().hasHeightForWidth());
        slam_res_widget->setSizePolicy(sizePolicy4);
        gridLayout = new QGridLayout(slam_res_widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        slam_res = new QLabel(slam_res_widget);
        slam_res->setObjectName(QString::fromUtf8("slam_res"));
        QSizePolicy sizePolicy5(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(slam_res->sizePolicy().hasHeightForWidth());
        slam_res->setSizePolicy(sizePolicy5);

        gridLayout->addWidget(slam_res, 0, 0, 1, 1);


        verticalLayout->addWidget(slam_res_widget);

        pushButton = new QPushButton(slamSet);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(20);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        cancel_button = new QPushButton(slamSet);
        cancel_button->setObjectName(QString::fromUtf8("cancel_button"));
        sizePolicy1.setHeightForWidth(cancel_button->sizePolicy().hasHeightForWidth());
        cancel_button->setSizePolicy(sizePolicy1);
        cancel_button->setMinimumSize(QSize(40, 40));

        horizontalLayout_3->addWidget(cancel_button);

        confirm_button = new QPushButton(slamSet);
        confirm_button->setObjectName(QString::fromUtf8("confirm_button"));
        sizePolicy1.setHeightForWidth(confirm_button->sizePolicy().hasHeightForWidth());
        confirm_button->setSizePolicy(sizePolicy1);
        confirm_button->setMinimumSize(QSize(40, 40));

        horizontalLayout_3->addWidget(confirm_button);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(slamSet);

        QMetaObject::connectSlotsByName(slamSet);
    } // setupUi

    void retranslateUi(QWidget *slamSet)
    {
        slamSet->setWindowTitle(QApplication::translate("slamSet", "Form", nullptr));
        bag_choose_info->setText(QApplication::translate("slamSet", "\350\276\223\345\205\245\346\225\260\346\215\256", nullptr));
        reload_bag->setText(QApplication::translate("slamSet", "\345\210\267\346\226\260", nullptr));
        lowest_height_info->setText(QApplication::translate("slamSet", "\346\234\200\344\275\216\351\253\230\345\272\246", nullptr));
        lowest_height_confirm->setText(QApplication::translate("slamSet", "\347\241\256\350\256\244", nullptr));
        highest_height_info->setText(QApplication::translate("slamSet", "\346\234\200\351\253\230\351\253\230\345\272\246", nullptr));
        highest_height_confirm->setText(QApplication::translate("slamSet", "\347\241\256\350\256\244", nullptr));
        add_brkpoint_btn->setText(QApplication::translate("slamSet", "\345\242\236\345\212\240\346\226\255\347\202\271", nullptr));
        del_brkpoint_btn->setText(QApplication::translate("slamSet", "\345\210\240\351\231\244\346\226\255\347\202\271", nullptr));
        reveal_brkpoint_btn->setText(QApplication::translate("slamSet", "\346\230\276\347\244\272\346\226\255\347\202\271", nullptr));
        clr_screen_button->setText(QApplication::translate("slamSet", "\346\270\205\347\251\272\346\230\276\347\244\272\346\241\206", nullptr));
        slam_res->setText(QString());
        pushButton->setText(QApplication::translate("slamSet", "\347\273\223\346\236\234\346\230\276\347\244\272", nullptr));
        cancel_button->setText(QApplication::translate("slamSet", "\345\217\226\346\266\210", nullptr));
        confirm_button->setText(QApplication::translate("slamSet", "\347\224\237\346\210\220\345\234\260\345\233\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class slamSet: public Ui_slamSet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SLAMSET_H
