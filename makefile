blackjack: core.cc dealer.o player.o deck.o
	g++ -Wall core.cc dealer.o player.o deck.o -Ofast -o blackjack
dealer.o:
	g++ -Wall -c dealer.cc
player.o:
	g++ -Wall -c player.cc
deck.o: deck.cc
	g++ -Wall -c deck.cc
clean:
	rm -f *.o