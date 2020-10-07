//The parking ticket class calculates the fine amount for a car whose time went over the paid amount
#pragma once
#include <iostream>
#include <string>
#include "ParkingMeter.h"
#include "ParkedCar.h"
using namespace std;



class ParkingTicket
{
private:
	//Private Member Variables
	ParkedCar cardata;
	double fine;
	int minOverTime;

public:
	//Constructors
	ParkingTicket();
	ParkingTicket(ParkedCar, int);

	//Mutators
	void setFine(double);
	void setMinOverTime(int);

	//Accessors
	double getFine() const;
	int getMinOverTime() const;


	//Member Functions
	void issueFine(int);

	//Overloaded Output Operator
	friend ostream &operator << (ostream &, ParkingTicket &);
	
};

