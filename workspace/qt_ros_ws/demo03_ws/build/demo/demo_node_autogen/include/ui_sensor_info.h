/********************************************************************************
** Form generated from reading UI file 'sensor_info.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENSOR_INFO_H
#define UI_SENSOR_INFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sensor_info
{
public:
    QPushButton *pushButton_back_to_admin;

    void setupUi(QWidget *Sensor_info)
    {
        if (Sensor_info->objectName().isEmpty())
            Sensor_info->setObjectName(QString::fromUtf8("Sensor_info"));
        Sensor_info->resize(800, 600);
        pushButton_back_to_admin = new QPushButton(Sensor_info);
        pushButton_back_to_admin->setObjectName(QString::fromUtf8("pushButton_back_to_admin"));
        pushButton_back_to_admin->setGeometry(QRect(400, 260, 89, 25));

        retranslateUi(Sensor_info);

        QMetaObject::connectSlotsByName(Sensor_info);
    } // setupUi

    void retranslateUi(QWidget *Sensor_info)
    {
        Sensor_info->setWindowTitle(QApplication::translate("Sensor_info", "Form", nullptr));
        pushButton_back_to_admin->setText(QApplication::translate("Sensor_info", "back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sensor_info: public Ui_Sensor_info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENSOR_INFO_H
