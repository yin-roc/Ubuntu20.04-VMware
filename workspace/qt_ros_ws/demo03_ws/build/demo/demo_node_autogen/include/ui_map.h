/********************************************************************************
** Form generated from reading UI file 'map.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAP_H
#define UI_MAP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Map
{
public:
    QPushButton *pushButton_back_to_admin;

    void setupUi(QWidget *Map)
    {
        if (Map->objectName().isEmpty())
            Map->setObjectName(QString::fromUtf8("Map"));
        Map->resize(800, 600);
        pushButton_back_to_admin = new QPushButton(Map);
        pushButton_back_to_admin->setObjectName(QString::fromUtf8("pushButton_back_to_admin"));
        pushButton_back_to_admin->setGeometry(QRect(570, 430, 89, 25));

        retranslateUi(Map);

        QMetaObject::connectSlotsByName(Map);
    } // setupUi

    void retranslateUi(QWidget *Map)
    {
        Map->setWindowTitle(QApplication::translate("Map", "Form", nullptr));
        pushButton_back_to_admin->setText(QApplication::translate("Map", "back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Map: public Ui_Map {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAP_H
