//The police officer class holds the information of the police officer issuing the ticket and is used to access the fine amount.
#pragma once
#include <iostream>	
#include <string>
#include <iomanip>
#include"ParkingTicket.h"
using namespace std;



class PoliceOfficer
{
private:
	//Private Member Variables
	string officerName;
	string badgeNumber;
	ParkingTicket* issueTicket = nullptr;
public:
	//Constructor
	PoliceOfficer();
	PoliceOfficer(string, string);
	~PoliceOfficer();

	//Mutators
	void setOfficerName(string);
	void setBadgeNumber(string);

	//Accessors
	string getOfficerName() const;
	string getBadgeNumber() const;

	//Member Functions
	ParkingTicket* patrol(ParkedCar, ParkingMeter);

	//Overloaded Operator 
	friend ostream &operator << (ostream &, PoliceOfficer &);
	
};

