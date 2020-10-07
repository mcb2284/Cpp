#include "Ship.h"


//Constructors
Ship::Ship()
{
	setName("Ship");
	setYear(0);
}

Ship::Ship(string name, int year)
{
	setName(name);
	setYear(year);
}

//Copy Constructor
Ship::Ship(const Ship &shipData)
{
	name = shipData.getName();
	year = shipData.getYear();
}

//Mutators
void Ship::setName(string n)
{
	name = n;
}

void Ship::setYear(int y)
{
	year = y;
}
//Accessors
string Ship::getName() const
{
	return name;
}

int Ship::getYear() const
{
	return year;
}


//Overloaded Assignement Operator
const Ship Ship::operator=(const Ship & test)
{
	if (this != &test)
	{
		name = test.getName();
		year = test.getYear();
	}
	return *this;
}

//Virtual Print member function
void Ship::printData() const
{
	cout << setw(17) << left << "Ship Name: " << setw(12) << right << getName() << endl;
	cout << setw(17) << left << "Year Built: " << setw(12) << right << getYear() << endl;
}
