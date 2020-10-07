/*
The Rectangle class hold all the data that relates to rectangles.
*/
#pragma once
#include "Shape.h"

template <class T>
class Rectangle :
	public Shape
{
	//Member Variables
	double length;
	double width;
	double height;
	
public:
	//Exception Class
	class NegLength {};
	class NegWidth {};
	class NegHeight{};

	//Constructors
	Rectangle();
	Rectangle(double, double, double);

	//Mutators
	void setLength(double);
	void setWidth(double);
	void setHeight(double);

	//Accessors
	double getLength() const;
	double getWidth() const;
	double getHeight() const;

	//Member Functions
	T findArea();
	T findVolume();

};

