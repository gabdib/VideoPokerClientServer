/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Thu 31. Mar 10:51:25 2016
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
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QTableWidget>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *videoPokerLabel;
    QFrame *frame_2;
    QTableWidget *playersTable;
    QLabel *connectedPlayerLabel;
    QMenuBar *menuBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1352, 810);
        MainWindow->setMinimumSize(QSize(1350, 0));
        MainWindow->setStyleSheet(QString::fromUtf8("border-image: url(:/images/cards/poker-table-background.png);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        videoPokerLabel = new QLabel(centralWidget);
        videoPokerLabel->setObjectName(QString::fromUtf8("videoPokerLabel"));
        videoPokerLabel->setGeometry(QRect(380, 20, 551, 341));
        QFont font;
        font.setFamily(QString::fromUtf8("Monotype Corsiva"));
        font.setPointSize(20);
        font.setBold(false);
        font.setItalic(true);
        font.setWeight(50);
        videoPokerLabel->setFont(font);
        videoPokerLabel->setStyleSheet(QString::fromUtf8("font: italic 20pt \"Monotype Corsiva\";\n"
"\n"
"border-image: url(:/images/cards/frame_gold_title.png);\n"
""));
        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(380, 360, 551, 361));
        frame_2->setStyleSheet(QString::fromUtf8("border-image: url(:/images/cards/frame_gold.png);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        playersTable = new QTableWidget(frame_2);
        if (playersTable->columnCount() < 3)
            playersTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        playersTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        playersTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        playersTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        playersTable->setObjectName(QString::fromUtf8("playersTable"));
        playersTable->setGeometry(QRect(60, 90, 431, 211));
        playersTable->setMinimumSize(QSize(301, 0));
        playersTable->setStyleSheet(QString::fromUtf8("\n"
"border-image: url(:/images/cards/table_texture.png);\n"
"\n"
"font: italic 14pt \"Monotype Corsiva\";\n"
""));
        playersTable->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        playersTable->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        playersTable->setProperty("showDropIndicator", QVariant(false));
        playersTable->setShowGrid(true);
        playersTable->horizontalHeader()->setVisible(true);
        playersTable->horizontalHeader()->setCascadingSectionResizes(false);
        playersTable->horizontalHeader()->setDefaultSectionSize(145);
        playersTable->horizontalHeader()->setMinimumSectionSize(37);
        connectedPlayerLabel = new QLabel(frame_2);
        connectedPlayerLabel->setObjectName(QString::fromUtf8("connectedPlayerLabel"));
        connectedPlayerLabel->setGeometry(QRect(180, 40, 204, 41));
        connectedPlayerLabel->setFont(font);
        connectedPlayerLabel->setStyleSheet(QString::fromUtf8("border-image: rgba(255, 255, 255, 0);\n"
"font: italic 20pt \"Monotype Corsiva\";"));
        connectedPlayerLabel->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1352, 26));
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
        videoPokerLabel->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Monotype Corsiva'; font-size:20pt; font-weight:400; font-style:italic;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:48pt; color:#ffffff;\">Server Poker</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = playersTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Id", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = playersTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Player", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = playersTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Money", 0, QApplication::UnicodeUTF8));
        connectedPlayerLabel->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Monotype Corsiva'; font-size:20pt; font-weight:400; font-style:italic;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ffffff;\">connected players</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
