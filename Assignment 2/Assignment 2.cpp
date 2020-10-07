/*
Assignment 2 has 3 classes one base class and 2 classes derived from that base class.  These classes hold data specific to the type of ship it is.
the main creates an array of objects, outputs the data in those objects, and determine the oldest ship in the array.
*/
#include <iostream>
#include <iomanip>
#include <string>
#include"Ship.h"
#include"CruiseShip.h"
#include "CargoShip.h"
using namespace std;

void displayShip(Ship*);
void getOldest(Ship *[], const int);

int main()
{

	const int SIZE = 6;
	int count = 0;
	
	


	Ship* myShip[SIZE] = {
		new Ship("Mercury", 1985), new CruiseShip("Venus", 1990, 320),
		new CargoShip("Mars", 1992, 126), new Ship("Jupiter", 1984),
		new CruiseShip("Saturn", 1998, 400), new CargoShip("Uranus", 2002, 335)
	};

	for (count = 0; count < SIZE; count++)
	{
		displayShip(myShip[count]);	
	}


		getOldest(myShip, SIZE);



	//I used this method to delete the array. Does this work for deleteing dynamically allocated memory? Whenever I used
	// delete[] myShip;  it would throw an exception.
	for (count = 0; count < SIZE; count++)
	{
		delete myShip[count];
	}
	

	cout << "Press Enter to Exit: " << endl;
	cin.ignore();


	return 0;
}


 
void displayShip(Ship* myShip)
{

		myShip->printData();
	
}



void getOldest(Ship *shipData[], const int SIZE)
{
	//The count tracks how many times the function has been called. A new set of pointers is used to transfer the data from the main
	//and the count is incremented so the function knows when to run the last algorithm
	int marker(0);
	int test = shipData[marker]->getYear();
	int x;

	for (x = 0; x < SIZE; x++)
	{
		if (test > shipData[x]->getYear())
		{
			test = shipData[x]->getYear();
			marker = x;

		}
	}
	cout << shipData[marker]->getName() << " is the oldest ship in the fleet. Built in " << shipData[marker]->getYear() << endl;

}

