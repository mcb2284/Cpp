/*

The following program records and holds player info to include their name, jersey number, and points scored.
Then displays the information in a table output. Also, the program outputs the player with the highest score
and the total points scored by the team.

*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//Global size used for the array
const int SIZE(12);


//Structure to hold the player info
struct PlayerInfo
{
	string playerName;
	int jerseyNumber;
	int playerScore;
};

//Function Prototypes
void GetPlayerInfo(PlayerInfo []);
void ShowPlayerInfo(const PlayerInfo []);
int GetTotalPoints(const PlayerInfo[]);
void ShowHighest(PlayerInfo[]);



int main() {
	int total_score;
	PlayerInfo player_list[SIZE];
	
	GetPlayerInfo(player_list);
	
	ShowPlayerInfo(player_list);

	total_score = GetTotalPoints(player_list);
	cout << "The total points scores was " << total_score << " points." << endl;

	ShowHighest(player_list);

	cout << "Press Enter to Exit \n";
	cin.ignore();
	return 0;
}



//The following function() uses a for loop to recieve a user input to store the player data.
void GetPlayerInfo(PlayerInfo player_list[]){

	int count = 0;
	for (count = 0; count < SIZE; count++)
	{
		cout << "Please enter the players name: \n";
		getline(cin, player_list[count].playerName);

		cout << "Enter " << player_list[count].playerName << "'s jersey number\n";
		cin >> player_list[count].jerseyNumber;
		while (player_list[count].jerseyNumber < 0)
		{
			cout << "Your input was invalid. Please re-enter " << player_list[count].playerName << "'s Jersey numer.\n";
			cin >> player_list[count].jerseyNumber;
		}

		cout << "How many points did " << player_list[count].playerName << " score?\n";
		cin >> player_list[count].playerScore;
		while(player_list[count].playerScore < 0)
		{
			cout << "Your input was invalid. Please re-enter " << player_list[count].playerName << "'s score.\n";
			cin >> player_list[count].playerScore;
		}
		cin.ignore();

	}

}




//The following funtion uses a for loop to output all of the players info in a table like format
void ShowPlayerInfo(const PlayerInfo player_list[]) {

	int count = 0;


	cout << setw(20) << left << "Player Names:";
	cout << setw(10) << right << "Jersey #";
	cout << setw(10) << right << "Scores:" << endl;


	for (count = 0; count < SIZE; count++)
	{
		cout << setw(20) << left << player_list[count].playerName;
		cout << setw(10) << right << player_list[count].jerseyNumber;
		cout << setw(10) << right << player_list[count].playerScore << endl;

	}


}



//The following funtion adds together all the scores to get a total score for the whole team.
int GetTotalPoints(const PlayerInfo player_list[]) {

	int running_total(0);
	int count(0);

	for (count = 0; count < SIZE; count++)
	{
		running_total += player_list[count].playerScore;

	}
	return running_total;
}


// The following function compares each player score with the test score to determine the highest score.
// Whenever a higher score replaces the test score the count is recorded in the placeholder variable so that
// I can use the placeholder as an element to cout the player with the high scores info.
void ShowHighest(PlayerInfo player_list[]) {
	int count = 0;
	int test_score = 0;
	int placeholder = 0;

	for (count = 0; count < SIZE; count++)
	{
		if (player_list[count].playerScore > test_score) {
			test_score = player_list[count].playerScore;
			placeholder = count;
		}
	}
	
	cout << player_list[placeholder].playerName << " had the highest score with ";
	cout << player_list[placeholder].playerScore << " points.\n";
}