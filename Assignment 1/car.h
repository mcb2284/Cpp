//The Car class holds all the data for the car w/ simple accessors mutators
// and an overloaded output operator.
#pragma once
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class car
{
private:
	string make;
	string model;
	string year;
	string licenseNum;
public:
	//Constructors
	car();
	
	//Mutators
	void setMake(string);
	void setModel(string);
	void setYear(string);
	void setLicenseNum(string);


	//Accessors
	string getMake() const;
	string getModel() const;
	string getYear() const;
	string getLicenseNum() const;


	//Overloaded output operator
	friend ostream &operator << (ostream &, car &);


};

