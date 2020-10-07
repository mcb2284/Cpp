#include "StoreData.h"


//The update records updates the contents of the file everytime there is a change made to the file
void StoreData::updateRecord(DiscData artist[])
{
	records.open("records.txt", ios::out);
	int count = 0;

	for (count = 0; count < 5; count++)
	{
		records << artist[count] << endl;
	}

	records.close();

}
