#include <iostream>
#include <string>
#include "Deck.h"
#include "PlayerHand.h"
using namespace std;

int displayMenu();
void userPath(int);
void playBlackJack();
void gameChoices(PlayerHand &, Deck);
void determineWinner(PlayerHand, PlayerHand);


int main()
{
	int choice;
	choice = displayMenu();
	userPath(choice);

	cin.ignore();
	return 0;
}

//*********************************************************
// Displays the choices for the userpath. 
//  
// 
//*********************************************************

int displayMenu()
{
	int choice;
	cout << "1-Play BlackJack \n";
	cout << "2-Exit \n";
	cin >> choice;

	return choice;
}

//*********************************************************
// The user path determines if the user wants to play black  
//  jack or exit the program.
// 
//*********************************************************

void userPath(int choice)
{
	switch (choice)
	{
	case 1:
		playBlackJack();
		cout << "Press Enter to Exit: " << endl;
		cin.ignore();
		break;
	case 2:
		cout << "Press Enter to Exit: " << endl;
		cin.ignore();
		break;
	default:
		break;
	}
}

//*********************************************************
// The following function allows the player to choose whether
// to "Hit" or "Stay"
// 
//*********************************************************

void gameChoices(PlayerHand &player, Deck deck)
{
	int choice;
	cout << "-Your Hand-" << endl;
	player.getHand();
	cout << "\n1-Hit" << endl;
	cout << "2-Stay" << endl;
	cin >> choice;
	while (choice < 1 || choice > 2)
	{
		cout << "Your choice was invalid please re-enter your choice.\n";
		cout << "\n1-Hit" << endl;
		cout << "2-Stay" << endl;
		cin >> choice;
	}

	while (choice == 1)
	{
		player.hit(deck.dealCard());
		player.getHand();
		cout << "\n1-Hit" << endl;
		cout << "2-Stay" << endl;
		cin >> choice;
	}

}

//*********************************************************
// Play blackjack facilitates the use of other functions to 
// play a game of blackjack. I initializes the deck and the 
// player hands as well.
//*********************************************************

void playBlackJack()
{
	Deck deck;
	deck.shuffleDeck();

	PlayerHand player1(deck.dealCard(), deck.dealCard());
	PlayerHand player2(deck.dealCard(), deck.dealCard());

	cout << "\n-PLAYER 1-" << endl;
	gameChoices(player1, deck);
	cout << "\n-PLAYER 2-" << endl;
	gameChoices(player2, deck);

	determineWinner(player1, player2);

}
//*********************************************************
// The determine winner function goes through the possible 
//  winning scenario to determine which player won the game
// 
//*********************************************************
void determineWinner(PlayerHand player1, PlayerHand player2)
{
	if (player1.getScore() > player2.getScore() && !player1.checkBust())
	{
		cout << "Player 1 Wins!\n";
	}
	else if (player1.getScore() < player2.getScore() && !player2.checkBust())
	{
		cout << "Player 2 Wins!\n";
	}
	else if (!player1.checkBust() && player2.checkBust())
	{
		cout << "Player 1 Wins!\n";
	}
	else if (player1.checkBust() && !player2.checkBust())
	{
		cout << "Player 2 Wins!\n";
	}
	else if (player1.checkBust() && player2.checkBust())
	{
		cout << "Both Players Busted! Dealer Wins!\n";
	}
	else
	{
		cout << "It's a Tie!\n";
	}
}