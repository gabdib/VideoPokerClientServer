#ifndef DECK_H
#define DECK_H

#include <QList>
#include <iostream>
#include <fstream>
#include "card.h"

using namespace std;

class Deck
{

public:
      explicit Deck();
      void print_Deck() const;
      Card getOneCard();
      void shuffle();
      void initialize();
      QList<Card> getDeck();

private:
    QList<Card> m_deck;

};

#endif
