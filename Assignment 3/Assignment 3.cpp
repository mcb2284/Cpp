/*
The following program calculates the area or volume of a rectangular prism or a cylinder. Everything worked well until i defined The member functions as templates and now im getting errors
I think the problem lies in the header files for each of the shapes but i can't seem to narrow it down.
*/



#include <iostream>
#include <string>
#include <iomanip>
#include "Rectangle.h"
#include "Cylinder.h"
using namespace std;


//Function prototypes
bool userPath();
int displayMenu();
void rectArea();
void rectVolume();
void cyArea();
void cyVolume();

//the main simply loops the userpath funciton until the user wants to exit the program
int main()
{

	bool exitPath = false;

	while (!exitPath)
	{
		exitPath = userPath();
	}


	return 0;
}


//The user path gets the user choice from the displayMenu function and uses a switch statement to ensure the user gets the data they requested
bool userPath()
{
	int choice = 0;
	bool exit = false;

	while (choice < 1 || choice > 5)
	{
		choice = displayMenu();
	}
	

	switch (choice)
	{
	case 1:
	{
		rectArea();
		break;
	}
	case 2:
	{
		rectVolume();
		break;
	}
	case 3:
	{
		cyArea();
		break;
	}
	case 4:
	{
		cyVolume();
		break;
	}
	default:
		exit = true;
		cin.ignore();
		cout << "Press Enter to Exit: ";
		cin.ignore();
		break;
	}

	return exit;
}

//Display menu shows the capabilities of the program and decides what to do base on the user input.
int displayMenu()
{
	int choice;

	cout << "Please choose and option: \n";
	cout << "1. Find Area of a Rectangular Prism. \n";
	cout << "2. Find Volume of a Rectangular Prism. \n";
	cout << "3. Find Area of a Cylinder. \n";
	cout << "4. Find Volume of a Cylinder. \n";
	cout << "5. Exit Program. \n";
	cin >> choice;

	return choice;
}

//The following functions gets a user input for all the data members needed 
//to calculate the area or volume for the 
// neccessary shape then uses
// the objects member functions to get the area.
// They also have the catches for the exceptions


//Gets the rectangle area
void rectArea()
{

	double length, width, height, area;
	bool tryAgain = true;

	cout << "Length: ";
	cin >> length;
	cout << "Width: ";
	cin >> width;
	cout << "Height: ";
	cin >> height;

	Rectangle<double> temp(length, width, height);


	while (tryAgain)
	{
		try
		{
			area = temp.findArea();
			tryAgain = false;
		}
		catch (Rectangle<double>::NegLength)
		{
			cout << "Error: " << temp.getLength() << " is invalid. Length must be a positive number.\n";
			cout << "Re-Enter length: ";
			cin >> length;
			temp.setLength(length);
		}
		catch (Rectangle<double>::NegWidth)
		{
			cout << "Error: " << temp.getWidth() << " is invalid. Width must be a positive number.\n";
			cout << "Re-Enter width: ";
			cin >> width;
			temp.setWidth(width);
		}
		catch (Rectangle<double>::NegHeight)
		{
			cout << "Error: " << temp.getHeight() << " is invalid. Height must be a positive number.\n";
			cout << "Re-Enter height: ";
			cin >> height;
			temp.setWidth(height);
		}

	}


	cout << "\nThe suface area of the rectangle is " << area << endl;
	cin.ignore();
	cout << "Press Enter to Continue: \n";
	cin.ignore();

}

//Gets rectangle volume
void rectVolume()
{
	double length, width, height, volume;
	bool tryAgain = true;

	cout << "Length: ";
	cin >> length;
	cout << "Width: ";
	cin >> width;
	cout << "Height: ";
	cin >> height;

	Rectangle<int> temp(length, width, height);


	while (tryAgain)
	{
		try
		{
			volume = temp.findVolume();
			tryAgain = false;
		}
		catch (Rectangle<int>::NegLength)
		{
			cout << "Error: " << temp.getLength() << " is invalid. Length must be a positive number.\n";
			cout << "Re-Enter length: ";
			cin >> length;
			temp.setLength(length);
		}
		catch (Rectangle<int>::NegWidth)
		{
			cout << "Error: " << temp.getWidth() << " is invalid. Width must be a positive number.\n";
			cout << "Re-Enter width: ";
			cin >> width;
			temp.setWidth(width);
		}
		catch (Rectangle<int>::NegHeight)
		{
			cout << "Error: " << temp.getHeight() << " is invalid. Height must be a positive number.\n";
			cout << "Re-Enter height: ";
			cin >> height;
			temp.setWidth(height);
		}

	}


	cout << "\nThe volume of the rectangle is " << volume << endl;
	cin.ignore();
	cout << "Press Enter to Continue: \n";
	cin.ignore();

}

//Gets cylinder area
void cyArea()
{
	double radius, height, area;
	bool tryAgain = true;

	cout << "Radius: ";
	cin >> radius;
	cout << "Height: ";
	cin >> height;

	Cylinder<double> temp(radius, height);

	while (tryAgain)
	{
		try
		{
			area = temp.findArea();
			tryAgain = false;
		}
		catch (Cylinder<double>::NegRadius)
		{
			cout << "Error: " << temp.getRadius() << " is invalid. Radius must be a positive number.\n";
			cout << "Re-Enter radius: ";
			cin >> radius;
			temp.setRadius(radius);
		}
		catch (Cylinder<double>::NegHeight)
		{
			cout << "Error: " << temp.getHeight() << " is invalid. height must be a positive number.\n";
			cout << "Re-Enter Height: ";
			cin >> height;
			temp.setHeight(height);
		}

	}
	cout << "\nThe suface area of the cylinder is " << temp.findArea() << endl;
	cin.ignore();
	cout << "Press Enter to Continue: \n";
	cin.ignore();

}


//gets cylinder volume
void cyVolume()
{
	double radius, height, volume;
	bool tryAgain = true;

	cout << "Radius: ";
	cin >> radius;
	cout << "Height: ";
	cin >> height;

	Cylinder<int> temp(radius, height);

	while (tryAgain)
	{
		try
		{
			volume = temp.findVolume();
			tryAgain = false;
		}
		catch (Cylinder<int>::NegRadius)
		{
			cout << "Error: " << temp.getRadius() << " is invalid. Radius must be a positive number.\n";
			cout << "Re-Enter radius: ";
			cin >> radius;
			temp.setRadius(radius);
		}
		catch (Cylinder<int>::NegHeight)
		{
			cout << "Error: " << temp.getHeight() << " is invalid. height must be a positive number.\n";
			cout << "Re-Enter Height: ";
			cin >> height;
			temp.setHeight(height);
		}

	}


	cout << "\nThe Volume of the cylinder is " << temp.findVolume() << endl;
	cin.ignore();
	cout << "Press Enter to Continue: \n";
	cin.ignore();
}
