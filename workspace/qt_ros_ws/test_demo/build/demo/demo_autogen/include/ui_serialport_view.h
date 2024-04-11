/********************************************************************************
** Form generated from reading UI file 'serialport_view.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIALPORT_VIEW_H
#define UI_SERIALPORT_VIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_serialport_view
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *serialport_view)
    {
        if (serialport_view->objectName().isEmpty())
            serialport_view->setObjectName("serialport_view");
        serialport_view->resize(800, 600);
        pushButton = new QPushButton(serialport_view);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(360, 270, 89, 25));

        retranslateUi(serialport_view);

        QMetaObject::connectSlotsByName(serialport_view);
    } // setupUi

    void retranslateUi(QWidget *serialport_view)
    {
        serialport_view->setWindowTitle(QCoreApplication::translate("serialport_view", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("serialport_view", "\345\233\236\345\210\260\344\270\273\347\225\214\351\235\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class serialport_view: public Ui_serialport_view {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIALPORT_VIEW_H
