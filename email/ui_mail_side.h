/********************************************************************************
** Form generated from reading UI file 'mail_side.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIL_SIDE_H
#define UI_MAIL_SIDE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Mail_side
{
public:
    QWidget *centralwidget;
    QLabel *text_mail;
    QPushButton *pushButton;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Mail_side)
    {
        if (Mail_side->objectName().isEmpty())
            Mail_side->setObjectName(QStringLiteral("Mail_side"));
        Mail_side->resize(800, 600);
        centralwidget = new QWidget(Mail_side);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        text_mail = new QLabel(centralwidget);
        text_mail->setObjectName(QStringLiteral("text_mail"));
        text_mail->setGeometry(QRect(70, 120, 431, 361));
        text_mail->setFrameShape(QFrame::Panel);
        text_mail->setLineWidth(3);
        text_mail->setMidLineWidth(2);
        text_mail->setTextFormat(Qt::PlainText);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 0, 89, 25));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 70, 421, 31));
        label->setFrameShape(QFrame::Panel);
        Mail_side->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Mail_side);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        Mail_side->setMenuBar(menubar);
        statusbar = new QStatusBar(Mail_side);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Mail_side->setStatusBar(statusbar);

        retranslateUi(Mail_side);

        QMetaObject::connectSlotsByName(Mail_side);
    } // setupUi

    void retranslateUi(QMainWindow *Mail_side)
    {
        Mail_side->setWindowTitle(QApplication::translate("Mail_side", "MainWindow", Q_NULLPTR));
        text_mail->setText(QApplication::translate("Mail_side", "TextLabel", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Mail_side", "Back", Q_NULLPTR));
        label->setText(QApplication::translate("Mail_side", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Mail_side: public Ui_Mail_side {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIL_SIDE_H
