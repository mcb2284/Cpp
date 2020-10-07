/*
the timeoff class stores and outputs the vacation, sick, and unpaid days available to a given employee
*/

#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include "NumDays.h"
using namespace std;

class TimeOff
{
private:
	//Employee Name
	string empName = "John Doe";
	//Employee ID
	int empNum = 100;
	//maximum number of sick days
	NumDays maxSickDays;
	//sick days used by employee
	NumDays sickTaken;
	//Maximum number of vacation days to be used
	NumDays maxVacation;
	//Number of vacation days used so far
	NumDays vacTaken;
	//Maximum number of unpaid vacation
	NumDays maxUnpaid;
	//number of unpaid vacation days already taken
	NumDays unpaidTaken;

	void setMaxSick(NumDays s);
	void setMaxVacation(NumDays v);
	void setMaxUnpaid(NumDays u);


public:

	//Constructors
	TimeOff();
	TimeOff(double s, double v, double u);


	//Accessors
	string getName() const;
	int getNum() const;
	double getMaxSick() const;
	double getSickTaken() const;
	double getMaxVacation()const;
	double getVacTaken() const;
	double getMaxUnpaid() const;
	double getUnpaidTaken()const;
	

	//Mutators
	void setSickTaken(double s);
	void setVacTaken(double v);
	void setUnpaidTaken(double u);

	//overloaded output operator
	friend ostream &operator << (ostream &, const TimeOff &);
};
