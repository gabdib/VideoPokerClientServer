#ifndef POKERFORM_H
#define POKERFORM_H

#include <QWidget>
#include <QDialog>
#include <QString>
#include <QGraphicsOpacityEffect>
#include "hand.h"
#include "deck.h"
#include "card.h"

namespace Ui {
class PokerForm;
}

class PokerForm : public QDialog
{
    Q_OBJECT
    
public:
    explicit PokerForm(QWidget *parent = 0, int id = 0, QString name = 0);
    ~PokerForm();
    void setCardsValues();
    bool checkMoney();
    void updateResult(Win win);
    void Init(int id, QString name);
    void setAllCardsBack();

signals:
    void checkHand(Hand);
    void updateMoney(int money);

private:
    Ui::PokerForm *ui;

    int money;
    quint16 _id;
    QString _name;
    bool hold_card1;
    bool hold_card2;
    bool hold_card3;
    bool hold_card4;
    bool hold_card5;
    QGraphicsOpacityEffect *effect;
    QGraphicsOpacityEffect *effect_back;
    QGraphicsOpacityEffect *effect_front;
    QGraphicsOpacityEffect *effect_card1;
    QGraphicsOpacityEffect *effect_card2;
    QGraphicsOpacityEffect *effect_card3;
    QGraphicsOpacityEffect *effect_card4;
    QGraphicsOpacityEffect *effect_card5;

    void resetHoldCard();

    Deck deck;
    Hand hand;


private slots:
    void onCard1Clicked();
    void onCard2Clicked();
    void onCard3Clicked();
    void onCard4Clicked();
    void onCard5Clicked();
    void onStartClicked();
    void onSpinClicked();

};

#endif // POKERFORM_H
