#include "pch.h"
#include "Rectangle.h"


//Constructors
template <class T>
Rectangle<T>::Rectangle()
{	
	length = 0;
	height = 0;
	width = 0;
}

template <class T>
Rectangle<T>::Rectangle(double l, double w, double h)
{
	setLength(l);
	setWidth(w);
	setHeight(h);
}

//Mutators
template <class T>
void Rectangle<T>::setLength(double l)
{
		length = l;
}

template <class T>
void Rectangle<T>::setWidth(double w)
{
		width = w;
}

template <class T>
void Rectangle<T>::setHeight(double h)
{
	height = h;
}


//Accessors
template <class T>
double Rectangle<T>::getLength() const
{
	return length;
}

template <class T>
double Rectangle<T>::getWidth() const
{
	return width;
}

template <class T>
double Rectangle<T>::getHeight() const
{
	return height;
}


//Memeber Functions
template <class T>
T Rectangle<T>::findArea()
{
	if (length < 0)
	{
		throw NegLength();
	}
	else if (width < 0)
	{
		throw NegWidth();
	}
	else if (height < 0)
	{
		throw NegHeight();
	}
	else
		area = (length * width) + (length * height) + (width * height);
		area *= 2;

		return area;
}

template <class T>
T Rectangle<T>::findVolume()
{
	if (length < 0)
	{
		throw NegLength();
	}
	else if (width < 0)
	{
		throw NegWidth();
	}
	else if (height < 0)
	{
		throw NegHeight();
	}
	else
		volume = length * width * height;

		return volume;
}

