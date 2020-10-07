#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include "Card.h"
using namespace std;

const int SIZE(52);

class Deck
{
private:
	Card unshuffledDeck[SIZE];
	stack <Card, vector<Card>> shuffledDeck;
public:
	Deck();
	void shuffleDeck();
	Card dealCard();
	void showDeck();
};

