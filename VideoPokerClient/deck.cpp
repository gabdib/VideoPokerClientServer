#include <stdlib.h>
#include "deck.h"
#include <algorithm>
#include <QDebug>
#include <ctime>

Deck::Deck()
{
    initialize();
    shuffle();
}

void Deck::initialize()
{
    m_deck.clear();
    for (unsigned int i(0); i < SUIT_MAX; ++i)
    {
        for (unsigned int j(0); j < RANK_MAX; ++j)
        {
            QString cardName =  ":/images/cards/" +
                                QString::number(i) +
                                "-" +
                                QString::number(j) +
                                ".png";
            QIcon image(cardName);
            Card card(i, j, image);
            m_deck.push_back(card);
        }
    }
}

void Deck::shuffle()
{
    int i;
    srand(time(NULL));
    int randNum = qrand() % 50+1;
    for(i=0; i< randNum; i++)
    {
        std::random_shuffle(m_deck.begin(), m_deck.end());
    }
}

void Deck::print_Deck() const
{
    int count(1);

    for (int i(0); i < m_deck.size(); ++i)
    {
        if ( count == 13 )
        {
          count = 0;
        }
        ++count;
    }
}

Card Deck::getOneCard()
{
    Card cd(m_deck.back().get_suit(), m_deck.back().get_rank(), m_deck.back().get_image());
    m_deck.pop_back();
    return cd;
}

QList<Card> Deck::getDeck()
{
    return m_deck;
}
