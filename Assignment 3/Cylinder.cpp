#include "Cylinder.h"



//Constructors
template <class T>
Cylinder<T>::Cylinder()
{
	radius = 0;
	height = 0;
}


template <class T>
Cylinder<T>::Cylinder(double r, double h)
{
	setRadius(r);
	setHeight(h);
}

//Mutators
template <class T>
void Cylinder<T>::setRadius(double r)
{
	radius = r;
}

template <class T>
void Cylinder<T>::setHeight(double h)
{
	height = h;
}

//Accessors
template <class T>
double Cylinder<T>::getRadius() const
{
	return radius;
}


template <class T>
double Cylinder<T>::getHeight() const
{
	return height;
}

//Member functions
template <class T>
T Cylinder<T>::findArea()
{
	if (radius < 0)
	{
		throw NegRadius();
	}
	else if (height < 0)
	{
		throw NegHeight();
	}
	else
		area = 2 * (pi * radius * height);
		area += 2 * (pi * pow(radius, 2));
		return area;
	

}
template <class T>
T Cylinder<T>::findVolume()
{
	if (radius < 0)
	{
		throw NegRadius();
	}
	else if (height < 0)
	{
		throw NegHeight();
	}
	else
		volume = pi * (pow(radius, 2) * height);
		return volume;
}

