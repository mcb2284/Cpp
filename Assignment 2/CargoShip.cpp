#include "CargoShip.h"


//Constructors
CargoShip::CargoShip()
{
	setCapacity(0);
}

CargoShip::CargoShip(string n, int y, int c)
{
	setName(n);
	setYear(y);
	setCapacity(c);
}
//Copy Constructors
CargoShip::CargoShip(const CargoShip &shipData)
{
	name = shipData.getName();
	year = shipData.getYear();
	capacity = shipData.getCapacity();
}
//Mutators
void CargoShip::setCapacity(int c)
{
	capacity = c;
}
//Accessors
int CargoShip::getCapacity() const
{
	return capacity;
}
//Redefined Print Function
void CargoShip::printData() const
{
	cout << setw(17) << left << "Ship Name: " << setw(12) << right << getName() << endl;
	cout << setw(17) << left << "Max Cargo: " << setw(12) << right << getCapacity() << endl;
}



