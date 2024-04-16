/********************************************************************************
** Form generated from reading UI file 'view.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_H
#define UI_VIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_view
{
public:

    void setupUi(QWidget *view)
    {
        if (view->objectName().isEmpty())
            view->setObjectName(QString::fromUtf8("view"));
        view->resize(800, 600);

        retranslateUi(view);

        QMetaObject::connectSlotsByName(view);
    } // setupUi

    void retranslateUi(QWidget *view)
    {
        view->setWindowTitle(QApplication::translate("view", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class view: public Ui_view {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_H
