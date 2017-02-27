#include <stdlib.h>
#include "card.h"

const QString SUIT[SUIT_MAX]  = {"S", "H", "D", "C"};
const QString RANK[RANK_MAX]  = {"A","2","3","4","5","6","7","8","9","10","J","Q","K"};


Card::Card()
{
   m_suit = generate_suit();
   m_rank = generate_rank();
}

Card::Card(const int &suit, const int &rank, const QIcon &image) : m_suit(suit), m_rank(rank), m_image(image)
{

}

int Card::generate_suit()
{
    return rand() % (SUIT_MAX-1) + 0;
}

int Card::generate_rank()
{
    return rand() % (RANK_MAX-1) + 0;
}

QString Card::Card2Str() const
{
    return RANK[get_rank()]+SUIT[get_suit()];
}

int Card::get_suit() const
{
    return m_suit;
}

int Card::get_rank() const
{
    return m_rank;
}

QIcon Card::get_image() const
{
    return m_image;
}

void Card::set_rank(const int &rank)
{
    m_rank = rank;
}

void Card::set_suit(const int &suit)
{
    m_suit = suit;
}

