/*
The cylinder class holds all the data as it relates to a cylinder.
*/
#pragma once
#include <cmath>
#include "Shape.h"

template <class T>
class Cylinder :
	public Shape
{
private:
	//Member Variables
	double radius;
	double height;
	const double pi = 3.14159;
public:

	//Exceptions Class
	class NegRadius {};
	class NegHeight {};

	//Constructors
	Cylinder();
	Cylinder(double, double);

	//Mutators
	void setRadius(double);
	void setHeight(double);

	//Accessors
	double getRadius() const;
	double getHeight() const;

	//Member Variables
	T findArea();
	T findVolume();
};

