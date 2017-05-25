#ifndef _HAND_H_
#define _HAND_H_

#include <vector>

#include "card.h"

class Hand
{
public:
    Hand();
    Hand(const Hand& hand);

    std::vector<Card> get_cards() const;
    void add_card(Card c);
    bool is_full() const;

private:
    std::vector<Card> cards;
    int hand_size;
};

#endif
