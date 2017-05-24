#ifndef _CARD_H_
#define _CARD_H_

#include <string>

enum class Suit: int
{
    Hearts,
    Clubs,
    Diamonds,
    Spades
};

enum class Rank: int
{
    Ace,
    Two,
    Three,
    Four,
    Five,
    Six,
    Seven,
    Eight,
    Nine,
    Ten,
    Jack,
    Queen,
    King
};


class Card
{
public:
    Card() = delete;
    Card(Rank r, Suit s);

    Rank get_rank();
    Suit get_suit();

    std::string to_str();

private:
    Rank rank;
    Suit suit;

    std::string rank_to_str();
    std::string suit_to_str();
};

#endif
