#include "ParkingMeter.h"



ParkingMeter::ParkingMeter()
{
	minPurchased = 0;
}

ParkingMeter::ParkingMeter(int p)
{
	minPurchased = p;
}

void ParkingMeter::setMinPurchased(int p)
{
	minPurchased = p;
}

int ParkingMeter::getMinPurchased() const
{
	return minPurchased;
}

ostream & operator<<(ostream &strm, ParkingMeter &purchased)
{
	strm << setw(20) << left << "Minutes Purchased: " << setw(10) << right << purchased.getMinPurchased() << endl;

	return strm;
}
