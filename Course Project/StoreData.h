#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include "DiscData.h"
using namespace std;



class StoreData
{
private:
	fstream records;

public:
	//constructor opens the file to make sure it opens and initializes the file 
	//with the constuctor data for DiscData.
	StoreData(DiscData artist[])
	{
		records.open("records.txt", ios::out);
		if (!records)
		{
			cout << "Error: could not open file." << endl;
		}
		int count = 0;

		for (count = 0; count < 5; count++)
		{
			records << artist[count] << endl;
		}
		records.close();
	}

	//mutator funtions
	void updateRecord(DiscData[]);
};

