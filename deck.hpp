#ifndef _DECK_HPP_
#define _DECK_HPP_

class Deck {
  private:
    unsigned short int cards_index;
    unsigned short int cards[52]; //not contains joker

  public:
    Deck();

    void Shuffle();
    unsigned short int Draw();
};

#endif