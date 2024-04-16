/********************************************************************************
** Form generated from reading UI file 'basic.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASIC_H
#define UI_BASIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Basic
{
public:
    QPushButton *pushButton_start;
    QPushButton *pushButton_turtle;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *Basic)
    {
        if (Basic->objectName().isEmpty())
            Basic->setObjectName(QString::fromUtf8("Basic"));
        Basic->resize(856, 605);
        pushButton_start = new QPushButton(Basic);
        pushButton_start->setObjectName(QString::fromUtf8("pushButton_start"));
        pushButton_start->setGeometry(QRect(30, 70, 89, 25));
        pushButton_turtle = new QPushButton(Basic);
        pushButton_turtle->setObjectName(QString::fromUtf8("pushButton_turtle"));
        pushButton_turtle->setGeometry(QRect(200, 70, 89, 25));
        pushButton_3 = new QPushButton(Basic);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(30, 180, 89, 25));
        pushButton_4 = new QPushButton(Basic);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(200, 180, 89, 25));

        retranslateUi(Basic);

        QMetaObject::connectSlotsByName(Basic);
    } // setupUi

    void retranslateUi(QWidget *Basic)
    {
        Basic->setWindowTitle(QApplication::translate("Basic", "Form", nullptr));
        pushButton_start->setText(QApplication::translate("Basic", "start", nullptr));
        pushButton_turtle->setText(QApplication::translate("Basic", "turtle", nullptr));
        pushButton_3->setText(QApplication::translate("Basic", "3", nullptr));
        pushButton_4->setText(QApplication::translate("Basic", "4", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Basic: public Ui_Basic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASIC_H
