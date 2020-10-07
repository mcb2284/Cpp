#include "ParkedCar.h"


//Constructors
ParkedCar::ParkedCar()
{
	setMinParked(0);
}


ParkedCar::ParkedCar(string make, string model, string year, string licenseNumber, int minutes)
{
	cardata.setMake(make);
	cardata.setModel(model);
	cardata.setYear(year);
	cardata.setLicenseNum(licenseNumber);
	setMinParked(minutes);
	
}

//Mutator
void ParkedCar::setMinParked(int m)
{
	minParked = m;
}

//Accessor
int ParkedCar::getMinParked() const
{
	return minParked;
}

//Overloaded Operator
ostream & operator<<(ostream &strm, ParkedCar &minParked)
{
	strm << setw(20) << left << "Minutes Parked: " << setw(10) << right << minParked.getMinParked() << endl;
	strm << minParked.cardata;

	return strm;
}
