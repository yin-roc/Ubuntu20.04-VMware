/********************************************************************************
** Form generated from reading UI file 'serial.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
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
            Serial->setObjectName("Serial");
        Serial->resize(800, 600);
        verticalLayout_4 = new QVBoxLayout(Serial);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_10);

        pushButton_open_serial = new QPushButton(Serial);
        pushButton_open_serial->setObjectName("pushButton_open_serial");
        QFont font;
        font.setPointSize(16);
        pushButton_open_serial->setFont(font);

        horizontalLayout_8->addWidget(pushButton_open_serial);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_8);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label = new QLabel(Serial);
        label->setObjectName("label");
        label->setFont(font);

        horizontalLayout_9->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer);

        comboBox_portName = new QComboBox(Serial);
        comboBox_portName->setObjectName("comboBox_portName");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox_portName->sizePolicy().hasHeightForWidth());
        comboBox_portName->setSizePolicy(sizePolicy);
        comboBox_portName->setMinimumSize(QSize(100, 32));
        comboBox_portName->setFont(font);

        horizontalLayout_9->addWidget(comboBox_portName);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_14);


        verticalLayout_2->addLayout(horizontalLayout_9);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(Serial);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

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
        comboBox_baudrate->setObjectName("comboBox_baudrate");
        sizePolicy.setHeightForWidth(comboBox_baudrate->sizePolicy().hasHeightForWidth());
        comboBox_baudrate->setSizePolicy(sizePolicy);
        comboBox_baudrate->setMinimumSize(QSize(0, 0));
        comboBox_baudrate->setFont(font);

        horizontalLayout_2->addWidget(comboBox_baudrate);


        horizontalLayout->addLayout(horizontalLayout_2);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_12);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_6 = new QLabel(Serial);
        label_6->setObjectName("label_6");
        label_6->setFont(font);

        verticalLayout->addWidget(label_6);

        checkBox_3 = new QCheckBox(Serial);
        checkBox_3->setObjectName("checkBox_3");
        checkBox_3->setFont(font);

        verticalLayout->addWidget(checkBox_3);

        checkBox = new QCheckBox(Serial);
        checkBox->setObjectName("checkBox");
        checkBox->setFont(font);

        verticalLayout->addWidget(checkBox);

        checkBox_2 = new QCheckBox(Serial);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setFont(font);

        verticalLayout->addWidget(checkBox_2);


        horizontalLayout_10->addLayout(verticalLayout);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_16);


        verticalLayout_2->addLayout(horizontalLayout_10);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);


        horizontalLayout_11->addLayout(verticalLayout_2);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_17);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_7 = new QLabel(Serial);
        label_7->setObjectName("label_7");
        label_7->setFont(font);

        horizontalLayout_3->addWidget(label_7);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        pushButton_clear_receive = new QPushButton(Serial);
        pushButton_clear_receive->setObjectName("pushButton_clear_receive");
        pushButton_clear_receive->setFont(font);

        horizontalLayout_3->addWidget(pushButton_clear_receive);


        verticalLayout_3->addLayout(horizontalLayout_3);

        textEdit_Receive = new QTextEdit(Serial);
        textEdit_Receive->setObjectName("textEdit_Receive");

        verticalLayout_3->addWidget(textEdit_Receive);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_9 = new QLabel(Serial);
        label_9->setObjectName("label_9");
        label_9->setFont(font);

        horizontalLayout_4->addWidget(label_9);

        label_11 = new QLabel(Serial);
        label_11->setObjectName("label_11");
        label_11->setFont(font);

        horizontalLayout_4->addWidget(label_11);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        pushButton_reset_receive_num = new QPushButton(Serial);
        pushButton_reset_receive_num->setObjectName("pushButton_reset_receive_num");
        pushButton_reset_receive_num->setFont(font);

        horizontalLayout_4->addWidget(pushButton_reset_receive_num);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_8 = new QLabel(Serial);
        label_8->setObjectName("label_8");
        label_8->setFont(font);

        horizontalLayout_5->addWidget(label_8);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);

        pushButton_clear_send = new QPushButton(Serial);
        pushButton_clear_send->setObjectName("pushButton_clear_send");
        pushButton_clear_send->setFont(font);

        horizontalLayout_5->addWidget(pushButton_clear_send);


        verticalLayout_3->addLayout(horizontalLayout_5);

        textEdit_Send = new QTextEdit(Serial);
        textEdit_Send->setObjectName("textEdit_Send");

        verticalLayout_3->addWidget(textEdit_Send);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_10 = new QLabel(Serial);
        label_10->setObjectName("label_10");
        label_10->setFont(font);

        horizontalLayout_6->addWidget(label_10);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);

        label_12 = new QLabel(Serial);
        label_12->setObjectName("label_12");
        label_12->setFont(font);

        horizontalLayout_6->addWidget(label_12);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_8);

        pushButton_reset_send_num = new QPushButton(Serial);
        pushButton_reset_send_num->setObjectName("pushButton_reset_send_num");
        pushButton_reset_send_num->setFont(font);

        horizontalLayout_6->addWidget(pushButton_reset_send_num);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        pushButton_send = new QPushButton(Serial);
        pushButton_send->setObjectName("pushButton_send");
        pushButton_send->setFont(font);

        horizontalLayout_7->addWidget(pushButton_send);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_9);

        pushButton_back = new QPushButton(Serial);
        pushButton_back->setObjectName("pushButton_back");
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
        Serial->setWindowTitle(QCoreApplication::translate("Serial", "Form", nullptr));
        pushButton_open_serial->setText(QCoreApplication::translate("Serial", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        label->setText(QCoreApplication::translate("Serial", "\344\270\262\345\217\243\351\200\211\346\213\251", nullptr));
        label_2->setText(QCoreApplication::translate("Serial", "\346\263\242\347\211\271\347\216\207", nullptr));
        comboBox_baudrate->setItemText(0, QCoreApplication::translate("Serial", "2400", nullptr));
        comboBox_baudrate->setItemText(1, QCoreApplication::translate("Serial", "4800", nullptr));
        comboBox_baudrate->setItemText(2, QCoreApplication::translate("Serial", "9600", nullptr));
        comboBox_baudrate->setItemText(3, QCoreApplication::translate("Serial", "19200", nullptr));
        comboBox_baudrate->setItemText(4, QCoreApplication::translate("Serial", "38400", nullptr));
        comboBox_baudrate->setItemText(5, QCoreApplication::translate("Serial", "115200", nullptr));
        comboBox_baudrate->setItemText(6, QCoreApplication::translate("Serial", "128000", nullptr));
        comboBox_baudrate->setItemText(7, QCoreApplication::translate("Serial", "256000", nullptr));

        label_6->setText(QCoreApplication::translate("Serial", "\346\216\245\346\224\266\350\256\276\347\275\256\357\274\232", nullptr));
        checkBox_3->setText(QCoreApplication::translate("Serial", "\346\232\202\345\201\234", nullptr));
        checkBox->setText(QCoreApplication::translate("Serial", "ASCII", nullptr));
        checkBox_2->setText(QCoreApplication::translate("Serial", "Hex", nullptr));
        label_7->setText(QCoreApplication::translate("Serial", "\346\216\245\346\224\266\345\214\272\357\274\232", nullptr));
        pushButton_clear_receive->setText(QCoreApplication::translate("Serial", "\346\270\205\347\251\272\346\216\245\346\224\266\345\214\272", nullptr));
        label_9->setText(QCoreApplication::translate("Serial", "\346\216\245\346\224\266\345\255\227\350\212\202\357\274\232", nullptr));
        label_11->setText(QCoreApplication::translate("Serial", "TextLabel", nullptr));
        pushButton_reset_receive_num->setText(QCoreApplication::translate("Serial", "\351\207\215\346\226\260\350\256\260\345\275\225\346\216\245\346\224\266\345\255\227\350\212\202\346\225\260", nullptr));
        label_8->setText(QCoreApplication::translate("Serial", "\345\217\221\351\200\201\345\214\272\357\274\232", nullptr));
        pushButton_clear_send->setText(QCoreApplication::translate("Serial", "\346\270\205\347\251\272\345\217\221\351\200\201\345\214\272", nullptr));
        label_10->setText(QCoreApplication::translate("Serial", "\345\217\221\351\200\201\345\255\227\350\212\202\357\274\232", nullptr));
        label_12->setText(QCoreApplication::translate("Serial", "TextLabel", nullptr));
        pushButton_reset_send_num->setText(QCoreApplication::translate("Serial", "\351\207\215\346\226\260\350\256\260\345\275\225\345\217\221\351\200\201\345\255\227\350\212\202\346\225\260", nullptr));
        pushButton_send->setText(QCoreApplication::translate("Serial", "\345\217\221\351\200\201", nullptr));
        pushButton_back->setText(QCoreApplication::translate("Serial", "back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Serial: public Ui_Serial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIAL_H
