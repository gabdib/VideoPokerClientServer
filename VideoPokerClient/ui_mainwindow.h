/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Fri 25. Mar 17:52:48 2016
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QFrame *frame;
    QLabel *label;
    QLineEdit *playerName;
    QPushButton *playMatchButton;
    QLabel *videoPokerLabel;
    QMenuBar *menuBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1000, 794);
        MainWindow->setMinimumSize(QSize(1000, 794));
        MainWindow->setStyleSheet(QString::fromUtf8("border-image: url(:/images/cards/poker-table-background.png);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(290, 410, 421, 311));
        frame->setStyleSheet(QString::fromUtf8("border-image: url(:/images/cards/frame_gold.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 50, 245, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Monotype Corsiva"));
        font.setPointSize(20);
        font.setBold(false);
        font.setItalic(true);
        font.setWeight(50);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("border-image: rgba(255, 255, 255, 0);\n"
"font: italic 20pt \"Monotype Corsiva\";"));
        label->setAlignment(Qt::AlignCenter);
        playerName = new QLineEdit(frame);
        playerName->setObjectName(QString::fromUtf8("playerName"));
        playerName->setGeometry(QRect(130, 110, 151, 31));
        playerName->setStyleSheet(QString::fromUtf8("border-image:rgba(255, 255, 255, 0)"));
        playMatchButton = new QPushButton(frame);
        playMatchButton->setObjectName(QString::fromUtf8("playMatchButton"));
        playMatchButton->setGeometry(QRect(140, 150, 141, 121));
        playMatchButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/cards/poker_chips.png);\n"
"\n"
"\n"
"font: 75 italic 20pt \"Monotype Corsiva\" ;\n"
"color: white;\n"
""));
        videoPokerLabel = new QLabel(centralWidget);
        videoPokerLabel->setObjectName(QString::fromUtf8("videoPokerLabel"));
        videoPokerLabel->setGeometry(QRect(240, 40, 531, 341));
        videoPokerLabel->setFont(font);
        videoPokerLabel->setStyleSheet(QString::fromUtf8("font: italic 20pt \"Monotype Corsiva\";\n"
"\n"
"border-image: url(:/images/cards/frame_gold_title.png);\n"
""));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1000, 26));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Monotype Corsiva'; font-size:20pt; font-weight:400; font-style:italic;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ffffff;\">insert your name</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        playMatchButton->setText(QApplication::translate("MainWindow", "Play", 0, QApplication::UnicodeUTF8));
        videoPokerLabel->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Monotype Corsiva'; font-size:20pt; font-weight:400; font-style:italic;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:48pt; color:#ffffff;\">Video Poker</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
