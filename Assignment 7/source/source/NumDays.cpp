#include "NumDays.h"

//The default constructor for NumDays sets the days and hours to 0
NumDays::NumDays() 
{
	simplify();
	
}
//The overloaded constructor takes an input of hours and converts it to days then stores the data
NumDays::NumDays(double h)
{
	NumDays::hours = h;
	simplify();
	
}


//The simplify member function is used to convert hours to days when every 8 hours is equivalent to 1 day.
void NumDays::simplify()
{
	double test = 0;

		if (NumDays::hours >= 0)
		{
			test += (NumDays::hours / 8);
		}
		else if (NumDays::hours < 0)
		{
			test -= ((abs(NumDays::hours) / 8));
		}
	setDays(test);
}


//The addition operator allows the program to add NumDays class instances to include the hour to day ratio
NumDays NumDays::operator + (const NumDays &h)
{
	NumDays temp;	
	temp.hours = hours + h.hours;
	temp.days = days + h.days;
	simplify();
	return temp;
}

//The subtraction operator allows two instances of the NumDays class to be subtracted without messing with the hour/day ratio
NumDays NumDays::operator - (const NumDays &h)
{
	NumDays temp;
	temp.hours = hours - h.hours;
	temp.days = days - h.days;
	simplify();
	return temp;
}

//The following four prefix and postfix unary operators allow the NumDays class to increment the hours of an instance adding one day for every 8 hours or subtracting hours
//depending on which operator is used.
NumDays NumDays::operator++()
{
	++hours;
	simplify();
	return *this;
}

NumDays NumDays::operator--()
{
	--hours;
	simplify();
	return *this;
}

NumDays NumDays::operator++(int)
{
	NumDays temp;
	hours++;
	simplify();
	return temp;
}

NumDays NumDays::operator--(int)
{
	NumDays temp;
	hours--;
	simplify();
	return temp; 
}