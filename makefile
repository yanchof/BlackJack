blackjack: core.cc dealer.o player.o deck.o
	gcc -lstdc++ -Wall core.cc dealer.o player.o deck.o -Ofast -o blackjack
dealer.o:
	gcc -lstdc++ -Wall -c dealer.cc
player.o:
	gcc -lstdc++ -Wall -c player.cc
deck.o: deck.cc
	gcc -lstdc++ -Wall -c deck.cc
clean:
	rm -f *.o