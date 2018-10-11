#include <random>

#include "deck.hpp"

Deck::Deck() {
  for (int num = 1; num <= 9; num++) {
      for (int i = 0; i < 4; i++) {
        this->cards[(num-1)*4+i] = num;
      }
  }
  for (int i = 0; i < 16; i++) {
    this->cards[36+i] = 10;
  }

  this->cards_index = 51;
}

void Deck::Shuffle() {
  std::mt19937 mt;
  std::random_device rnd;
  std::uniform_int_distribution<> rand(0, this->cards_index);

  mt.seed(rnd());

  for (int i = 0; i <= cards_index; i++) {
    unsigned short int tmp;
    int swap_target_i = rand(mt);

    tmp = this->cards[i];
    this->cards[i] = this->cards[swap_target_i];
    this->cards[swap_target_i] = tmp;
  }
}

unsigned short int Deck::Draw() {
  return this->cards[this->cards_index--] if this->cards_index > 0 else 0;
}