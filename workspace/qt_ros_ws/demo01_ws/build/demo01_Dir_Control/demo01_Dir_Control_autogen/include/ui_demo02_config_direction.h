/********************************************************************************
** Form generated from reading UI file 'demo02_config_direction.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEMO02_CONFIG_DIRECTION_H
#define UI_DEMO02_CONFIG_DIRECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_demo02_config_direction
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_4;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;

    void setupUi(QWidget *demo02_config_direction)
    {
        if (demo02_config_direction->objectName().isEmpty())
            demo02_config_direction->setObjectName(QString::fromUtf8("demo02_config_direction"));
        demo02_config_direction->resize(300, 300);
        verticalLayout_2 = new QVBoxLayout(demo02_config_direction);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_2 = new QPushButton(demo02_config_direction);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QFont font;
        font.setPointSize(18);
        pushButton_2->setFont(font);
        pushButton_2->setIconSize(QSize(25, 25));

        horizontalLayout->addWidget(pushButton_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        pushButton = new QPushButton(demo02_config_direction);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font);
        pushButton->setIconSize(QSize(25, 25));

        verticalLayout->addWidget(pushButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton_4 = new QPushButton(demo02_config_direction);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setFont(font);
        pushButton_4->setIconSize(QSize(25, 25));

        verticalLayout->addWidget(pushButton_4);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_3 = new QPushButton(demo02_config_direction);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setFont(font);
        pushButton_3->setIconSize(QSize(25, 25));

        horizontalLayout->addWidget(pushButton_3);


        verticalLayout_2->addLayout(horizontalLayout);

        pushButton_5 = new QPushButton(demo02_config_direction);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        verticalLayout_2->addWidget(pushButton_5);


        retranslateUi(demo02_config_direction);

        QMetaObject::connectSlotsByName(demo02_config_direction);
    } // setupUi

    void retranslateUi(QWidget *demo02_config_direction)
    {
        demo02_config_direction->setWindowTitle(QApplication::translate("demo02_config_direction", "Form", nullptr));
        pushButton_2->setText(QApplication::translate("demo02_config_direction", "\345\267\246\344\274\240", nullptr));
        pushButton->setText(QApplication::translate("demo02_config_direction", "\345\211\215\350\277\233", nullptr));
        pushButton_4->setText(QApplication::translate("demo02_config_direction", "\345\220\216\351\200\200", nullptr));
        pushButton_3->setText(QApplication::translate("demo02_config_direction", "\345\217\263\350\275\254", nullptr));
        pushButton_5->setText(QApplication::translate("demo02_config_direction", "back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class demo02_config_direction: public Ui_demo02_config_direction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEMO02_CONFIG_DIRECTION_H
