/*
The following class is used to convert the hours to days 
*/

#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

//class name
class NumDays
{
private:
	//member variables
	double hours;
	double days;
	//Converts Hours to Days
	void simplify();
public:
	//Constructors
	NumDays();
	NumDays(double temp);
	
	//Mutator functions
	void setDays(double d) 
	{
		days = d;

	}
	void setHours(double h)
	{
		hours = h;
		simplify();
	}
	//Accessor Functions
	double getDays() const
	{
		return days;
	}
	double getHours() const 
	{
		return hours;
	}

	//Overloaded Operators
	NumDays operator + (const NumDays &h); //Overloaded +
	NumDays operator - (const NumDays &h); //Overloaded -
	NumDays operator ++ (); //Overloaded Prefix ++
	NumDays operator -- (); //Overloaded Prefix --
	NumDays operator ++ (int); //Overloaded Postfix ++
	NumDays operator -- (int); //Overloaded Postfix --
};