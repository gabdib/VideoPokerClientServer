/********************************************************************************
** Form generated from reading UI file 'pokerform.ui'
**
** Created: Thu 24. Mar 09:53:06 2016
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
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PokerForm
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QLabel *playerLabel;
    QLabel *winningMessage;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *moneyLabel;
    QLCDNumber *moneyAmount;
    QHBoxLayout *horizontalLayout_4;
    QLabel *betLabel;
    QSpinBox *betValue;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *startButton;
    QPushButton *spinButton;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *card1image;
    QPushButton *card2image;
    QPushButton *card3image;
    QPushButton *card4image;
    QPushButton *card5image;
    QHBoxLayout *horizontalLayout;
    QPushButton *holdCard1;
    QPushButton *holdCard2;
    QPushButton *holdCard3;
    QPushButton *holdCard4;
    QPushButton *holdCard5;

    void setupUi(QWidget *PokerForm)
    {
        if (PokerForm->objectName().isEmpty())
            PokerForm->setObjectName(QString::fromUtf8("PokerForm"));
        PokerForm->resize(1302, 609);
        PokerForm->setAutoFillBackground(false);
        PokerForm->setStyleSheet(QString::fromUtf8("background-image: url(:/images/cards/green.png);"));
        verticalLayout_3 = new QVBoxLayout(PokerForm);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        playerLabel = new QLabel(PokerForm);
        playerLabel->setObjectName(QString::fromUtf8("playerLabel"));
        QFont font;
        font.setPointSize(30);
        font.setBold(true);
        font.setWeight(75);
        playerLabel->setFont(font);
        playerLabel->setStyleSheet(QString::fromUtf8("background: rgba(255, 255, 255, 0);"));
        playerLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(playerLabel);

        winningMessage = new QLabel(PokerForm);
        winningMessage->setObjectName(QString::fromUtf8("winningMessage"));
        winningMessage->setEnabled(false);
        QFont font1;
        font1.setPointSize(16);
        winningMessage->setFont(font1);
        winningMessage->setStyleSheet(QString::fromUtf8("background:rgba(255, 255, 255, 0)"));
        winningMessage->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(winningMessage);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        moneyLabel = new QLabel(PokerForm);
        moneyLabel->setObjectName(QString::fromUtf8("moneyLabel"));
        QFont font2;
        font2.setPointSize(30);
        moneyLabel->setFont(font2);
        moneyLabel->setAutoFillBackground(false);
        moneyLabel->setStyleSheet(QString::fromUtf8("background: url(:/images/cards/money.png) no-repeat center;"));
        moneyLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(moneyLabel);

        moneyAmount = new QLCDNumber(PokerForm);
        moneyAmount->setObjectName(QString::fromUtf8("moneyAmount"));
        moneyAmount->setStyleSheet(QString::fromUtf8("background: rgba(255, 255, 255, 0);\n"
""));

        horizontalLayout_3->addWidget(moneyAmount);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        betLabel = new QLabel(PokerForm);
        betLabel->setObjectName(QString::fromUtf8("betLabel"));
        QFont font3;
        font3.setPointSize(24);
        betLabel->setFont(font3);
        betLabel->setStyleSheet(QString::fromUtf8("background:rgba(255, 255, 255, 0)"));
        betLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(betLabel);

        betValue = new QSpinBox(PokerForm);
        betValue->setObjectName(QString::fromUtf8("betValue"));
        QFont font4;
        font4.setPointSize(18);
        betValue->setFont(font4);
        betValue->setAlignment(Qt::AlignCenter);
        betValue->setMinimum(1);

        horizontalLayout_4->addWidget(betValue);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        startButton = new QPushButton(PokerForm);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setFont(font1);
        startButton->setStyleSheet(QString::fromUtf8("background: rgb(227, 227, 227);"));

        horizontalLayout_5->addWidget(startButton);

        spinButton = new QPushButton(PokerForm);
        spinButton->setObjectName(QString::fromUtf8("spinButton"));
        spinButton->setEnabled(false);
        spinButton->setFont(font1);
        spinButton->setStyleSheet(QString::fromUtf8("background: rgb(227, 227, 227);"));

        horizontalLayout_5->addWidget(spinButton);


        verticalLayout->addLayout(horizontalLayout_5);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        card1image = new QPushButton(PokerForm);
        card1image->setObjectName(QString::fromUtf8("card1image"));
        card1image->setMinimumSize(QSize(250, 363));
        card1image->setStyleSheet(QString::fromUtf8("background: rgba(255, 255, 255, 0);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/cards/Box_Back.png"), QSize(), QIcon::Normal, QIcon::Off);
        card1image->setIcon(icon);
        card1image->setIconSize(QSize(100, 200));
        card1image->setAutoRepeat(false);

        horizontalLayout_6->addWidget(card1image);

        card2image = new QPushButton(PokerForm);
        card2image->setObjectName(QString::fromUtf8("card2image"));
        card2image->setMinimumSize(QSize(250, 363));
        card2image->setAutoFillBackground(false);
        card2image->setStyleSheet(QString::fromUtf8("background: rgba(255, 255, 255, 0);"));
        card2image->setIcon(icon);
        card2image->setIconSize(QSize(100, 200));

        horizontalLayout_6->addWidget(card2image);

        card3image = new QPushButton(PokerForm);
        card3image->setObjectName(QString::fromUtf8("card3image"));
        card3image->setMinimumSize(QSize(250, 363));
        card3image->setStyleSheet(QString::fromUtf8("background: rgba(255, 255, 255, 0);"));
        card3image->setIcon(icon);
        card3image->setIconSize(QSize(100, 200));

        horizontalLayout_6->addWidget(card3image);

        card4image = new QPushButton(PokerForm);
        card4image->setObjectName(QString::fromUtf8("card4image"));
        card4image->setMinimumSize(QSize(250, 363));
        card4image->setStyleSheet(QString::fromUtf8("background: rgba(255, 255, 255, 0);"));
        card4image->setIcon(icon);
        card4image->setIconSize(QSize(100, 200));

        horizontalLayout_6->addWidget(card4image);

        card5image = new QPushButton(PokerForm);
        card5image->setObjectName(QString::fromUtf8("card5image"));
        card5image->setMinimumSize(QSize(250, 363));
        card5image->setStyleSheet(QString::fromUtf8("background: rgba(255, 255, 255, 0);\n"
""));
        card5image->setIcon(icon);
        card5image->setIconSize(QSize(100, 200));

        horizontalLayout_6->addWidget(card5image);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        holdCard1 = new QPushButton(PokerForm);
        holdCard1->setObjectName(QString::fromUtf8("holdCard1"));
        holdCard1->setStyleSheet(QString::fromUtf8("background: rgb(227, 227, 227);"));

        horizontalLayout->addWidget(holdCard1);

        holdCard2 = new QPushButton(PokerForm);
        holdCard2->setObjectName(QString::fromUtf8("holdCard2"));
        holdCard2->setStyleSheet(QString::fromUtf8("background: rgb(227, 227, 227);"));

        horizontalLayout->addWidget(holdCard2);

        holdCard3 = new QPushButton(PokerForm);
        holdCard3->setObjectName(QString::fromUtf8("holdCard3"));
        holdCard3->setStyleSheet(QString::fromUtf8("background: rgb(227, 227, 227);"));

        horizontalLayout->addWidget(holdCard3);

        holdCard4 = new QPushButton(PokerForm);
        holdCard4->setObjectName(QString::fromUtf8("holdCard4"));
        holdCard4->setStyleSheet(QString::fromUtf8("background: rgb(227, 227, 227);"));

        horizontalLayout->addWidget(holdCard4);

        holdCard5 = new QPushButton(PokerForm);
        holdCard5->setObjectName(QString::fromUtf8("holdCard5"));
        holdCard5->setAutoFillBackground(false);
        holdCard5->setStyleSheet(QString::fromUtf8("background: rgb(227, 227, 227);"));

        horizontalLayout->addWidget(holdCard5);


        verticalLayout_3->addLayout(horizontalLayout);


        retranslateUi(PokerForm);

        QMetaObject::connectSlotsByName(PokerForm);
    } // setupUi

    void retranslateUi(QWidget *PokerForm)
    {
        PokerForm->setWindowTitle(QApplication::translate("PokerForm", "Form", 0, QApplication::UnicodeUTF8));
        playerLabel->setText(QApplication::translate("PokerForm", "Player", 0, QApplication::UnicodeUTF8));
        winningMessage->setText(QString());
        moneyLabel->setText(QApplication::translate("PokerForm", "Money", 0, QApplication::UnicodeUTF8));
        betLabel->setText(QApplication::translate("PokerForm", "Bet", 0, QApplication::UnicodeUTF8));
        startButton->setText(QApplication::translate("PokerForm", "start", 0, QApplication::UnicodeUTF8));
        spinButton->setText(QApplication::translate("PokerForm", "spin", 0, QApplication::UnicodeUTF8));
        card1image->setText(QString());
        card2image->setText(QString());
        card3image->setText(QString());
        card4image->setText(QString());
        card5image->setText(QString());
        holdCard1->setText(QApplication::translate("PokerForm", "hold", 0, QApplication::UnicodeUTF8));
        holdCard2->setText(QApplication::translate("PokerForm", "hold", 0, QApplication::UnicodeUTF8));
        holdCard3->setText(QApplication::translate("PokerForm", "hold", 0, QApplication::UnicodeUTF8));
        holdCard4->setText(QApplication::translate("PokerForm", "hold", 0, QApplication::UnicodeUTF8));
        holdCard5->setText(QApplication::translate("PokerForm", "hold", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PokerForm: public Ui_PokerForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POKERFORM_H
