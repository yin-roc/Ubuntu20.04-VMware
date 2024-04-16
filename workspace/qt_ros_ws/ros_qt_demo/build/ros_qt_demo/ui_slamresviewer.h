/********************************************************************************
** Form generated from reading UI file 'slamresviewer.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLAMRESVIEWER_H
#define UI_SLAMRESVIEWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SlamResViewer
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QLabel *label;

    void setupUi(QWidget *SlamResViewer)
    {
        if (SlamResViewer->objectName().isEmpty())
            SlamResViewer->setObjectName(QString::fromUtf8("SlamResViewer"));
        SlamResViewer->resize(913, 693);
        gridLayout = new QGridLayout(SlamResViewer);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget = new QWidget(SlamResViewer);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(SlamResViewer);

        QMetaObject::connectSlotsByName(SlamResViewer);
    } // setupUi

    void retranslateUi(QWidget *SlamResViewer)
    {
        SlamResViewer->setWindowTitle(QApplication::translate("SlamResViewer", "Form", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SlamResViewer: public Ui_SlamResViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SLAMRESVIEWER_H
