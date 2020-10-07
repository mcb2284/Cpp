#include "DiscData.h"

//Constutor
//initializes the array with basic values that reflect the data they hold i.e. the artistName variable will be initialized with "artist"
DiscData::DiscData()
{
	int count = 0;
	artistName = "Artist";
	albumTitle = "Album";
	albumLen = 0.00;

	for (count = 0; count < 5; count++)
	{
		songTitles[count] = "Song";
		playTime[count] = 0.00;
	}
}


//Mutator Member Functions
//the set member functions allow the user to set their own values
void DiscData::setArtist()
{
	cin.ignore();
	cout << "Artist Name: " << endl;
	getline(cin, artistName);
}

void DiscData::setAlbum()
{
	cout << "Album Name: " << endl;
	getline(cin, albumTitle);

}

void DiscData::setSongs()
{
	int count = 0;

	for (count = 0; count < 5; count++)
	{
		
		cout << "Enter the title for song #" <<  count + 1 << endl;
		getline(cin, songTitles[count]);
		cout << "Enter the Playtime for " << songTitles[count] << endl;
		cin >> playTime[count];
		albumLen += playTime[count];
		cin.ignore();
	}
}
//the reset function doesn't take a user input but simply sets the given array to the original factory settings.
void DiscData::resetArtist()
{
	int count = 0;
	artistName = "Artist";
	albumTitle = "Album";
	albumLen = 0.00;

	for (count = 0; count < 5; count++)
	{
		songTitles[count] = "Song";
		playTime[count] = 0.00;
	}
}


//Accessor Member Functions
//The accessor MF outputs the data for a given CD
string DiscData::getArtist() const
{
	return artistName;
}

string DiscData::getAlbum() const
{
	return albumTitle;
}

double DiscData::getAlbumPlayTime() const
{
	return albumLen;
}

string* DiscData::getSongTitles()
{
	return songTitles;
}

double* DiscData::getPlayTime() 
{
		return playTime;
}

//The overloaded output operator outputs a given CD (requiring a loop if you want to output the entire array)
// in a table format

ostream & operator<<(ostream & strm, const DiscData & artist)
{

	int count = 0;
	strm << setprecision(2) << fixed;
	strm << setw(15) << left << "Artist : " << artist.getArtist() << endl;
	strm << setw(15) << left << "Album : " << artist.getAlbum() << endl;
	strm << setw(15) << left << "Album Length : " << artist.albumLen << endl;
	for (count = 0; count < 5; count++)
	{
		strm << setw(15) << left << "Song : " << artist.songTitles[count] << endl;
		strm << setw(15) << left << "Playtime : " << artist.playTime[count] << endl;
	}
	

	return strm;
	
}
