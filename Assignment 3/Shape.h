/*
The shape class is the base class for all the shapes holding the data the other shapes have in common.
In this cass it only happens to be the area and the volume. Since finding the area and volume require 
different algorithms the mutator/accessors are in the dervived classes.
*/
#pragma once
class Shape
{
protected:
	double area;
	double volume;
public:
	Shape();
};

