/********************************************************************************
** Form generated from reading UI file 'serial.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIAL_H
#define UI_SERIAL_H

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

class Ui_Serial
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *pushButton_open_serial;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QComboBox *comboBox_portName;
    QSpacerItem *horizontalSpacer_14;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *comboBox_baudrate;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_17;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_clear_receive;
    QTextEdit *textEdit_Receive;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_9;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_reset_receive_num;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton_clear_send;
    QTextEdit *textEdit_Send;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *pushButton_reset_send_num;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_send;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *pushButton_back;

    void setupUi(QWidget *Serial)
    {
        if (Serial->objectName().isEmpty())
            Serial->setObjectName(QString::fromUtf8("Serial"));
        Serial->resize(800, 600);
        verticalLayout_4 = new QVBoxLayout(Serial);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_10);

        pushButton_open_serial = new QPushButton(Serial);
        pushButton_open_serial->setObjectName(QString::fromUtf8("pushButton_open_serial"));
        QFont font;
        font.setPointSize(16);
        pushButton_open_serial->setFont(font);

        horizontalLayout_8->addWidget(pushButton_open_serial);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_8);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label = new QLabel(Serial);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        horizontalLayout_9->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer);

        comboBox_portName = new QComboBox(Serial);
        comboBox_portName->setObjectName(QString::fromUtf8("comboBox_portName"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox_portName->sizePolicy().hasHeightForWidth());
        comboBox_portName->setSizePolicy(sizePolicy);
        comboBox_portName->setMinimumSize(QSize(100, 32));
        comboBox_portName->setFont(font);

        horizontalLayout_9->addWidget(comboBox_portName);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_14);


        verticalLayout_2->addLayout(horizontalLayout_9);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(Serial);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        comboBox_baudrate = new QComboBox(Serial);
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
        comboBox_baudrate->setMinimumSize(QSize(0, 0));
        comboBox_baudrate->setFont(font);

        horizontalLayout_2->addWidget(comboBox_baudrate);


        horizontalLayout->addLayout(horizontalLayout_2);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_12);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_6 = new QLabel(Serial);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        verticalLayout->addWidget(label_6);

        checkBox_3 = new QCheckBox(Serial);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setFont(font);

        verticalLayout->addWidget(checkBox_3);

        checkBox = new QCheckBox(Serial);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setFont(font);

        verticalLayout->addWidget(checkBox);

        checkBox_2 = new QCheckBox(Serial);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setFont(font);

        verticalLayout->addWidget(checkBox_2);


        horizontalLayout_10->addLayout(verticalLayout);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_16);


        verticalLayout_2->addLayout(horizontalLayout_10);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);


        horizontalLayout_11->addLayout(verticalLayout_2);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_17);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_7 = new QLabel(Serial);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        horizontalLayout_3->addWidget(label_7);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        pushButton_clear_receive = new QPushButton(Serial);
        pushButton_clear_receive->setObjectName(QString::fromUtf8("pushButton_clear_receive"));
        pushButton_clear_receive->setFont(font);

        horizontalLayout_3->addWidget(pushButton_clear_receive);


        verticalLayout_3->addLayout(horizontalLayout_3);

        textEdit_Receive = new QTextEdit(Serial);
        textEdit_Receive->setObjectName(QString::fromUtf8("textEdit_Receive"));

        verticalLayout_3->addWidget(textEdit_Receive);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_9 = new QLabel(Serial);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);

        horizontalLayout_4->addWidget(label_9);

        label_11 = new QLabel(Serial);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font);

        horizontalLayout_4->addWidget(label_11);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        pushButton_reset_receive_num = new QPushButton(Serial);
        pushButton_reset_receive_num->setObjectName(QString::fromUtf8("pushButton_reset_receive_num"));
        pushButton_reset_receive_num->setFont(font);

        horizontalLayout_4->addWidget(pushButton_reset_receive_num);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_8 = new QLabel(Serial);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        horizontalLayout_5->addWidget(label_8);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);

        pushButton_clear_send = new QPushButton(Serial);
        pushButton_clear_send->setObjectName(QString::fromUtf8("pushButton_clear_send"));
        pushButton_clear_send->setFont(font);

        horizontalLayout_5->addWidget(pushButton_clear_send);


        verticalLayout_3->addLayout(horizontalLayout_5);

        textEdit_Send = new QTextEdit(Serial);
        textEdit_Send->setObjectName(QString::fromUtf8("textEdit_Send"));

        verticalLayout_3->addWidget(textEdit_Send);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_10 = new QLabel(Serial);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);

        horizontalLayout_6->addWidget(label_10);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);

        label_12 = new QLabel(Serial);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font);

        horizontalLayout_6->addWidget(label_12);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_8);

        pushButton_reset_send_num = new QPushButton(Serial);
        pushButton_reset_send_num->setObjectName(QString::fromUtf8("pushButton_reset_send_num"));
        pushButton_reset_send_num->setFont(font);

        horizontalLayout_6->addWidget(pushButton_reset_send_num);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        pushButton_send = new QPushButton(Serial);
        pushButton_send->setObjectName(QString::fromUtf8("pushButton_send"));
        pushButton_send->setFont(font);

        horizontalLayout_7->addWidget(pushButton_send);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_9);

        pushButton_back = new QPushButton(Serial);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        pushButton_back->setFont(font);

        horizontalLayout_7->addWidget(pushButton_back);


        verticalLayout_3->addLayout(horizontalLayout_7);


        horizontalLayout_11->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout_11);


        retranslateUi(Serial);

        QMetaObject::connectSlotsByName(Serial);
    } // setupUi

    void retranslateUi(QWidget *Serial)
    {
        Serial->setWindowTitle(QApplication::translate("Serial", "Form", nullptr));
        pushButton_open_serial->setText(QApplication::translate("Serial", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        label->setText(QApplication::translate("Serial", "\344\270\262\345\217\243\351\200\211\346\213\251", nullptr));
        label_2->setText(QApplication::translate("Serial", "\346\263\242\347\211\271\347\216\207", nullptr));
        comboBox_baudrate->setItemText(0, QApplication::translate("Serial", "2400", nullptr));
        comboBox_baudrate->setItemText(1, QApplication::translate("Serial", "4800", nullptr));
        comboBox_baudrate->setItemText(2, QApplication::translate("Serial", "9600", nullptr));
        comboBox_baudrate->setItemText(3, QApplication::translate("Serial", "19200", nullptr));
        comboBox_baudrate->setItemText(4, QApplication::translate("Serial", "38400", nullptr));
        comboBox_baudrate->setItemText(5, QApplication::translate("Serial", "115200", nullptr));
        comboBox_baudrate->setItemText(6, QApplication::translate("Serial", "128000", nullptr));
        comboBox_baudrate->setItemText(7, QApplication::translate("Serial", "256000", nullptr));

        label_6->setText(QApplication::translate("Serial", "\346\216\245\346\224\266\350\256\276\347\275\256\357\274\232", nullptr));
        checkBox_3->setText(QApplication::translate("Serial", "\346\232\202\345\201\234", nullptr));
        checkBox->setText(QApplication::translate("Serial", "ASCII", nullptr));
        checkBox_2->setText(QApplication::translate("Serial", "Hex", nullptr));
        label_7->setText(QApplication::translate("Serial", "\346\216\245\346\224\266\345\214\272\357\274\232", nullptr));
        pushButton_clear_receive->setText(QApplication::translate("Serial", "\346\270\205\347\251\272\346\216\245\346\224\266\345\214\272", nullptr));
        label_9->setText(QApplication::translate("Serial", "\346\216\245\346\224\266\345\255\227\350\212\202\357\274\232", nullptr));
        label_11->setText(QApplication::translate("Serial", "TextLabel", nullptr));
        pushButton_reset_receive_num->setText(QApplication::translate("Serial", "\351\207\215\346\226\260\350\256\260\345\275\225\346\216\245\346\224\266\345\255\227\350\212\202\346\225\260", nullptr));
        label_8->setText(QApplication::translate("Serial", "\345\217\221\351\200\201\345\214\272\357\274\232", nullptr));
        pushButton_clear_send->setText(QApplication::translate("Serial", "\346\270\205\347\251\272\345\217\221\351\200\201\345\214\272", nullptr));
        label_10->setText(QApplication::translate("Serial", "\345\217\221\351\200\201\345\255\227\350\212\202\357\274\232", nullptr));
        label_12->setText(QApplication::translate("Serial", "TextLabel", nullptr));
        pushButton_reset_send_num->setText(QApplication::translate("Serial", "\351\207\215\346\226\260\350\256\260\345\275\225\345\217\221\351\200\201\345\255\227\350\212\202\346\225\260", nullptr));
        pushButton_send->setText(QApplication::translate("Serial", "\345\217\221\351\200\201", nullptr));
        pushButton_back->setText(QApplication::translate("Serial", "back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Serial: public Ui_Serial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIAL_H
