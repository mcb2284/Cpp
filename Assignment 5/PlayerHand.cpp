#include "PlayerHand.h"

//*********************************************************
// The constructor initializes the players hand with two
//  cards to start with.
// 
//*********************************************************

PlayerHand::PlayerHand(Card card, Card card2)
{
	hand.push_back(card);
	hand.push_back(card2);
	setScore(card);
	setScore(card2);

}


//*********************************************************
// The hit fuction allows the player to add a card to 
// their hand. It also verifies whether or not the play has busted
// 
//*********************************************************

void PlayerHand::hit(Card card)
{	
	if (checkBust())
	{
		cout << "Player Busted: cannot draw any more cards! \n";
	}
	else if (handSize >= 5)
	{
		cout << "Player Hand Full: cannot draw any more cards! \n";
	}
	else if (getScore() == 21)
	{
		cout << "Player Score 21: cannot draw any more cards! \n";
	}
	else
	{
		hand.push_back(card);
		handSize++;
		setScore(card);
	}
	
}

//*********************************************************
// The check bust ensures that the player doesn't go over 
// 21.
// 
//*********************************************************

bool PlayerHand::checkBust()
{
	bool bust = false;
	if (playerScore > 21)
	{
		bust = true;
	}
	return bust;
}

//*********************************************************
// The show hand function shows the cards in the 
// players hand and the accumulated score
// 
// 
//*********************************************************

void PlayerHand::getHand() const
{
	for (int count = 0; count < hand.size(); count++)
	{
		cout << hand[count] << endl;
	}
}

//*********************************************************
// The following function is the mutator for the player  
// score. It sets a bool for the aceshigh, If there is an ace 
// drawn it will automaticly be set to high unless a high ace
// causes a bust, in which case the ace will be set low. It
// also makes sure that the score for kings, queens, and jacks
// are all ten and not their face value.
//*********************************************************

void PlayerHand::setScore(Card card)
{
	bool acesHigh = false;
	if (card.getFace() == card.ACE)
	{
		acesHigh = true;
	}

	if (card.getFace() == card.KING || card.getFace() == card.QUEEN || card.getFace() == card.JACK)
	{
		playerScore += 10;
	}
	else if (card.getFace() == card.ACE && acesHigh)
	{
		playerScore += 11;
		if (checkBust())
		{
			acesHigh = false;
			playerScore -= 10;
		}
	}
	else
	{
		playerScore += card.getFace();	
	}

	if (checkBust())
	{
		cout << "Player Busted!" << endl;
	}
}

//*********************************************************
// The following function is the accessor for the player 
// score
// 
// 
//*********************************************************

int PlayerHand::getScore() const
{
	return playerScore;
}



