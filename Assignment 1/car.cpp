#include "car.h"


//Constructor
car::car()
{
	make = "Make";
	model = "Model";
	year = "Year";
	licenseNum = "License Number";
}


//Mutators
void car::setMake(string x)
{
	make = x;
}

void car::setModel(string x)
{
	model = x;
}

void car::setYear(string y)
{
	year = y;
}

void car::setLicenseNum(string l)
{
	licenseNum = l;
}

//Accessors

string car::getMake() const
{
	return make;
}	

string car::getModel() const
{
	return model;
}

string car::getYear() const
{
	return year;
}

string car::getLicenseNum() const
{
	return licenseNum;
}

ostream & operator<<(ostream &strm, car &car)
{
	strm << setw(20) << left << "Make: " << setw(10) << right << car.getMake() << endl;
	strm << setw(20) << left << "Model: " << setw(10) << right << car.getModel() << endl;
	strm << setw(20) << left << "Year: " << setw(10) << right << car.getYear() << endl;
	strm << setw(20) << left << "License: " << setw(10) << right << car.getLicenseNum() << endl;

	return strm;

}
