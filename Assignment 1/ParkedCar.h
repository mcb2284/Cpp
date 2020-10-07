//The parked car class has an instance of the car class and holds the min parked. Also has asseccors for the data and an overloaded output operator.
#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include "car.h"
using namespace std;


class ParkedCar
{
private:
	car cardata;
	int minParked;
public:
	//Constructors
	ParkedCar();
	ParkedCar(string, string, string, string, int);

	//Mutators
	void setMinParked(int);
	
	//Accessors
	int getMinParked() const;  

	//Overloaded Output Operator
	friend ostream &operator << (ostream &, ParkedCar &);
};

