/*
The purpose of the DiscData class is to store all the information related to the 
corresponding artist.  This class doesn't interact with the file directly, its only
its only purpose is initializing the information before it gets written to the 
records.txt file
*/
#pragma once
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


class DiscData
{
private:
	//private member variables
	string artistName;
	string albumTitle;
	double albumLen;
	string songTitles[5];
	double playTime[5];

    

public:
	//Default Constructor
	DiscData();
	

	//Mutator Member Functions
	void setArtist();
	void setAlbum();
	void setSongs();
	void resetArtist();

	//Accessor Member Functions
	string getArtist() const;
	string getAlbum() const;
	double getAlbumPlayTime() const;
	string* getSongTitles();
	double* getPlayTime();
	

	//overloaded output member operator
	friend ostream &operator << (ostream &strm, const DiscData &artist);
};

