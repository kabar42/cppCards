#include "hand.h"


Hand::Hand()
{
    hand_size = 5;
    cards.reserve(hand_size);
}

Hand::Hand(const Hand& hand)
{
    hand_size = 5;
    cards.reserve(hand_size);
    for(auto& aCard : hand.get_cards())
    {
        cards.push_back(aCard);
    }
}

std::vector<Card> Hand::get_cards() const
{
    return cards;
}

void Hand::add_card(Card c)
{
    cards.push_back(c);
}

bool Hand::is_full() const
{
    bool full = false;
    if(cards.size() >= 5)
    {
        full = true;
    }
    return full;
}
