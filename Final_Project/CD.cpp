#include "CD.h"



void CD::setArtist(string a)
{
	artist_name = a;
}

void CD::setSong(int n, string s, double l)
{
	Song_Data temp(n, s, l);
	song_list->insertNode(temp);
}


string CD::getArtist() const
{
	return artist_name;
}

void CD::getSongs() const
{
	song_list->displayList();
}



ostream& operator<<(ostream& strm, CD& obj)
{
	strm << setprecision(2) << fixed;
	strm << "Artist:" << setw(10) << obj.getArtist() << endl;
	strm << "Album:" << setw(10) << obj.getTitle() << endl;
	strm << "Album Length" << setw(10) << obj.getLength() << endl;

	return strm;
}


CD::~CD()
{
	song_list->~LinkedList();
}




bool Song_Data::operator>(const Song_Data& right)
{
	if (song_num > right.song_num)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Song_Data::operator<(const Song_Data& right)
{
	if (song_num < right.song_num)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Song_Data::operator==(const Song_Data& right)
{
	if (song_num == right.song_num)
	{
		return true;
	}
	else
	{
		return false;
	}
}
