/********************************************************************************
** Form generated from reading UI file 'base_info.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASE_INFO_H
#define UI_BASE_INFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Base_info
{
public:
    QPushButton *pushButton_back_to_admin;

    void setupUi(QWidget *Base_info)
    {
        if (Base_info->objectName().isEmpty())
            Base_info->setObjectName(QString::fromUtf8("Base_info"));
        Base_info->resize(800, 600);
        pushButton_back_to_admin = new QPushButton(Base_info);
        pushButton_back_to_admin->setObjectName(QString::fromUtf8("pushButton_back_to_admin"));
        pushButton_back_to_admin->setGeometry(QRect(580, 440, 89, 25));

        retranslateUi(Base_info);

        QMetaObject::connectSlotsByName(Base_info);
    } // setupUi

    void retranslateUi(QWidget *Base_info)
    {
        Base_info->setWindowTitle(QApplication::translate("Base_info", "Form", nullptr));
        pushButton_back_to_admin->setText(QApplication::translate("Base_info", "back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Base_info: public Ui_Base_info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASE_INFO_H
