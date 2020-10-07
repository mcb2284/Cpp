#pragma once
#include <iostream>
#include <iomanip>
using namespace std;
class Circle
{

public:
	void SetRadius(double r);
	double GetRadius() const;
	double CalculateArea() const;
	double CalculateCircumference() const;
	double GetDiameter() const;
private:
	const double pi = 3.14;
	double radius;
};

