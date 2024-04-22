/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Admin
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_7;
    QPushButton *pushButton_ser_screen;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_base_screen;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_map_screen;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButton_sensor_screen;
    QSpacerItem *verticalSpacer_6;
    QPushButton *pushButton_back_menu;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *Admin)
    {
        if (Admin->objectName().isEmpty())
            Admin->setObjectName(QString::fromUtf8("Admin"));
        Admin->resize(800, 600);
        verticalLayout_2 = new QVBoxLayout(Admin);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_7);

        pushButton_ser_screen = new QPushButton(Admin);
        pushButton_ser_screen->setObjectName(QString::fromUtf8("pushButton_ser_screen"));
        QFont font;
        font.setPointSize(16);
        pushButton_ser_screen->setFont(font);

        verticalLayout->addWidget(pushButton_ser_screen);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton_base_screen = new QPushButton(Admin);
        pushButton_base_screen->setObjectName(QString::fromUtf8("pushButton_base_screen"));
        pushButton_base_screen->setFont(font);

        verticalLayout->addWidget(pushButton_base_screen);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        pushButton_map_screen = new QPushButton(Admin);
        pushButton_map_screen->setObjectName(QString::fromUtf8("pushButton_map_screen"));
        pushButton_map_screen->setFont(font);

        verticalLayout->addWidget(pushButton_map_screen);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        pushButton_sensor_screen = new QPushButton(Admin);
        pushButton_sensor_screen->setObjectName(QString::fromUtf8("pushButton_sensor_screen"));
        pushButton_sensor_screen->setFont(font);

        verticalLayout->addWidget(pushButton_sensor_screen);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);

        pushButton_back_menu = new QPushButton(Admin);
        pushButton_back_menu->setObjectName(QString::fromUtf8("pushButton_back_menu"));

        verticalLayout->addWidget(pushButton_back_menu);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(Admin);

        QMetaObject::connectSlotsByName(Admin);
    } // setupUi

    void retranslateUi(QWidget *Admin)
    {
        Admin->setWindowTitle(QApplication::translate("Admin", "Form", nullptr));
        pushButton_ser_screen->setText(QApplication::translate("Admin", "\344\270\262\345\217\243\350\260\203\350\257\225", nullptr));
        pushButton_base_screen->setText(QApplication::translate("Admin", "\345\272\225\347\233\230\344\277\241\346\201\257", nullptr));
        pushButton_map_screen->setText(QApplication::translate("Admin", "\345\234\260\345\233\276\350\260\203\350\257\225\347\225\214\351\235\242", nullptr));
        pushButton_sensor_screen->setText(QApplication::translate("Admin", "\344\274\240\346\204\237\345\231\250\344\277\241\346\201\257", nullptr));
        pushButton_back_menu->setText(QApplication::translate("Admin", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Admin: public Ui_Admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
