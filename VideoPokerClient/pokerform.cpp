#include "pokerform.h"
#include "ui_pokerform.h"
#include <QDebug>
#include <QIcon>
#include <QTcpSocket>
#include <QHostAddress>
#include <QByteArray>
#include <QMessageBox>
#include <QGraphicsEffect>
#include <QGraphicsOpacityEffect>


PokerForm::PokerForm(QWidget *parent, int id, QString name) :
    QDialog(parent),
    ui(new Ui::PokerForm)
{
    ui->setupUi(this);

    setAllCardsBack();

    _id = id;
    _name = name;

    ui->playerLabel->setText("Player " + name);

    money = 100;

    emit updateMoney(money);

    ui->moneyAmount->display(money);

    connect(ui->card1image,SIGNAL(clicked()), this, SLOT(onCard1Clicked()));
    connect(ui->card2image,SIGNAL(clicked()), this, SLOT(onCard2Clicked()));
    connect(ui->card3image,SIGNAL(clicked()), this, SLOT(onCard3Clicked()));
    connect(ui->card4image,SIGNAL(clicked()), this, SLOT(onCard4Clicked()));
    connect(ui->card5image,SIGNAL(clicked()), this, SLOT(onCard5Clicked()));
    connect(ui->startButton,SIGNAL(clicked()), this, SLOT(onStartClicked()));
    connect(ui->spinButton,SIGNAL(clicked()), this, SLOT(onSpinClicked()));

}

PokerForm::~PokerForm()
{
    delete ui;
}
void PokerForm::updateResult(Win win)
{
    int betValue = (int)ui->betValue->value();
    money += betValue*win.value;
    ui->moneyAmount->display(money);
    ui->winningMessage->setText(win.name);
    ui->winningMessage->setEnabled(true);
    emit updateMoney(money);
}

void PokerForm::Init(int id, QString name)
{
    _id = id;
    ui->playerLabel->setText("Player " + QString::number(_id));
    money = 100;
    ui->moneyAmount->display(money);

}

bool PokerForm::checkMoney()
{
    if(money - ui->betValue->value()<1)
    {
        return false;
    }
    else
    {
        money = money - ui->betValue->value();
        ui->moneyAmount->display(money);
        emit updateMoney(money);
        return true;
    }
}

void PokerForm::resetHoldCard()
{
    effect = new QGraphicsOpacityEffect(this);
    effect->setEnabled(false);
    ui->card1image->setGraphicsEffect(effect);
    ui->card2image->setGraphicsEffect(effect);
    ui->card3image->setGraphicsEffect(effect);
    ui->card4image->setGraphicsEffect(effect);
    ui->card5image->setGraphicsEffect(effect);

    hold_card1 = false;
    hold_card2 = false;
    hold_card3 = false;
    hold_card4 = false;
    hold_card5 = false;
}

void PokerForm::setAllCardsBack()
{

    effect_back = new QGraphicsOpacityEffect(this);
    effect_back->setEnabled(false);

    ui->card1image->autoFillBackground();
    ui->card1image->setFlat(true);
    ui->card1image->setIcon(QIcon(":/images/cards/Box_Back.png"));
    ui->card1image->setIconSize(QSize(250,363));
    ui->card1image->setGraphicsEffect(effect_back);

    ui->card2image->autoFillBackground();
    ui->card2image->setFlat(true);
    ui->card2image->setIcon(QIcon(":/images/cards/Box_Back.png"));
    ui->card2image->setIconSize(QSize(250,363));
    ui->card2image->setGraphicsEffect(effect_back);

    ui->card3image->autoFillBackground();
    ui->card3image->setFlat(true);
    ui->card3image->setIcon(QIcon(":/images/cards/Box_Back.png"));
    ui->card3image->setIconSize(QSize(250,363));
    ui->card3image->setGraphicsEffect(effect_back);

    ui->card4image->autoFillBackground();
    ui->card4image->setFlat(true);
    ui->card4image->setIcon(QIcon(":/images/cards/Box_Back.png"));
    ui->card4image->setIconSize(QSize(250,363));
    ui->card4image->setGraphicsEffect(effect_back);

    ui->card5image->autoFillBackground();
    ui->card5image->setFlat(true);
    ui->card5image->setIcon(QIcon(":/images/cards/Box_Back.png"));
    ui->card5image->setIconSize(QSize(250,363));
    ui->card5image->setGraphicsEffect(effect_back);
}

