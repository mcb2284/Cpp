#include <iostream>
#include <iomanip>
#include <string>
#include "DiscData.h"
#include "StoreData.h"
using namespace std;


void displaymenu();
void userPath(int);
void addArtist();
void updateArtist();
void deleteArtist();
void displayArtists();



//The following objects are set to global because nearly every function need access to them
DiscData artist_library[5];
StoreData libraryToFile(artist_library);



//The main calls the display menu function and after that nothing happens inside the main. Everything is looped through the display menu function and the userpath function
int main()
{
	displaymenu();
	
	return 0;
}









//The display menu function gives the user a menu to choose from and then returns their decision 
//to the main.
void displaymenu()
{
	int choice;
	bool test = false;

	cout << "-Make your selection-" << endl;
	cout << "1. Add New" << endl;
	cout << "2. Update Existing" << endl;
	cout << "3. Delete Existing" << endl;
	cout << "4. Display Records" << endl;
	cout << "5. Exit" << endl;
	cin >> choice;
 

	if (choice > 5 || choice < 1)
	{
		cout << "Error: your entry was invalid. \n";
		cout << "Please enter the numnber corresponding \n";
		cout << "With the selection you'd like to make \n";
		displaymenu();
	}

	userPath(choice);

}






//The userpath is a switch statement that takes the user input from the display menu as an arguement to decide the users path i.e. whether to add change or delete data from the
// library
void userPath(int c)
{
	switch (c)
	{
	case 1:
		addArtist();
		displaymenu();
		break;
	case 2:
		updateArtist();
		displaymenu();
		break;
	case 3:
		deleteArtist();
		displaymenu();
		break;
	case 4:
		displayArtists();
		displaymenu();
		break;

	default:
		cin.ignore();
		cout << "Press Enter to Exit: \n";
		cin.ignore();
		break;
	}

}





//the add artist function adds an artist in the next avaible member in the array and subsequently adds it to the cooresponding 
//spot in the file.
void addArtist()
{
	
	static int count = 0;
	
	while (count >= 5)
	{
		cout << "Error: Library full.\n";
		displaymenu();
	}

	
	artist_library[count].setArtist();
	artist_library[count].setAlbum();	
	artist_library[count].setSongs();
	libraryToFile.updateRecord(artist_library);
	count++;
}





//The update artist function allows the user to pick one of the 5 members of the array to update they can either change an already existing artist 
// or an un-initialized one.
void updateArtist()
{
	int x;
	int update_artist;
	for (x = 0; x < 5; x++)
	{
		cout << "#" << x + 1 << endl;
		cout << artist_library[x] << endl;
	}
	cout << "Which Artist do you want to update? \n";
	cin >> update_artist;

	while (update_artist > 5 || update_artist < 0)
	{
		cout << "Error: youre input was invalid please enter \n";
		cout << "the number corresponding with the artist you \n";
		cout << "with the artist you would like to update.\n";
		cout << "Which Artist do you want to update? \n";
		cin >> update_artist;
	}

	artist_library[update_artist - 1].setArtist();
	artist_library[update_artist - 1].setAlbum();
	artist_library[update_artist - 1].setSongs();
	libraryToFile.updateRecord(artist_library);



}




//The delete artist deletes one of the artists and re-initializes it to the original settings
void deleteArtist()
{
	int x;
	int delete_artist;
	for (x = 0; x < 5; x++)
	{
		cout << "#" << x + 1 << endl;
		cout << artist_library[x] << endl;
	}
	cout << "Which Artist do you want to delete? \n";
	cin >> delete_artist;

	while (delete_artist > 5 || delete_artist < 0)
	{
		cout << "Error: youre input was invalid please enter \n";
		cout << "the number corresponding with the artist you \n";
		cout << "with the artist you would like to update.\n";
		cout << "Which Artist do you want to update? \n";
		cin >> delete_artist;
	}

	artist_library[delete_artist - 1].resetArtist();
	libraryToFile.updateRecord(artist_library);


}


//The display artist function outputs each CD in a table format starting with the artist
void displayArtists()
{
	int x;
	for (x = 0; x < 5; x++)
	{
		cout << artist_library[x] << endl;
	}
}