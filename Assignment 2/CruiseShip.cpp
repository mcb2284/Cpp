#include "CruiseShip.h"


//Constructors
CruiseShip::CruiseShip()
{
	setCapacity(0);
}

CruiseShip::CruiseShip(string n, int y, int c)
{
	setName(n);
	setYear(y);
	setCapacity(c);
}
//Copy constructors
CruiseShip::CruiseShip(const CruiseShip &shipData)
{
	name = shipData.getName();
	year = shipData.getYear();
	capacity = shipData.getCapacity();
}
//Mutators
void CruiseShip::setCapacity(int c)
{
	capacity = c;
}

//Accessors
int CruiseShip::getCapacity() const
{
	return capacity;
}


//A redefined print function from the Ship class
void CruiseShip::printData() const
{
	cout << setw(17) << left << "Ship Name: " << setw(12) << right << getName() << endl;
	cout << setw(17) << left << "Max Passengers: " << setw(12) << right << getCapacity() << endl;
}

