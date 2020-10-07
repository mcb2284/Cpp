#pragma once
#include <iostream>
#include <vector>
#include "Deck.h"
using namespace std;


class PlayerHand
{
private:
	//Memeber Variables
	int handSize = 2;
	int playerScore = 0;

	//Vector to hold the players cards
	vector<Card> hand;
public:
	// Overloaded Constructor
	PlayerHand(Card, Card);

	//Mutators
	void setScore(Card);

	//Accessors
	void getHand() const;
	int getScore() const;

	//Memeber Functions
	void hit(Card);
	bool checkBust();
	


};

