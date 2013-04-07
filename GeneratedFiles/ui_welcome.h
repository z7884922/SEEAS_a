/********************************************************************************
** Form generated from reading UI file 'welcome.ui'
**
** Created: Sun Apr 7 10:06:27 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOME_H
#define UI_WELCOME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Welcome
{
public:
    QTextBrowser *textBrowser;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *Welcome)
    {
        if (Welcome->objectName().isEmpty())
            Welcome->setObjectName(QString::fromUtf8("Welcome"));
        Welcome->resize(549, 423);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Welcome->sizePolicy().hasHeightForWidth());
        Welcome->setSizePolicy(sizePolicy);
        Welcome->setMouseTracking(false);
        textBrowser = new QTextBrowser(Welcome);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(400, 300, 91, 81));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy1);
        label = new QLabel(Welcome);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(9, 9, 531, 244));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setAcceptDrops(false);
        label->setAutoFillBackground(false);
        label->setWordWrap(true);
        widget = new QWidget(Welcome);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 360, 239, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);


        retranslateUi(Welcome);

        QMetaObject::connectSlotsByName(Welcome);
    } // setupUi

    void retranslateUi(QWidget *Welcome)
    {
        Welcome->setWindowTitle(QApplication::translate("Welcome", "Welcome", 0, QApplication::UnicodeUTF8));
        textBrowser->setHtml(QApplication::translate("Welcome", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/Resources/29.png\" /></p></body></html>", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Welcome", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; color:#ff0000;\">\346\254\242\350\277\216\344\275\277\347\224\250\345\244\247\350\275\257\350\257\276\347\250\213\347\256\241\347\220\206\347\263\273\347\273\237\357\274\201</span></p><p>\345\220\204\346\250\241\345\235\227\347\232\204\344\273\213\347\273\215\357\274\232 </p><p>\345\210\206\347\273\204\347\256\241\347\220\206\357\274\232\347\256\241\347\220\206\345\210\206\347\273\204\346\203\205\345\206\265\357\274\214\345\220\204\344\270\252\346\210\220\345\221\230\347\232\204\350\247\222\350\211\262\345\210\206\351\205\215\347\255\211\343\200\202</p><p>\346\226\207\346\241\243\347\256\241\347\220\206\357\274\232\347\256\241\347\220\206\345\220\204\344\270\252\345\260\217\347\273\204\344\270\212\344\274\240\347\232\204\346\226\207\346\241\243\357\274\214\350\207\252\345\212\250\350\277\233\350\241\214\345\275\222\347\261\273\357\274\214\350\256\276\347\275\256\346\226\207\346\241\243\346\217\220\344\272\244\346\234\237\351\231\220\357\274\214"
                        "\346\237\245\347\234\213\345\220\204 \345\260\217\347\273\204\346\230\257\345\220\246\346\214\211\346\227\266\346\217\220\344\272\244\346\226\207\346\241\243\343\200\202 </p><p>\346\214\207\346\240\207\347\256\241\347\220\206\357\274\232\347\256\241\347\220\206\346\200\273\345\210\206\344\270\255\347\232\204\345\220\204\351\241\271\346\235\203\351\207\215\357\274\214\344\273\245\345\217\212\345\260\217\347\273\204\350\257\204\345\210\206\344\270\255\345\220\204\346\214\207\346\240\207\347\232\204\345\220\215\347\247\260\344\273\245\345\217\212\346\235\203\351\207\215\343\200\202 </p><p>\350\257\204\345\210\206\347\256\241\347\220\206\357\274\232\350\277\233\350\241\214\345\260\217\347\273\204\345\210\206\347\232\204\350\257\204\345\210\206\357\274\214\346\235\203\351\207\215\345\217\257\344\273\245\345\234\250\346\214\207\346\240\207\347\256\241\347\220\206\344\270\255\350\277\233\350\241\214\346\233\264\346\224\271\343\200\202 </p><p>\344\272\222\350\257\204\347\256\241\347\220\206\357\274\232\345\220\204\345"
                        "\260\217\347\273\204\346\210\220\345\221\230\345\234\250\350\277\231\344\270\252\346\250\241\345\235\227\344\270\255\350\277\233\350\241\214\344\272\222\350\257\204\357\274\214\344\272\222\350\257\204\345\210\206\347\232\204\345\220\204\351\241\271\346\214\207\346\240\207\347\232\204\346\235\203\351\207\215\344\271\237\345\234\250\346\255\244\346\250\241\345\235\227\344\270\255\346\233\264\346\224\271\343\200\202</p><p>\350\264\241\347\214\256\347\256\241\347\220\206\357\274\232\347\256\241\347\220\206\345\220\204\344\270\252\345\260\217\347\273\204\347\232\204\350\264\241\347\214\256\345\210\206\346\203\205\345\206\265\343\200\202 </p><p>\346\210\220\347\273\251\347\256\241\347\220\206\357\274\232\350\277\233\350\241\214\346\210\220\347\273\251\345\215\225\347\232\204\350\276\223\345\207\272\343\200\201\346\240\270\345\257\271\343\200\201\350\256\241\347\256\227\346\200\273\345\210\206\347\255\211\343\200\202</p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Welcome", "\345\205\263\344\272\216\347\263\273\347\273\237", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Welcome", "\345\205\263\344\272\216\346\210\221\344\273\254", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("Welcome", "\345\205\263\344\272\216QT", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Welcome: public Ui_Welcome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOME_H
