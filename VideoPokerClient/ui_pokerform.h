/********************************************************************************
** Form generated from reading UI file 'pokerform.ui'
**
** Created: Fri 25. Mar 17:52:48 2016
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POKERFORM_H
#define UI_POKERFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PokerForm
{
public:
    QFrame *frame;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *card1image;
    QPushButton *card2image;
    QPushButton *card3image;
    QPushButton *card4image;
    QPushButton *card5image;
    QFrame *frame_2;
    QFrame *frame_3;
    QLabel *betLabel;
    QSpinBox *betValue;
    QPushButton *startButton;
    QPushButton *spinButton;
    QFrame *frame_5;
    QLabel *moneyLabel;
    QLCDNumber *moneyAmount;
    QLabel *playerLabel;
    QLabel *winningMessage;

    void setupUi(QWidget *PokerForm)
    {
        if (PokerForm->objectName().isEmpty())
            PokerForm->setObjectName(QString::fromUtf8("PokerForm"));
        PokerForm->resize(1412, 766);
        PokerForm->setMinimumSize(QSize(1412, 0));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        PokerForm->setFont(font);
        PokerForm->setAutoFillBackground(false);
        PokerForm->setStyleSheet(QString::fromUtf8("border-image: url(:/images/cards/poker-table-background.png);"));
        frame = new QFrame(PokerForm);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(70, 250, 1331, 511));
        frame->setStyleSheet(QString::fromUtf8("border-image: rgba(255, 255, 255, 0);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(frame);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(21, 20, 1289, 481));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        card1image = new QPushButton(layoutWidget);
        card1image->setObjectName(QString::fromUtf8("card1image"));
        card1image->setMinimumSize(QSize(250, 363));
        card1image->setStyleSheet(QString::fromUtf8("background: rgba(255, 255, 255, 0);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/cards/Box_Back.png"), QSize(), QIcon::Normal, QIcon::Off);
        card1image->setIcon(icon);
        card1image->setIconSize(QSize(100, 200));
        card1image->setAutoRepeat(false);

        horizontalLayout_6->addWidget(card1image);

        card2image = new QPushButton(layoutWidget);
        card2image->setObjectName(QString::fromUtf8("card2image"));
        card2image->setMinimumSize(QSize(250, 363));
        card2image->setAutoFillBackground(false);
        card2image->setStyleSheet(QString::fromUtf8("background: rgba(255, 255, 255, 0);"));
        card2image->setIcon(icon);
        card2image->setIconSize(QSize(100, 200));

        horizontalLayout_6->addWidget(card2image);

        card3image = new QPushButton(layoutWidget);
        card3image->setObjectName(QString::fromUtf8("card3image"));
        card3image->setMinimumSize(QSize(250, 363));
        card3image->setStyleSheet(QString::fromUtf8("background: rgba(255, 255, 255, 0);"));
        card3image->setIcon(icon);
        card3image->setIconSize(QSize(100, 200));

        horizontalLayout_6->addWidget(card3image);

        card4image = new QPushButton(layoutWidget);
        card4image->setObjectName(QString::fromUtf8("card4image"));
        card4image->setMinimumSize(QSize(250, 363));
        card4image->setStyleSheet(QString::fromUtf8("background: rgba(255, 255, 255, 0);"));
        card4image->setIcon(icon);
        card4image->setIconSize(QSize(100, 200));

        horizontalLayout_6->addWidget(card4image);

        card5image = new QPushButton(layoutWidget);
        card5image->setObjectName(QString::fromUtf8("card5image"));
        card5image->setMinimumSize(QSize(250, 363));
        card5image->setStyleSheet(QString::fromUtf8("background: rgba(255, 255, 255, 0);\n"
""));
        card5image->setIcon(icon);
        card5image->setIconSize(QSize(100, 200));

        horizontalLayout_6->addWidget(card5image);


        verticalLayout_3->addLayout(horizontalLayout_6);

        frame_2 = new QFrame(PokerForm);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(60, 30, 1341, 231));
        frame_2->setStyleSheet(QString::fromUtf8("border-image: rgba(255, 255, 255, 0);\n"
""));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(930, 40, 191, 151));
        frame_3->setStyleSheet(QString::fromUtf8("border-image: url(:/images/cards/gold_frame.png);"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        betLabel = new QLabel(frame_3);
        betLabel->setObjectName(QString::fromUtf8("betLabel"));
        betLabel->setGeometry(QRect(40, 0, 101, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Monotype Corsiva"));
        font1.setPointSize(38);
        font1.setBold(false);
        font1.setItalic(true);
        font1.setWeight(50);
        betLabel->setFont(font1);
        betLabel->setStyleSheet(QString::fromUtf8("border-image: rgba(255, 255, 255, 0);\n"
"font: italic 38pt \"Monotype Corsiva\";"));
        betLabel->setAlignment(Qt::AlignCenter);
        betValue = new QSpinBox(frame_3);
        betValue->setObjectName(QString::fromUtf8("betValue"));
        betValue->setGeometry(QRect(50, 70, 101, 51));
        QFont font2;
        font2.setPointSize(18);
        betValue->setFont(font2);
        betValue->setStyleSheet(QString::fromUtf8("border-image: rgba(255, 255, 255, 0);\n"
""));
        betValue->setAlignment(Qt::AlignCenter);
        betValue->setMinimum(1);
        startButton = new QPushButton(frame_2);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(1150, 50, 131, 61));
        QFont font3;
        font3.setPointSize(16);
        startButton->setFont(font3);
        startButton->setStyleSheet(QString::fromUtf8("border-image: rgba(255, 255, 255, 0);\n"
"border-image: url(:/images/cards/play_gold.png);"));
        spinButton = new QPushButton(frame_2);
        spinButton->setObjectName(QString::fromUtf8("spinButton"));
        spinButton->setEnabled(false);
        spinButton->setGeometry(QRect(1150, 120, 131, 71));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Arial"));
        font4.setPointSize(14);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setWeight(9);
        spinButton->setFont(font4);
        spinButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/cards/grey-button.png);\n"
"\n"
"font: 75 14pt \"Arial\";"));
        frame_5 = new QFrame(frame_2);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(670, 40, 231, 151));
        frame_5->setStyleSheet(QString::fromUtf8("border-image: url(:/images/cards/gold_frame.png);"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        moneyLabel = new QLabel(frame_5);
        moneyLabel->setObjectName(QString::fromUtf8("moneyLabel"));
        moneyLabel->setGeometry(QRect(30, 0, 171, 81));
        moneyLabel->setFont(font1);
        moneyLabel->setAutoFillBackground(false);
        moneyLabel->setStyleSheet(QString::fromUtf8("border-image: rgba(255, 255, 255, 0);\n"
"font: italic 38pt \"Monotype Corsiva\";"));
        moneyLabel->setAlignment(Qt::AlignCenter);
        moneyAmount = new QLCDNumber(frame_5);
        moneyAmount->setObjectName(QString::fromUtf8("moneyAmount"));
        moneyAmount->setGeometry(QRect(30, 70, 131, 71));
        moneyAmount->setContextMenuPolicy(Qt::DefaultContextMenu);
        moneyAmount->setLayoutDirection(Qt::LeftToRight);
        moneyAmount->setStyleSheet(QString::fromUtf8("border-image: rgba(255, 255, 255, 0);\n"
""));
        moneyAmount->setFrameShape(QFrame::NoFrame);
        moneyAmount->setFrameShadow(QFrame::Raised);
        moneyAmount->setLineWidth(1);
        moneyAmount->setSmallDecimalPoint(false);
        moneyAmount->setNumDigits(4);
        moneyAmount->setDigitCount(4);
        moneyAmount->setSegmentStyle(QLCDNumber::Filled);
        moneyAmount->setProperty("intValue", QVariant(0));
        playerLabel = new QLabel(frame_2);
        playerLabel->setObjectName(QString::fromUtf8("playerLabel"));
        playerLabel->setGeometry(QRect(28, 40, 621, 91));
        playerLabel->setFont(font1);
        playerLabel->setStyleSheet(QString::fromUtf8("background: rgba(255, 255, 255, 0);\n"
"font: italic 38pt \"Monotype Corsiva\";"));
        playerLabel->setAlignment(Qt::AlignCenter);
        winningMessage = new QLabel(frame_2);
        winningMessage->setObjectName(QString::fromUtf8("winningMessage"));
        winningMessage->setEnabled(false);
        winningMessage->setGeometry(QRect(90, 140, 471, 81));
        winningMessage->setFont(font1);
        winningMessage->setStyleSheet(QString::fromUtf8("background:rgba(255, 255, 255, 0);\n"
"font: italic 38pt \"Monotype Corsiva\";"));
        winningMessage->setAlignment(Qt::AlignCenter);

        retranslateUi(PokerForm);

        QMetaObject::connectSlotsByName(PokerForm);
    } // setupUi

    void retranslateUi(QWidget *PokerForm)
    {
        PokerForm->setWindowTitle(QApplication::translate("PokerForm", "Form", 0, QApplication::UnicodeUTF8));
        card1image->setText(QString());
        card2image->setText(QString());
        card3image->setText(QString());
        card4image->setText(QString());
        card5image->setText(QString());
        betLabel->setText(QApplication::translate("PokerForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Monotype Corsiva'; font-size:38pt; font-weight:400; font-style:italic;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ffffff;\">Bet</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        startButton->setText(QString());
        spinButton->setText(QApplication::translate("PokerForm", "SPIN", 0, QApplication::UnicodeUTF8));
        moneyLabel->setText(QApplication::translate("PokerForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Monotype Corsiva'; font-size:38pt; font-weight:400; font-style:italic;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ffffff;\">Money</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        playerLabel->setText(QApplication::translate("PokerForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Monotype Corsiva'; font-size:38pt; font-weight:400; font-style:italic;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:30pt; font-weight:600; font-style:normal; color:#ffffff;\">Player</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        winningMessage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PokerForm: public Ui_PokerForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POKERFORM_H
