#include <stdio.h>
#include <iostream>
#include <chrono>
#include <vector>

#include "card.h"
#include "hand.h"

std::vector<Card> make_std_deck()
{
    std::vector<Card> deck;

    for(auto s : suits)
    {
        for(auto r : ranks)
        {
            deck.push_back(Card(r, s));
        }
    }

    return deck;
}

void generate_hands(std::vector<Card> deck, Hand h, std::vector<Hand>& all_hands)
{
    if(h.is_full())
    {
        all_hands.push_back(h);
    }
    else if(deck.size() > 0)
    {
        Hand newHand = Hand(h);
        newHand.add_card(deck[0]);
        deck.erase(deck.begin());

        // call with new hand
        generate_hands(deck, newHand, all_hands);

        // call without old hand
        generate_hands(deck, h, all_hands);
    }
}

using namespace std::chrono;

int main(int argc, char* argv[])
{
    // auto c = Card(Rank::Ace, Suit::Spades);
    // printf("Card: %s\n", c.to_str().c_str());

    std::vector<Card> deck = make_std_deck();

    // std::string deck_str = "[";
    // while(!deck.empty())
    // {
    //     Card card = deck.front();
    //     deck.pop();
    //     deck_str += card.to_str() + ", ";
    // }
    // deck_str += "]";
    // printf("%s", deck_str.c_str());

    time_point<system_clock> start, end;
    start = system_clock::now();

    std::vector<Hand> all_hands;
    all_hands.reserve(3'000'000);
    generate_hands(deck, Hand(), all_hands);

    end = system_clock::now();
    duration<double> elapsed_seconds = end-start;

    std::cout << "Possible Hands: " << all_hands.size() << "\n";
    std::cout << "Generation time: " << elapsed_seconds.count() << "s\n";

    return 0;
}
