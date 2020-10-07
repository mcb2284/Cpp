#include "PoliceOfficer.h"


//Constructors
PoliceOfficer::PoliceOfficer()
{
	
	setOfficerName("Officer");
	setBadgeNumber("Badge Number");

}

PoliceOfficer::PoliceOfficer(string n, string b)
{
	setOfficerName(n);
	setBadgeNumber(b);
	
}

PoliceOfficer::~PoliceOfficer()
{
	delete issueTicket;
}



//Mutators
void PoliceOfficer::setOfficerName(string n)
{
	officerName = n;
}

void PoliceOfficer::setBadgeNumber(string b)
{
	badgeNumber = b;
}


//Accessors
string PoliceOfficer::getOfficerName() const
{
	return officerName;
}

string PoliceOfficer::getBadgeNumber() const
{
	return badgeNumber;
}

//The patrol function calls the issueFine member functions

ParkingTicket * PoliceOfficer::patrol(ParkedCar car, ParkingMeter min)
{
	
	int minOverParked, minParked, minPurchased;	
	double fine;
	
	minParked = car.getMinParked();
	minPurchased = min.getMinPurchased();


//This seems to be where my program is failing and i've beenhaving issues trying to troubleshoot what it could be.	
	if (minParked > minPurchased)
	{
		minOverParked = minParked - minPurchased;
		ParkingTicket test(car, minOverParked);
		fine = test.getFine();
		issueTicket = &test;
	}
	
	return issueTicket;
}

ostream & operator<<(ostream &strm, PoliceOfficer &officer)
{
	strm << setw(20) << left << "Officer: " << setw(10) << right << officer.getOfficerName() << endl;
	strm << setw(20) << left << "Badge #: " << setw(10) << right << officer.getBadgeNumber() << endl;

	return strm;
}
