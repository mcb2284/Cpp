#include "pch.h"
#include "Deck.h"



//*********************************************************
// The constructor for Deck uses the overloaded card 
// constructor to initialize all the card values into
// an array.
//*********************************************************

Deck::Deck()
{
	int cardNum = 0;
	for (int suit = 0; suit < 4; suit++)
	{
		for (int face = 0; face < 13; face++)
		{
			Card temp(face + 1, suit + 1);
			unshuffledDeck[cardNum] = temp;
			cardNum++;
	
		}
	}
}


//*********************************************************
// The shuffle deck method generates a random number then
// pushes that number subscript for the deck array into 
//  the stack.
//*********************************************************
void Deck::shuffleDeck()
{
	int temp, count;
	srand(time(0));


	for (count = 0; count < SIZE; count++)
	{			
		temp = (rand() % (51 - 0 + 1)) + 0;
		shuffledDeck.push(unshuffledDeck[count]);
	}
	
}

//*********************************************************
// The deal card method returns the top card in the deck
// then pops it from the stack so that cards are not re-used
// 
//*********************************************************

Card Deck::dealCard()
{
	Card temp;
	temp = shuffledDeck.top();
	shuffledDeck.pop();
	return temp;
}


//*********************************************************
// The show deck funciton is merely used for debugging purposes.
// 
// 
//*********************************************************

void Deck::showDeck()
{
	for (int count = 0; count < 52; count++)
	{
		cout << shuffledDeck.top() << endl;
		shuffledDeck.pop();
	}
}


