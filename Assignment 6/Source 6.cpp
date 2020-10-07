/*
The following program uses the Circle class to calculate the area, circumference, and diameter of a circle using the radius 
which was input by the user. If the user inputs a negative number then the radius value will be automatically set to zero and all 
subsequent values will be zero as well. All comments for the member funtions will be located in Circle.cpp.
*/

#include <iostream>
#include <iomanip>
#include "Circle.h"

int main()
{
	Circle circle;
	double radius;
	
	cout << "Enter Radius: \n";
	cin >> radius;

	circle.SetRadius(radius);

	circle.GetRadius();
	circle.CalculateArea();
	circle.CalculateCircumference();
	circle.GetDiameter();


	cout << "Press Enter to Exit \n";
	cin.ignore();
	return 0;

}