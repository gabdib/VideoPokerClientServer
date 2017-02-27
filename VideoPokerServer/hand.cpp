#include "hand.h"
#include <QDebug>

const int MAX_SIZE = 9;
const QString MAP_KEY[MAX_SIZE] = {"No win","Pair", "DoublePair", "Tris", "Straight", "Flush", "Full", "Poker", "RoyalFlush"};
const int MAP_VALUE[MAX_SIZE] = {0,2,4,8,15,30,60,100,300};

Hand::Hand()
{
    int i;
    for(i=0;i<MAX_SIZE;i++)
    {
        possibleWins.insert(MAP_KEY[i],MAP_VALUE[i]);
    }
}

void Hand::printWinning()
{
    QMapIterator<QString, int> i(possibleWins);
    while (i.hasNext()) {
        i.next();
        qDebug() << i.key() << ": " << i.value() << endl;
    }
}

void Hand::printRankCount()
{
    int i;
    for(i=0;i<13;i++)
    {
        qDebug()<<i;
        qDebug()<<rankCount[i];
        qDebug()<<"==================";
    }
}

Win Hand::checkWinning()
{
    handRankCount();

    win.name = MAP_KEY[0];
    win.value = MAP_VALUE[0];

    if(checkRoyalFlush())
    {
        win.name = MAP_KEY[8];
        win.value = MAP_VALUE[8];
        return win;
    }

    if(checkPoker())
    {
        win.name = MAP_KEY[7];
        win.value = MAP_VALUE[7];
        return win;
    }

    if(checkFull())
    {
        win.name = MAP_KEY[6];
        win.value = MAP_VALUE[6];
        return win;
    }
    if(checkFlush())
    {
        win.name = MAP_KEY[5];
        win.value = MAP_VALUE[5];
    }

    if(checkStraight())
    {
        win.name = MAP_KEY[4];
        win.value = MAP_VALUE[4];
        return win;
    }

    if(checkTris())
    {
        win.name = MAP_KEY[3];
        win.value = MAP_VALUE[3];
        return win;
    }

    if(checkDoublePair())
    {
        win.name = MAP_KEY[2];
        win.value = MAP_VALUE[2];
        return win;
    }

    if(checkPair())
    {
        win.name = MAP_KEY[1];
        win.value = MAP_VALUE[1];
        return win;
    }

    return win;
}

bool Hand::checkRoyalFlush()
{
    if(checkFlush()&&checkStraight())
        return true;
    else
        return false;
}

bool Hand::checkPoker()
{
    int i;
    for(i=0;i<13;i++)
    {
        if(rankCount[i]==4)
        {
            return true;
        }
    }
    return false;
}

void Hand::handRankCount()
{
    resetRankCount();

    int i,j;
    for(i=0;i<13;i++)
    {
        for(j=0;j<5;j++)
        {
            if(hand[j].get_rank()==i) rankCount[i]++;
        }
    }
}

void Hand::resetRankCount()
{
    int i;
    for(i=0;i<13;i++)
    {
        rankCount[i] = 0;
    }
}

bool Hand::checkFull()
{
        return false;
}

bool Hand::checkFlush()
{
    Card card0 = hand[0];
    Card cardI;
    int i;
    for(i=1;i<5;i++)
    {
        cardI = hand[i];
        if(card0.get_suit()!=cardI.get_suit())
            return false;
    }
    return true;
}

bool Hand::checkStraight()
{
    Card* orderHand = hand;
    int i, j, min, temp;

    for(i=0; i<5; i++)
    {
        min = i;
        for(j=i+1; j<5; j++)
            if(orderHand[j].get_rank() < orderHand[min].get_rank())
            {
                min = j;
            }
        temp = orderHand[min].get_rank();
        orderHand[min] = orderHand[i];
        orderHand[i].set_rank(temp);
    }

    for(i=0;i<5;i++)
    {
        if(i!=4)
            if(orderHand[i].get_rank()-orderHand[i+1].get_rank()!=-1)
                return false;
    }
    return true;
}

bool Hand::checkTris()
{
    int i;
    for(i=0;i<13;i++)
    {
        if(rankCount[i]==3)
        {
            return true;
        }
    }
    return false;
}

bool Hand::checkDoublePair()
{
    int i;
    int count = 0;
    for(i=0;i<13;i++)
    {
        if(rankCount[i]==2)
        {
            count++;
        }
    }
    return count==2;
}

bool Hand::checkPair()
{
    int i;
    for(i=0;i<13;i++)
    {
        if(rankCount[i]==2)
        {
            return true;
        }
    }
    return false;
}

Card Hand::getCard1() const
{
    return hand[0];
}

Card Hand::getCard2() const
{
    return hand[1];
}

Card Hand::getCard3() const
{
    return hand[2];
}

Card Hand::getCard4() const
{
    return hand[3];
}

Card Hand::getCard5() const
{
    return hand[4];
}

void Hand::setCard1(const Card &card)
{
    hand[0] = card;
}

void Hand::setCard2(const Card &card)
{
    hand[1] = card;
}

void Hand::setCard3(const Card &card)
{
    hand[2] = card;
}

void Hand::setCard4(const Card &card)
{
    hand[3] = card;
}

void Hand::setCard5(const Card &card)
{
    hand[4] = card;
}

Card* Hand::getHand()
{
    return hand;
}

void Hand::testWinning()
{
    Hand testhand;
    Card card1(0,12,QIcon("/"));
    qDebug()<<card1.Card2Str();
    Card card2(0,0,QIcon("/"));
    qDebug()<<card2.Card2Str();
    Card card3(0,9,QIcon("/"));
    qDebug()<<card3.Card2Str();
    Card card4(0,10,QIcon("/"));
    qDebug()<<card4.Card2Str();
    Card card5(0,11,QIcon("/"));
    qDebug()<<card5.Card2Str();
    testhand.setCard1(card1);
    testhand.setCard2(card2);
    testhand.setCard3(card3);
    testhand.setCard4(card4);
    testhand.setCard5(card5);
    qDebug()<<"TestingHand is checking result of: ";
    qDebug()<<
               testhand.getCard1().Card2Str()+
               " "+
               testhand.getCard2().Card2Str()+
               " "+
               testhand.getCard3().Card2Str()+
               " "+
               testhand.getCard4().Card2Str()+
               " "+
               testhand.getCard5().Card2Str();

    Win win = testhand.checkWinning();
    qDebug()<<"TestingHand result is: " + win.name;
}
