#include "ParkingTicket.h"


//Constructors
ParkingTicket::ParkingTicket()
{
	fine = 0;
	minOverTime = 0;
}

ParkingTicket::ParkingTicket(ParkedCar car,  int minOver)
{
	cardata = car;
	minOverTime = minOver;
	issueFine(minOver);
	
}


//Mutators
void ParkingTicket::setFine(double f)
{
	fine = f;
}

void ParkingTicket::setMinOverTime(int o)
{
	minOverTime = o;
}

//Accessors
double ParkingTicket::getFine() const
{
	return fine;
}

int ParkingTicket::getMinOverTime() const
{
	return minOverTime;
}


//The issueFine() member function calculates the fine given to the cars that are parked over the time they paid for.
void ParkingTicket::issueFine(int minOver)
{
	double fine;

	fine = ceil(minOver / 60);
	fine *= 10;
	fine += 15;

	setFine(fine);

}

ostream & operator<<(ostream &strm, ParkingTicket &ticket)
{
	strm << setw(20) << left << "Fine Amount: " << setw(9) << right <<  ticket.getFine() << "$" << endl;

	return strm;
}
