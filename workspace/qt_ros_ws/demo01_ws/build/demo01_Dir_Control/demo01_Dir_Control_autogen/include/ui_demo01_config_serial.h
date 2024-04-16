/********************************************************************************
** Form generated from reading UI file 'demo01_config_serial.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEMO01_CONFIG_SERIAL_H
#define UI_DEMO01_CONFIG_SERIAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_demo01_Config_Serial
{
public:
    QHBoxLayout *horizontalLayout_14;
    QHBoxLayout *horizontalLayout_13;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_open_serial;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QComboBox *comboBox_portName;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QComboBox *comboBox_parity;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QComboBox *comboBox_databits;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *comboBox_stopbits;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QComboBox *comboBox_baudrate;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_clear_receive;
    QSpacerItem *verticalSpacer_9;
    QTextEdit *textEdit_Receive;
    QSpacerItem *verticalSpacer_10;
    QHBoxLayout *horizontalLayout_11;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *pushButton_reset_receive_num;
    QSpacerItem *verticalSpacer_12;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_clear_send;
    QSpacerItem *verticalSpacer_11;
    QTextEdit *textEdit_Send;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *pushButton_reset_send_num;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *pushButton_send;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *pushButton_back;

    void setupUi(QWidget *demo01_Config_Serial)
    {
        if (demo01_Config_Serial->objectName().isEmpty())
            demo01_Config_Serial->setObjectName(QString::fromUtf8("demo01_Config_Serial"));
        demo01_Config_Serial->resize(549, 382);
        horizontalLayout_14 = new QHBoxLayout(demo01_Config_Serial);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_open_serial = new QPushButton(demo01_Config_Serial);
        pushButton_open_serial->setObjectName(QString::fromUtf8("pushButton_open_serial"));

        verticalLayout->addWidget(pushButton_open_serial);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(demo01_Config_Serial);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        comboBox_portName = new QComboBox(demo01_Config_Serial);
        comboBox_portName->setObjectName(QString::fromUtf8("comboBox_portName"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox_portName->sizePolicy().hasHeightForWidth());
        comboBox_portName->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(comboBox_portName);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(demo01_Config_Serial);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        comboBox_parity = new QComboBox(demo01_Config_Serial);
        comboBox_parity->addItem(QString());
        comboBox_parity->addItem(QString());
        comboBox_parity->addItem(QString());
        comboBox_parity->setObjectName(QString::fromUtf8("comboBox_parity"));
        sizePolicy.setHeightForWidth(comboBox_parity->sizePolicy().hasHeightForWidth());
        comboBox_parity->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(comboBox_parity);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_5 = new QLabel(demo01_Config_Serial);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        comboBox_databits = new QComboBox(demo01_Config_Serial);
        comboBox_databits->addItem(QString());
        comboBox_databits->addItem(QString());
        comboBox_databits->addItem(QString());
        comboBox_databits->addItem(QString());
        comboBox_databits->setObjectName(QString::fromUtf8("comboBox_databits"));
        sizePolicy.setHeightForWidth(comboBox_databits->sizePolicy().hasHeightForWidth());
        comboBox_databits->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(false);
        comboBox_databits->setFont(font);
        comboBox_databits->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout->addWidget(comboBox_databits);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(demo01_Config_Serial);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        comboBox_stopbits = new QComboBox(demo01_Config_Serial);
        comboBox_stopbits->addItem(QString());
        comboBox_stopbits->addItem(QString());
        comboBox_stopbits->addItem(QString());
        comboBox_stopbits->setObjectName(QString::fromUtf8("comboBox_stopbits"));
        sizePolicy.setHeightForWidth(comboBox_stopbits->sizePolicy().hasHeightForWidth());
        comboBox_stopbits->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(comboBox_stopbits);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_2 = new QLabel(demo01_Config_Serial);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_5->addWidget(label_2);

        comboBox_baudrate = new QComboBox(demo01_Config_Serial);
        comboBox_baudrate->addItem(QString());
        comboBox_baudrate->addItem(QString());
        comboBox_baudrate->addItem(QString());
        comboBox_baudrate->addItem(QString());
        comboBox_baudrate->addItem(QString());
        comboBox_baudrate->addItem(QString());
        comboBox_baudrate->addItem(QString());
        comboBox_baudrate->addItem(QString());
        comboBox_baudrate->setObjectName(QString::fromUtf8("comboBox_baudrate"));
        sizePolicy.setHeightForWidth(comboBox_baudrate->sizePolicy().hasHeightForWidth());
        comboBox_baudrate->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(comboBox_baudrate);


        verticalLayout->addLayout(horizontalLayout_5);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_6 = new QLabel(demo01_Config_Serial);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_2->addWidget(label_6);

        checkBox = new QCheckBox(demo01_Config_Serial);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout_2->addWidget(checkBox);

        checkBox_2 = new QCheckBox(demo01_Config_Serial);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        verticalLayout_2->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(demo01_Config_Serial);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        verticalLayout_2->addWidget(checkBox_3);


        verticalLayout_3->addLayout(verticalLayout_2);


        horizontalLayout_13->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_7 = new QLabel(demo01_Config_Serial);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_9->addWidget(label_7);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer);

        pushButton_clear_receive = new QPushButton(demo01_Config_Serial);
        pushButton_clear_receive->setObjectName(QString::fromUtf8("pushButton_clear_receive"));

        horizontalLayout_9->addWidget(pushButton_clear_receive);


        verticalLayout_4->addLayout(horizontalLayout_9);

        verticalSpacer_9 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_9);

        textEdit_Receive = new QTextEdit(demo01_Config_Serial);
        textEdit_Receive->setObjectName(QString::fromUtf8("textEdit_Receive"));

        verticalLayout_4->addWidget(textEdit_Receive);

        verticalSpacer_10 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_9 = new QLabel(demo01_Config_Serial);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_6->addWidget(label_9);

        horizontalSpacer_6 = new QSpacerItem(13, 19, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        label_11 = new QLabel(demo01_Config_Serial);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_6->addWidget(label_11);


        horizontalLayout_11->addLayout(horizontalLayout_6);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_9);

        pushButton_reset_receive_num = new QPushButton(demo01_Config_Serial);
        pushButton_reset_receive_num->setObjectName(QString::fromUtf8("pushButton_reset_receive_num"));

        horizontalLayout_11->addWidget(pushButton_reset_receive_num);


        verticalLayout_4->addLayout(horizontalLayout_11);

        verticalSpacer_12 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_12);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_8 = new QLabel(demo01_Config_Serial);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_12->addWidget(label_8);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_2);

        pushButton_clear_send = new QPushButton(demo01_Config_Serial);
        pushButton_clear_send->setObjectName(QString::fromUtf8("pushButton_clear_send"));

        horizontalLayout_12->addWidget(pushButton_clear_send);


        verticalLayout_4->addLayout(horizontalLayout_12);

        verticalSpacer_11 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_11);

        textEdit_Send = new QTextEdit(demo01_Config_Serial);
        textEdit_Send->setObjectName(QString::fromUtf8("textEdit_Send"));

        verticalLayout_4->addWidget(textEdit_Send);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_10 = new QLabel(demo01_Config_Serial);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_7->addWidget(label_10);

        horizontalSpacer_7 = new QSpacerItem(13, 19, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);

        label_12 = new QLabel(demo01_Config_Serial);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_7->addWidget(label_12);


        horizontalLayout_8->addLayout(horizontalLayout_7);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_10);

        pushButton_reset_send_num = new QPushButton(demo01_Config_Serial);
        pushButton_reset_send_num->setObjectName(QString::fromUtf8("pushButton_reset_send_num"));

        horizontalLayout_8->addWidget(pushButton_reset_send_num);


        verticalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        pushButton_send = new QPushButton(demo01_Config_Serial);
        pushButton_send->setObjectName(QString::fromUtf8("pushButton_send"));

        horizontalLayout_10->addWidget(pushButton_send);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_8);

        pushButton_back = new QPushButton(demo01_Config_Serial);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));

        horizontalLayout_10->addWidget(pushButton_back);


        verticalLayout_4->addLayout(horizontalLayout_10);


        horizontalLayout_13->addLayout(verticalLayout_4);


        horizontalLayout_14->addLayout(horizontalLayout_13);


        retranslateUi(demo01_Config_Serial);

        QMetaObject::connectSlotsByName(demo01_Config_Serial);
    } // setupUi

    void retranslateUi(QWidget *demo01_Config_Serial)
    {
        demo01_Config_Serial->setWindowTitle(QApplication::translate("demo01_Config_Serial", "Form", nullptr));
        pushButton_open_serial->setText(QApplication::translate("demo01_Config_Serial", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        label->setText(QApplication::translate("demo01_Config_Serial", "\344\270\262\345\217\243", nullptr));
        label_3->setText(QApplication::translate("demo01_Config_Serial", "\346\243\200\351\252\214\344\275\215", nullptr));
        comboBox_parity->setItemText(0, QApplication::translate("demo01_Config_Serial", "Even", nullptr));
        comboBox_parity->setItemText(1, QApplication::translate("demo01_Config_Serial", "Odd", nullptr));
        comboBox_parity->setItemText(2, QApplication::translate("demo01_Config_Serial", "NoParity", nullptr));

        label_5->setText(QApplication::translate("demo01_Config_Serial", "\346\225\260\346\215\256\344\275\215", nullptr));
        comboBox_databits->setItemText(0, QApplication::translate("demo01_Config_Serial", "5", nullptr));
        comboBox_databits->setItemText(1, QApplication::translate("demo01_Config_Serial", "6", nullptr));
        comboBox_databits->setItemText(2, QApplication::translate("demo01_Config_Serial", "7", nullptr));
        comboBox_databits->setItemText(3, QApplication::translate("demo01_Config_Serial", "8", nullptr));

        label_4->setText(QApplication::translate("demo01_Config_Serial", "\345\201\234\346\255\242\344\275\215", nullptr));
        comboBox_stopbits->setItemText(0, QApplication::translate("demo01_Config_Serial", "1", nullptr));
        comboBox_stopbits->setItemText(1, QApplication::translate("demo01_Config_Serial", "1.5", nullptr));
        comboBox_stopbits->setItemText(2, QApplication::translate("demo01_Config_Serial", "2", nullptr));

        label_2->setText(QApplication::translate("demo01_Config_Serial", "\346\263\242\347\211\271\347\216\207", nullptr));
        comboBox_baudrate->setItemText(0, QApplication::translate("demo01_Config_Serial", "2400", nullptr));
        comboBox_baudrate->setItemText(1, QApplication::translate("demo01_Config_Serial", "4800", nullptr));
        comboBox_baudrate->setItemText(2, QApplication::translate("demo01_Config_Serial", "9600", nullptr));
        comboBox_baudrate->setItemText(3, QApplication::translate("demo01_Config_Serial", "19200", nullptr));
        comboBox_baudrate->setItemText(4, QApplication::translate("demo01_Config_Serial", "38400", nullptr));
        comboBox_baudrate->setItemText(5, QApplication::translate("demo01_Config_Serial", "115200", nullptr));
        comboBox_baudrate->setItemText(6, QApplication::translate("demo01_Config_Serial", "128000", nullptr));
        comboBox_baudrate->setItemText(7, QApplication::translate("demo01_Config_Serial", "256000", nullptr));

        label_6->setText(QApplication::translate("demo01_Config_Serial", "\346\216\245\346\224\266\350\256\276\347\275\256\357\274\232", nullptr));
        checkBox->setText(QApplication::translate("demo01_Config_Serial", "ASCII", nullptr));
        checkBox_2->setText(QApplication::translate("demo01_Config_Serial", "Hex", nullptr));
        checkBox_3->setText(QApplication::translate("demo01_Config_Serial", "\346\232\202\345\201\234", nullptr));
        label_7->setText(QApplication::translate("demo01_Config_Serial", "\346\216\245\346\224\266\345\214\272\357\274\232", nullptr));
        pushButton_clear_receive->setText(QApplication::translate("demo01_Config_Serial", "\346\270\205\347\251\272\346\216\245\346\224\266\345\214\272", nullptr));
        label_9->setText(QApplication::translate("demo01_Config_Serial", "\346\216\245\346\224\266\345\255\227\350\212\202\357\274\232", nullptr));
        label_11->setText(QApplication::translate("demo01_Config_Serial", "TextLabel", nullptr));
        pushButton_reset_receive_num->setText(QApplication::translate("demo01_Config_Serial", "\351\207\215\346\226\260\350\256\260\345\275\225\346\216\245\346\224\266\345\255\227\350\212\202\346\225\260", nullptr));
        label_8->setText(QApplication::translate("demo01_Config_Serial", "\345\217\221\351\200\201\345\214\272\357\274\232", nullptr));
        pushButton_clear_send->setText(QApplication::translate("demo01_Config_Serial", "\346\270\205\347\251\272\345\217\221\351\200\201\345\214\272", nullptr));
        label_10->setText(QApplication::translate("demo01_Config_Serial", "\345\217\221\351\200\201\345\255\227\350\212\202\357\274\232", nullptr));
        label_12->setText(QApplication::translate("demo01_Config_Serial", "TextLabel", nullptr));
        pushButton_reset_send_num->setText(QApplication::translate("demo01_Config_Serial", "\351\207\215\346\226\260\350\256\260\345\275\225\345\217\221\351\200\201\345\255\227\350\212\202\346\225\260", nullptr));
        pushButton_send->setText(QApplication::translate("demo01_Config_Serial", "\345\217\221\351\200\201", nullptr));
        pushButton_back->setText(QApplication::translate("demo01_Config_Serial", "back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class demo01_Config_Serial: public Ui_demo01_Config_Serial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEMO01_CONFIG_SERIAL_H
