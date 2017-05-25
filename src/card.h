#ifndef _CARD_H_
#define _CARD_H_

#include <string>
#include <vector>

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

static auto suits = std::vector<Suit>{
    Suit::Hearts,
    Suit::Clubs,
    Suit::Diamonds,
    Suit::Spades
};
static auto ranks = std::vector<Rank>{
    Rank::Ace,
    Rank::Two,
    Rank::Three,
    Rank::Four,
    Rank::Five,
    Rank::Six,
    Rank::Seven,
    Rank::Eight,
    Rank::Nine,
    Rank::Ten,
    Rank::Jack,
    Rank::Queen,
    Rank::King
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
