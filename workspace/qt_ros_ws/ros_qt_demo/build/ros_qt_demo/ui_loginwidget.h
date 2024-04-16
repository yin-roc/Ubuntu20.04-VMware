/********************************************************************************
** Form generated from reading UI file 'loginwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWIDGET_H
#define UI_LOGINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWidget
{
public:
    QLabel *label_video;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *user_lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *password_lineEdit;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *remeber_pw_checkBox;
    QCheckBox *auto_login_checkBox;
    QPushButton *login_Button;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *carset_Button;
    QPushButton *gpsset_Button;

    void setupUi(QWidget *LoginWidget)
    {
        if (LoginWidget->objectName().isEmpty())
            LoginWidget->setObjectName(QString::fromUtf8("LoginWidget"));
        LoginWidget->resize(500, 400);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LoginWidget->sizePolicy().hasHeightForWidth());
        LoginWidget->setSizePolicy(sizePolicy);
        LoginWidget->setMinimumSize(QSize(500, 400));
        LoginWidget->setMaximumSize(QSize(500, 400));
        label_video = new QLabel(LoginWidget);
        label_video->setObjectName(QString::fromUtf8("label_video"));
        label_video->setGeometry(QRect(0, 0, 500, 201));
        widget = new QWidget(LoginWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 210, 481, 181));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        user_lineEdit = new QLineEdit(widget);
        user_lineEdit->setObjectName(QString::fromUtf8("user_lineEdit"));
        user_lineEdit->setFont(font);

        horizontalLayout->addWidget(user_lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        password_lineEdit = new QLineEdit(widget);
        password_lineEdit->setObjectName(QString::fromUtf8("password_lineEdit"));
        password_lineEdit->setFont(font);
        password_lineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(password_lineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        remeber_pw_checkBox = new QCheckBox(widget);
        remeber_pw_checkBox->setObjectName(QString::fromUtf8("remeber_pw_checkBox"));
        QFont font1;
        font1.setPointSize(11);
        remeber_pw_checkBox->setFont(font1);

        horizontalLayout_4->addWidget(remeber_pw_checkBox);

        auto_login_checkBox = new QCheckBox(widget);
        auto_login_checkBox->setObjectName(QString::fromUtf8("auto_login_checkBox"));

        horizontalLayout_4->addWidget(auto_login_checkBox);


        verticalLayout->addLayout(horizontalLayout_4);

        login_Button = new QPushButton(widget);
        login_Button->setObjectName(QString::fromUtf8("login_Button"));
        login_Button->setFont(font);

        verticalLayout->addWidget(login_Button);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        carset_Button = new QPushButton(widget);
        carset_Button->setObjectName(QString::fromUtf8("carset_Button"));
        carset_Button->setEnabled(false);
        carset_Button->setFont(font);

        horizontalLayout_3->addWidget(carset_Button);

        gpsset_Button = new QPushButton(widget);
        gpsset_Button->setObjectName(QString::fromUtf8("gpsset_Button"));
        gpsset_Button->setEnabled(false);
        gpsset_Button->setFont(font);

        horizontalLayout_3->addWidget(gpsset_Button);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(LoginWidget);

        QMetaObject::connectSlotsByName(LoginWidget);
    } // setupUi

    void retranslateUi(QWidget *LoginWidget)
    {
        LoginWidget->setWindowTitle(QApplication::translate("LoginWidget", "Form", nullptr));
        label_video->setText(QString());
        label->setText(QApplication::translate("LoginWidget", "\347\224\250\346\210\267\357\274\232", nullptr));
        label_2->setText(QApplication::translate("LoginWidget", "\345\257\206\347\240\201\357\274\232", nullptr));
        remeber_pw_checkBox->setText(QApplication::translate("LoginWidget", "\350\256\260\344\275\217\345\257\206\347\240\201", nullptr));
        auto_login_checkBox->setText(QApplication::translate("LoginWidget", "\350\207\252\345\212\250\347\231\273\345\275\225", nullptr));
        login_Button->setText(QApplication::translate("LoginWidget", "\347\231\273\345\275\225", nullptr));
        carset_Button->setText(QApplication::translate("LoginWidget", "\350\275\246\350\276\206\345\217\202\346\225\260\350\256\276\347\275\256", nullptr));
        gpsset_Button->setText(QApplication::translate("LoginWidget", "GPS\345\217\202\346\225\260\350\256\276\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWidget: public Ui_LoginWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWIDGET_H
