/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Admin
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *Admin)
    {
        if (Admin->objectName().isEmpty())
            Admin->setObjectName("Admin");
        Admin->resize(800, 600);
        pushButton = new QPushButton(Admin);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(340, 160, 101, 51));
        QFont font;
        font.setPointSize(16);
        pushButton->setFont(font);

        retranslateUi(Admin);

        QMetaObject::connectSlotsByName(Admin);
    } // setupUi

    void retranslateUi(QWidget *Admin)
    {
        Admin->setWindowTitle(QCoreApplication::translate("Admin", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("Admin", "\344\270\262\345\217\243\350\260\203\350\257\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Admin: public Ui_Admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
