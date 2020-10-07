//The parking meter class holds the data for how many minutes were purchased at the parking meter
#pragma once
#include <iostream>
#include <iomanip>
using namespace std;



class ParkingMeter
{
private:
	//Private Member Variable
	int minPurchased;
public:
	//Constructors
	ParkingMeter();
	ParkingMeter(int);

	//Mutators
	void setMinPurchased(int);

	//Accessors
	int getMinPurchased() const;


	//Overloaded Output Operator
	friend ostream &operator << (ostream &, ParkingMeter &);
	
};

