/********************************************************************************
** Form generated from reading UI file 'user.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_H
#define UI_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_User
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_18;
    QSpacerItem *horizontalSpacer_32;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_31;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_13;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_12;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *speed_lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *power_lineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *distance_lineEdit;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QFrame *line;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_15;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_14;
    QHBoxLayout *horizontalLayout_12;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_8;
    QSlider *speed_horizontalSlider;
    QSpacerItem *horizontalSpacer_17;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_9;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_19;
    QHBoxLayout *horizontalLayout_14;
    QSpacerItem *horizontalSpacer_20;
    QPushButton *speed_confirm_pushButton;
    QSpacerItem *horizontalSpacer_21;
    QSpacerItem *verticalSpacer_2;
    QFrame *line_2;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_11;
    QSpacerItem *verticalSpacer_7;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *work_pushButton;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_10;
    QSpacerItem *verticalSpacer_8;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *back_pushButton;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_9;

    void setupUi(QWidget *User)
    {
        if (User->objectName().isEmpty())
            User->setObjectName("User");
        User->resize(800, 600);
        User->setMinimumSize(QSize(151, 32));
        User->setLayoutDirection(Qt::LeftToRight);
        User->setAutoFillBackground(true);
        verticalLayout_4 = new QVBoxLayout(User);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        horizontalSpacer_32 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_32);

        label_2 = new QLabel(User);
        label_2->setObjectName("label_2");
        QFont font;
        font.setPointSize(20);
        font.setKerning(true);
        label_2->setFont(font);

        horizontalLayout_18->addWidget(label_2);

        horizontalSpacer_31 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_31);


        verticalLayout_3->addLayout(horizontalLayout_18);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_13);

        label_5 = new QLabel(User);
        label_5->setObjectName("label_5");
        label_5->setBaseSize(QSize(0, 0));
        QFont font1;
        font1.setPointSize(18);
        font1.setKerning(true);
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_5);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_12);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(User);
        label->setObjectName("label");
        QFont font2;
        font2.setPointSize(16);
        font2.setKerning(true);
        label->setFont(font2);

        horizontalLayout->addWidget(label);

        speed_lineEdit = new QLineEdit(User);
        speed_lineEdit->setObjectName("speed_lineEdit");
        speed_lineEdit->setFont(font2);
        speed_lineEdit->setReadOnly(true);

        horizontalLayout->addWidget(speed_lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(User);
        label_3->setObjectName("label_3");
        label_3->setFont(font2);

        horizontalLayout_2->addWidget(label_3);

        power_lineEdit = new QLineEdit(User);
        power_lineEdit->setObjectName("power_lineEdit");
        power_lineEdit->setMinimumSize(QSize(142, 32));
        power_lineEdit->setFont(font2);
        power_lineEdit->setReadOnly(true);

        horizontalLayout_2->addWidget(power_lineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_4 = new QLabel(User);
        label_4->setObjectName("label_4");
        label_4->setFont(font2);

        horizontalLayout_3->addWidget(label_4);

        distance_lineEdit = new QLineEdit(User);
        distance_lineEdit->setObjectName("distance_lineEdit");
        distance_lineEdit->setMinimumSize(QSize(0, 0));
        distance_lineEdit->setFont(font2);
        distance_lineEdit->setReadOnly(true);

        horizontalLayout_3->addWidget(distance_lineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_8->addLayout(verticalLayout);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_3);

        line = new QFrame(User);
        line->setObjectName("line");
        line->setFrameShadow(QFrame::Plain);
        line->setLineWidth(5);
        line->setFrameShape(QFrame::VLine);

        horizontalLayout_8->addWidget(line);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_15);

        label_7 = new QLabel(User);
        label_7->setObjectName("label_7");
        QFont font3;
        font3.setPointSize(18);
        label_7->setFont(font3);

        horizontalLayout_11->addWidget(label_7);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_14);


        verticalLayout_2->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_8 = new QLabel(User);
        label_8->setObjectName("label_8");
        QFont font4;
        font4.setPointSize(16);
        label_8->setFont(font4);

        horizontalLayout_5->addWidget(label_8);

        speed_horizontalSlider = new QSlider(User);
        speed_horizontalSlider->setObjectName("speed_horizontalSlider");
        speed_horizontalSlider->setMinimumSize(QSize(189, 32));
        speed_horizontalSlider->setFont(font4);
        speed_horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(speed_horizontalSlider);


        horizontalLayout_12->addLayout(horizontalLayout_5);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_17);


        verticalLayout_2->addLayout(horizontalLayout_12);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_9 = new QLabel(User);
        label_9->setObjectName("label_9");
        label_9->setFont(font4);

        horizontalLayout_4->addWidget(label_9);

        doubleSpinBox = new QDoubleSpinBox(User);
        doubleSpinBox->setObjectName("doubleSpinBox");
        doubleSpinBox->setFont(font4);

        horizontalLayout_4->addWidget(doubleSpinBox);

        label_6 = new QLabel(User);
        label_6->setObjectName("label_6");
        label_6->setFont(font4);

        horizontalLayout_4->addWidget(label_6);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_19);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_20);

        speed_confirm_pushButton = new QPushButton(User);
        speed_confirm_pushButton->setObjectName("speed_confirm_pushButton");
        speed_confirm_pushButton->setFont(font4);

        horizontalLayout_14->addWidget(speed_confirm_pushButton);

        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_21);


        verticalLayout_2->addLayout(horizontalLayout_14);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout_8->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_8);

        line_2 = new QFrame(User);
        line_2->setObjectName("line_2");
        line_2->setFrameShadow(QFrame::Plain);
        line_2->setLineWidth(5);
        line_2->setFrameShape(QFrame::HLine);

        verticalLayout_3->addWidget(line_2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_10 = new QLabel(User);
        label_10->setObjectName("label_10");
        label_10->setBaseSize(QSize(0, 0));
        label_10->setFont(font1);
        label_10->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_10);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);

        comboBox = new QComboBox(User);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setMinimumSize(QSize(120, 35));
        comboBox->setFont(font3);

        horizontalLayout_7->addWidget(comboBox);


        horizontalLayout_10->addLayout(horizontalLayout_7);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_6);


        verticalLayout_3->addLayout(horizontalLayout_10);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_6);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_11);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_7);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_7);

        work_pushButton = new QPushButton(User);
        work_pushButton->setObjectName("work_pushButton");
        QFont font5;
        font5.setPointSize(20);
        work_pushButton->setFont(font5);

        horizontalLayout_9->addWidget(work_pushButton);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_5);


        verticalLayout_3->addLayout(horizontalLayout_9);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_10);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_8);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_8);

        back_pushButton = new QPushButton(User);
        back_pushButton->setObjectName("back_pushButton");
        back_pushButton->setFont(font4);

        horizontalLayout_13->addWidget(back_pushButton);


        verticalLayout_3->addLayout(horizontalLayout_13);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_5);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_9);


        verticalLayout_4->addLayout(verticalLayout_3);


        retranslateUi(User);

        QMetaObject::connectSlotsByName(User);
    } // setupUi

    void retranslateUi(QWidget *User)
    {
        User->setWindowTitle(QCoreApplication::translate("User", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("User", "\347\273\277\345\217\266\350\217\234\345\244\232\345\212\237\350\203\275\350\207\252\344\270\273\351\207\207\346\224\266\346\234\272\345\231\250\344\272\272\342\200\224\342\200\224\347\224\250\346\210\267\347\225\214\351\235\242", nullptr));
        label_5->setText(QCoreApplication::translate("User", "\346\230\276\347\244\272", nullptr));
        label->setText(QCoreApplication::translate("User", "\351\200\237\345\272\246\346\230\276\347\244\272\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("User", "\347\224\265\351\207\217\346\230\276\347\244\272\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("User", "\346\234\254\346\254\241\345\267\245\344\275\234\351\207\214\347\250\213\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("User", "\351\200\237\345\272\246\350\260\203\350\212\202", nullptr));
        label_8->setText(QCoreApplication::translate("User", "\346\273\221\345\212\250\350\260\203\350\212\202\357\274\232", nullptr));
        label_9->setText(QCoreApplication::translate("User", "\350\276\223\345\205\245\350\260\203\350\212\202\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("User", "cm/s", nullptr));
        speed_confirm_pushButton->setText(QCoreApplication::translate("User", "\347\241\256\350\256\244", nullptr));
        label_10->setText(QCoreApplication::translate("User", "\347\233\256\346\240\207\347\202\271\351\200\211\345\217\226\357\274\232", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("User", "\345\244\247\346\243\2321", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("User", "\345\244\247\346\243\2322", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("User", "\344\273\223\345\272\223", nullptr));

        work_pushButton->setText(QCoreApplication::translate("User", "\345\274\200\345\247\213\345\267\245\344\275\234", nullptr));
        back_pushButton->setText(QCoreApplication::translate("User", "\345\233\236\345\210\260\347\231\273\345\275\225\347\225\214\351\235\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class User: public Ui_User {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H
