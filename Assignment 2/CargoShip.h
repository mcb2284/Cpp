/*
The Cargo ship is derived from the ship class and also has a member variable for capacity which holds the max capacity of cargo the ship
can carry.
The Cargo ship also has a redefined print function.
*/
#pragma once
#include "Ship.h"
class CargoShip :
	public Ship
{
private:
	int capacity;

public:
	//Constuctors
	CargoShip();
	CargoShip(string, int, int);

	//Copy Constructor
	CargoShip(const CargoShip &);

	//Mutators
	void setCapacity(int);

	//Accessors
	int getCapacity() const;

	//Redefined Virtual Functions
	virtual void printData() const;
};

