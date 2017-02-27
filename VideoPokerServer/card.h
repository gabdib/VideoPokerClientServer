#ifndef CARD_H
#define CARD_H

#include <QString>
#include <QIcon>

const int SUIT_MAX(4);
const int RANK_MAX(13);

class Card
{
    friend class Deck;
public:
    explicit Card();
    explicit Card(const int &suit, const int &rank, const QIcon &image);
    int get_suit() const;
    int get_rank() const;
    QIcon get_image() const;
    QString Card2Str() const;
    void set_suit(const int &suit);
    void set_rank(const int &rank);
private:
    int generate_suit();
    int generate_rank();
    int m_suit;
    int m_rank;
    QIcon m_image;
};
#endif