void PokerForm::setCardsValues()
{
    if(!hold_card1)
    {
        hand.setCard1(deck.getOneCard());
        ui->card1image->setIcon(hand.getCard1().get_image());
    }
    if(!hold_card2)
    {
        hand.setCard2(deck.getOneCard());
        ui->card2image->setIcon(hand.getCard2().get_image());
    }
    if(!hold_card3)
    {
        hand.setCard3(deck.getOneCard());
        ui->card3image->setIcon(hand.getCard3().get_image());
    }
    if(!hold_card4)
    {
        hand.setCard4(deck.getOneCard());
        ui->card4image->setIcon(hand.getCard4().get_image());
    }
    if(!hold_card5)
    {
        hand.setCard5(deck.getOneCard());
        ui->card5image->setIcon(hand.getCard5().get_image());
    }
}

void PokerForm::onCard1Clicked()
{
    effect_card1 = new QGraphicsOpacityEffect(this);


    if(ui->spinButton->isEnabled())
    {
        if (hold_card1)
        {
            effect_card1->setEnabled(false);
            ui->card1image->setGraphicsEffect(effect_card1);
            hold_card1 = false;
        }
        else
        {
            effect_card1->setEnabled(true);
            ui->card1image->setGraphicsEffect(effect_card1);
            hold_card1 = true;
        }
    }
}

void PokerForm::onCard2Clicked()
{
    effect_card2 = new QGraphicsOpacityEffect(this);

    if(ui->spinButton->isEnabled())
    {
        if (hold_card2)
        {
            effect_card2->setEnabled(false);
            ui->card2image->setGraphicsEffect(effect_card2);
            hold_card2 = false;
        }
        else
        {
            effect_card2->setEnabled(true);
            ui->card2image->setGraphicsEffect(effect_card2);
            hold_card2 = true;
        }
    }
}

void PokerForm::onCard3Clicked()
{
    effect_card3 = new QGraphicsOpacityEffect(this);

    if(ui->spinButton->isEnabled())
    {
        if (hold_card3)
        {
            effect_card3->setEnabled(false);
            ui->card3image->setGraphicsEffect(effect_card3);
            hold_card3 = false;
        }
        else
        {
            effect_card3->setEnabled(true);
            ui->card3image->setGraphicsEffect(effect_card3);
            hold_card3 = true;
        }
    }
}

void PokerForm::onCard4Clicked()
{
    effect_card4 = new QGraphicsOpacityEffect(this);

    if(ui->spinButton->isEnabled())
    {
        if (hold_card4)
        {
            effect_card4->setEnabled(false);
            ui->card4image->setGraphicsEffect(effect_card4);
            hold_card4 = false;
        }
        else
        {
            effect_card4->setEnabled(true);
            ui->card4image->setGraphicsEffect(effect_card4);
            hold_card4 = true;
        }
    }
}

void PokerForm::onCard5Clicked()
{
    effect_card5 = new QGraphicsOpacityEffect(this);

    if(ui->spinButton->isEnabled())
    {
        if (hold_card5)
        {
            effect_card5->setEnabled(false);
            ui->card5image->setGraphicsEffect(effect_card5);
            hold_card5 = false;
        }
        else
        {
            effect_card5->setEnabled(true);
            ui->card5image->setGraphicsEffect(effect_card5);
            hold_card5 = true;
        }
    }
}

void PokerForm::onStartClicked()
{
    ui->winningMessage->setText("");
    resetHoldCard();
    deck.initialize();
    deck.shuffle();
    if(checkMoney())
    {
        setCardsValues();
        ui->spinButton->setEnabled(true);
        ui->startButton->setEnabled(false);
        ui->betValue->setEnabled(false);

        effect_front = new QGraphicsOpacityEffect(this);
        effect_front->setEnabled(true);
        ui->startButton->setGraphicsEffect(effect_front);
    }
    else
    {
        QMessageBox message;
        message.setWindowTitle("Ops!");
        message.setText("Your money is gone!\nGo to an ATM and return to us!");
        message.exec();
    }
}

void PokerForm::onSpinClicked()
{
    setCardsValues();
    emit checkHand(hand);
    ui->spinButton->setEnabled(false);
    ui->startButton->setEnabled(true);
    ui->betValue->setEnabled(true);

    effect_front = new QGraphicsOpacityEffect(this);
    effect_front->setEnabled(false);
    ui->card1image->setGraphicsEffect(effect_front);
    ui->card2image->setGraphicsEffect(effect_front);
    ui->card3image->setGraphicsEffect(effect_front);
    ui->card4image->setGraphicsEffect(effect_front);
    ui->card5image->setGraphicsEffect(effect_front);
    ui->startButton->setGraphicsEffect(effect_front);
}

