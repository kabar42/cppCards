#include <stdio.h>

#include "card.h"

int main(int argc, char* argv[])
{
    auto c = Card(Rank::Ace, Suit::Spades);
    printf("Card: %s\n", c.to_str().c_str());

    return 0;
}
