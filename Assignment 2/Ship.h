/*
The ship class holds the name and year of a ship and serves as the base class for other ships. It has basic accessors, mutators, and features an overloaded assignement
operator.
*/
#pragma once
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Ship
{
protected:
	string name;
	int year;

public:
	//Constructors
	Ship();
	Ship(string, int);

	//Copy Constructor
	Ship(const Ship &);


	//Mutators
	void setName(string);
	void setYear(int);

	//Accessors
	string getName() const;
	int getYear() const;

	//Overloaded Assignment Operator
	const Ship operator= (const Ship &test);

	//Virtual member functions
	virtual void printData() const;



};

