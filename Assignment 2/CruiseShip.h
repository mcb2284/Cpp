/*
The Cruise ship is derived from the ship class and also has a member variable for capacity which holds the max capacity for passengers on the ship. 
The Cruise ship also has a redefined print function.
*/
#pragma once
#include "Ship.h"
class CruiseShip :
	public Ship
{
private:
	int capacity;

public:
	//Constructors
	CruiseShip();
	CruiseShip(string, int, int);

	//Copy Constructor
	CruiseShip(const CruiseShip &);

	//Mutators
	void setCapacity(int);

	//Accessors
	int getCapacity() const;

	//Redefined virtual functions
	virtual void printData() const;

};

