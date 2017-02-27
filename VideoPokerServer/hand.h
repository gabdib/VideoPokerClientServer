#ifndef HAND_H
#define HAND_H

#include <QVector>
#include <QMap>
#include "card.h"

typedef struct{
    QString name;
    QString description;
    int value;
} Win;

class Hand
{
public:
    Hand();
    Hand(QVector<Card> hand);
    Card* getHand();
    void setHand(QVector<Card> hand);
    void setCard1(const Card &card);
    void setCard2(const Card &card);
    void setCard3(const Card &card);
    void setCard4(const Card &card);
    void setCard5(const Card &card);
    Card getCard1() const;
    Card getCard2() const;
    Card getCard3() const;
    Card getCard4() const;
    Card getCard5() const;
    void printWinning();
    Win checkWinning();
    void printRankCount();
    void testWinning();

private:
    Card hand[5];
    int rankCount[13];

    QMap<QString, int> possibleWins;

    Win win;

    bool checkRoyalFlush();
    bool checkPoker();
    bool checkFull();
    bool checkFlush();
    bool checkTris();
    bool checkStraight();
    bool checkDoublePair();
    bool checkPair();

    void handRankCount();
    void resetRankCount();
};

#endif // HAND_H
