#include "card.h"

Card::Card(Rank r, Suit s): rank(r), suit(s) {}

Rank Card::get_rank()
{
    return rank;
}

Suit Card::get_suit()
{
    return suit;
}

std::string Card::to_str()
{
    std::string c = "";
    c = rank_to_str() + suit_to_str();
    return c;
}

std::string Card::rank_to_str()
{
    std::string result = "";

    switch(rank) {
    case Rank::Ace:
        result = "A";
        break;
    case Rank::Two:
        result = "2";
        break;
    case Rank::Three:
        result = "3";
        break;
    case Rank::Four:
        result = "4";
        break;
    case Rank::Five:
        result = "5";
        break;
    case Rank::Six:
        result = "6";
        break;
    case Rank::Seven:
        result = "7";
        break;
    case Rank::Eight:
        result = "8";
        break;
    case Rank::Nine:
        result = "9";
        break;
    case Rank::Ten:
        result = "10";
        break;
    case Rank::Jack:
        result = "J";
        break;
    case Rank::Queen:
        result = "Q";
        break;
    case Rank::King:
        result = "K";
        break;
    }

    return result;
}

std::string Card::suit_to_str()
{
    std::string result = "";

    switch(suit) {
    case Suit::Hearts:
        result = "H";
        break;
    case Suit::Clubs:
        result = "C";
        break;
    case Suit::Diamonds:
        result = "D";
        break;
    case Suit::Spades:
        result = "S";
        break;
    default:
        break;
    }

    return result;
}
