#pragma once 
#include "TimeOff.h"
using namespace std;


//Constructors

//The default constructor initializes the TimeOff instance with 80 hours of sick days (10 days), 240 hours of vacation days (30), and 80 hours of unpaid time off (10 days)
//The days taken variable are initialized as zero
TimeOff::TimeOff()
{

	maxSickDays.setHours(80.00);
	maxVacation.setHours(240.00);
	maxUnpaid.setHours(80.00);

	sickTaken.setHours(0.00);
	vacTaken.setHours(0.00);
	unpaidTaken.setHours(0.00);
};

//the overloaded constructor accepts arguments to initialize the days taken variables with a value other than zero.
TimeOff::TimeOff(double s, double v, double u)
{
	maxSickDays.setHours(80.00);
	maxVacation.setHours(240.00);
	maxUnpaid.setHours(80.00);	

	setSickTaken(s);
	setVacTaken(v);
	setUnpaidTaken(u);
};





//Accessors

//All accessors return the information they are named after
string TimeOff::getName() const
{
	return empName;
}

int TimeOff::getNum() const
{
	return empNum;
}

double TimeOff::getMaxSick()const 
{
	return maxSickDays.getDays();
}

double TimeOff::getSickTaken()const
{
	return sickTaken.getDays();
}

double TimeOff::getMaxVacation()const
{
	return maxVacation.getDays();
}

double TimeOff::getVacTaken()const
{
	return vacTaken.getDays();
}

double TimeOff::getMaxUnpaid()const
{
	return maxUnpaid.getDays();
}

double TimeOff::getUnpaidTaken()const
{
	return unpaidTaken.getDays();
}




//Mutators

//The following Max days mutators are dependent on the daysTaken mutators. This allow the program to output how many day the empolyee has available for a given type 
//While also ensuring the employee can't take more than they are alotted.  Each mutator works in effectively the same manor and stores the info in the respective 
//variable
void TimeOff::setMaxSick(NumDays s)
{
	double temp(0);
	temp = maxSickDays.getDays() - sickTaken.getDays();
	maxSickDays.setDays(temp);
}

void TimeOff::setSickTaken(double s) 
{
	//The if statement validates that the user is only requesting days they have earned
	if (s > maxSickDays.getDays() || s < 0)
	{
		cout << "Error: You request for " << s << " sick days was invalid\n";
		cout << "You have " << maxSickDays.getDays() << " sick days available.\n";
	}
	//once the days are validated they are stored in their respective object and the maxDays class is updated to reflect they have taken those days.
	else
	{
		sickTaken.setDays(s);
		setMaxSick(sickTaken.getDays());	
	}
	
}




void TimeOff::setMaxVacation(NumDays v)
{
	double temp(0);
	temp = maxVacation.getDays() - vacTaken.getDays();
	maxVacation.setDays(temp);

}

void TimeOff::setVacTaken(double v)
{
	

	if (v > maxVacation.getDays() || v < 0)
	{
		cout << "Error: You request for " << v << " vacation days was invalid\n";
		cout << "You have " << maxVacation.getDays() << " vacation days available.\n";
	}
	else
	{
		vacTaken.setDays(v);
		setMaxVacation(vacTaken.getDays());
	
	}


}


void TimeOff::setMaxUnpaid(NumDays u)
{
	double temp;
	temp = maxUnpaid.getDays() - unpaidTaken.getDays();
	maxUnpaid.setDays(temp);
}

void TimeOff::setUnpaidTaken(double u)
{
	if (u > maxUnpaid.getDays() || u < 0)
	{
		cout << "Error: You request for " << u << " unpaid days was invalid\n";
		cout << "You have " << maxUnpaid.getDays() << " unpaid days available.\n";
	}
	else
	{
		unpaidTaken.setDays(u);
		setMaxUnpaid(unpaidTaken.getDays());
	}
}



//Overloaded operators
//the overloaded output operator outputs the information stored in the object in a table format.
ostream &operator << (ostream &strm, const TimeOff &empInfo)//Overloaded << output operator
{
	strm << setprecision(2) << fixed << endl;
	strm << setw(25) << left << "Employee Name: " << setw(30) << right << empInfo.getName() << endl;
	strm << setw(25) << left << "Employee Number: " << setw(30) << right << empInfo.getNum() << endl;
	strm << setw(25) << left << "Sick Days Available: " << setw(30) << right << empInfo.getMaxSick() << endl;
	strm << setw(25) << left << "Vacation Days Available: " << setw(30) << right << empInfo.getMaxVacation() << endl;
	strm << setw(25) << left << "Unpaid Days Available: " << setw(30) << right << empInfo.getMaxUnpaid() << endl;

	return strm;
};
