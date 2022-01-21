#pragma once
#include <iostream>
enum CardRank {
	rank2, rank3, rank4, rank5, rank6, rank7, rank8,
	rank9, rank10, rankJ, rankQ, rankK, rankA, MAX_RANK
};
enum CardSuit {
	suitDiamonds, suitHearts, suitClubs, suitSpades,
	MAX_SUITS
};

class Card {
private:
	CardRank rank;
	CardSuit suit;
public:
	Card(CardRank frank, CardSuit fsuit) : rank{ frank }, suit{ fsuit }
	{ }
	int getScore();
	std::string getRank();
	char getSuit();
	void printCard();
};