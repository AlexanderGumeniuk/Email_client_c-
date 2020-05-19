/********************************************************************************
** Form generated from reading UI file 'mainpage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINPAGE_H
#define UI_MAINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainpage
{
public:
    QWidget *centralwidget;
    QListView *list_mails;
    QPushButton *Load;
    QPushButton *write_mail;
    QTextBrowser *text_mail;
    QPushButton *Back;
    QLabel *sender_name;
    QLabel *subject;
    QTextBrowser *Sender;
    QLabel *date;
    QPushButton *send_button;
    QLineEdit *To;
    QLineEdit *sub;
    QLineEdit *text;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *mainpage)
    {
        if (mainpage->objectName().isEmpty())
            mainpage->setObjectName(QStringLiteral("mainpage"));
        mainpage->resize(814, 619);
        QFont font;
        font.setPointSize(11);
        mainpage->setFont(font);
        centralwidget = new QWidget(mainpage);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        list_mails = new QListView(centralwidget);
        list_mails->setObjectName(QStringLiteral("list_mails"));
        list_mails->setGeometry(QRect(20, 20, 451, 391));
        QFont font1;
        font1.setPointSize(20);
        list_mails->setFont(font1);
        Load = new QPushButton(centralwidget);
        Load->setObjectName(QStringLiteral("Load"));
        Load->setGeometry(QRect(620, 40, 111, 31));
        write_mail = new QPushButton(centralwidget);
        write_mail->setObjectName(QStringLiteral("write_mail"));
        write_mail->setGeometry(QRect(680, 470, 91, 81));
        text_mail = new QTextBrowser(centralwidget);
        text_mail->setObjectName(QStringLiteral("text_mail"));
        text_mail->setGeometry(QRect(50, 140, 471, 261));
        Back = new QPushButton(centralwidget);
        Back->setObjectName(QStringLiteral("Back"));
        Back->setGeometry(QRect(20, 20, 89, 25));
        sender_name = new QLabel(centralwidget);
        sender_name->setObjectName(QStringLiteral("sender_name"));
        sender_name->setGeometry(QRect(60, 70, 151, 17));
        subject = new QLabel(centralwidget);
        subject->setObjectName(QStringLiteral("subject"));
        subject->setGeometry(QRect(60, 120, 411, 17));
        Sender = new QTextBrowser(centralwidget);
        Sender->setObjectName(QStringLiteral("Sender"));
        Sender->setGeometry(QRect(50, 90, 471, 31));
        date = new QLabel(centralwidget);
        date->setObjectName(QStringLiteral("date"));
        date->setGeometry(QRect(306, 410, 211, 20));
        send_button = new QPushButton(centralwidget);
        send_button->setObjectName(QStringLiteral("send_button"));
        send_button->setGeometry(QRect(460, 470, 111, 51));
        To = new QLineEdit(centralwidget);
        To->setObjectName(QStringLiteral("To"));
        To->setGeometry(QRect(50, 50, 471, 25));
        sub = new QLineEdit(centralwidget);
        sub->setObjectName(QStringLiteral("sub"));
        sub->setGeometry(QRect(50, 90, 471, 31));
        text = new QLineEdit(centralwidget);
        text->setObjectName(QStringLiteral("text"));
        text->setGeometry(QRect(52, 140, 471, 261));
        mainpage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(mainpage);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 814, 22));
        mainpage->setMenuBar(menubar);
        statusbar = new QStatusBar(mainpage);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        mainpage->setStatusBar(statusbar);

        retranslateUi(mainpage);

        QMetaObject::connectSlotsByName(mainpage);
    } // setupUi

    void retranslateUi(QMainWindow *mainpage)
    {
        mainpage->setWindowTitle(QApplication::translate("mainpage", "MainWindow", Q_NULLPTR));
        Load->setText(QApplication::translate("mainpage", "GET Mail", Q_NULLPTR));
        write_mail->setText(QApplication::translate("mainpage", "Write Mail", Q_NULLPTR));
        Back->setText(QApplication::translate("mainpage", "Back", Q_NULLPTR));
        sender_name->setText(QString());
        subject->setText(QString());
        date->setText(QApplication::translate("mainpage", "TextLabel", Q_NULLPTR));
        send_button->setText(QApplication::translate("mainpage", "Send", Q_NULLPTR));
        To->setText(QApplication::translate("mainpage", "to:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class mainpage: public Ui_mainpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINPAGE_H
