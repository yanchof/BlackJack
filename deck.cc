#include <random>

#include "deck.hpp"

Deck::Deck() {
  for (int num = 1; num <= 9; num++) {
      for (int i = 0; i < 4; i++) {
        cards[(num-1)*4+i] = num;
      }
  }
  for (int i = 0; i < 16; i++) {
    cards[36+i] = 10;
  }

  cards_index = 51;
}

void Deck::Shuffle() 
  std::mt19937 mt;
  std::random_device rnd;
  std::uniform_int_distribution<> rand(0, cards_index);

  mt.seed(rnd());

  for (int i = 0; i <= cards_index; i++) {
    unsigned short int tmp;
    int swap_target_i = rand(mt);
    tmp = cards[i];
    cards[i] = cards[swap_target_i];
    cards[swap_target_i] = tmp;
  }
}

unsigned short int Deck::Draw() {
  return cards[cards_index--] if cards_index > 0 else 0;
}