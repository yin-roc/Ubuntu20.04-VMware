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
#include <QtWebEngineWidgets/QWebEngineView>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Map
{
public:
    QPushButton *pushButton_back_to_admin;
    QPushButton *pushButton;
    QLabel *speed;
    QLabel *gps;
    QLabel *route;
    QWebEngineView *webEngineView;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;

    void setupUi(QWidget *Map)
    {
        if (Map->objectName().isEmpty())
            Map->setObjectName(QString::fromUtf8("Map"));
        Map->resize(800, 600);
        pushButton_back_to_admin = new QPushButton(Map);
        pushButton_back_to_admin->setObjectName(QString::fromUtf8("pushButton_back_to_admin"));
        pushButton_back_to_admin->setGeometry(QRect(570, 430, 89, 25));
        pushButton = new QPushButton(Map);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(650, 290, 89, 25));
        speed = new QLabel(Map);
        speed->setObjectName(QString::fromUtf8("speed"));
        speed->setGeometry(QRect(570, 310, 67, 17));
        gps = new QLabel(Map);
        gps->setObjectName(QString::fromUtf8("gps"));
        gps->setGeometry(QRect(620, 70, 67, 17));
        route = new QLabel(Map);
        route->setObjectName(QString::fromUtf8("route"));
        route->setGeometry(QRect(570, 370, 67, 17));
        webEngineView = new QWebEngineView(Map);
        webEngineView->setObjectName(QString::fromUtf8("webEngineView"));
        webEngineView->setGeometry(QRect(10, 20, 541, 561));
        label = new QLabel(Map);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(580, 150, 67, 17));
        label_2 = new QLabel(Map);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(580, 200, 67, 17));
        lineEdit = new QLineEdit(Map);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(630, 150, 113, 25));
        lineEdit_2 = new QLineEdit(Map);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(630, 200, 113, 25));

        retranslateUi(Map);

        QMetaObject::connectSlotsByName(Map);
    } // setupUi

    void retranslateUi(QWidget *Map)
    {
        Map->setWindowTitle(QApplication::translate("Map", "Form", nullptr));
        pushButton_back_to_admin->setText(QApplication::translate("Map", "back", nullptr));
        pushButton->setText(QApplication::translate("Map", "PushButton", nullptr));
        speed->setText(QApplication::translate("Map", "speed", nullptr));
        gps->setText(QApplication::translate("Map", "gps", nullptr));
        route->setText(QApplication::translate("Map", "route", nullptr));
        label->setText(QApplication::translate("Map", "\350\265\267\347\202\271\357\274\232", nullptr));
        label_2->setText(QApplication::translate("Map", "\351\207\215\347\202\271\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Map: public Ui_Map {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAP_H
