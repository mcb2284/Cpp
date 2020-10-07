#include "Circle.h"


//SetRadius validates that the user input is greater than 0 else it set the radius to 0.
void Circle::SetRadius(double r)
{
	if (r < 0)
	{
		radius = 0;
	}
	else
	{
		radius = r;
	}
	
}

// Get radius outputs the radius of the circle.
double Circle::GetRadius()const 
{
	cout << "Radius: " << radius << endl;
	return radius;
}

//CalculateArea uses the pi(r*r) equation to calculate and output the Area of the circle
double Circle::CalculateArea() const
{
	double area;
	area = pi*(radius*radius);
	cout << "Area: " << area << endl;
	return area;
}


//CalculateCircumference uses the 2(pi*r) equation to calculate and output the Circumference of the circle
double Circle::CalculateCircumference() const 
{
	double circumference;
	circumference = 2 * pi*radius;
	cout << "Circumference: " << circumference << endl;
	return circumference;
}
//GetDiameter uses the 2*r equation to calculate and output the Diameter of the circle
double Circle::GetDiameter() const
{
	double diameter;
	diameter = 2 * radius;
	cout << "Diameter: " << diameter << endl;
	return diameter;
}

