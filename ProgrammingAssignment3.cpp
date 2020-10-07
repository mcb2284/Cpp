/*

The following program utilizes structures to 
hold sales data for a company. In side each structure 
will be the division and the sales for each quarter.

*/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


//The following defines the structure Division as a stuctrure that holds a string and 4 doubles.
struct Division
{
	string name;
	double quarter1;
	double quarter2;
	double quarter3;
	double quarter4;

};
//Function Prototypes
void GetDivisionSales(Division& div);
void DisplayDivision(Division div);




//The main initializes the names of the divisions in each structure then passes each variable through the proper funcitons.
int main()
{
	//The structure variable  is names after its respective division.
	Division east, west, north, south;

	east.name = "East";
	west.name = "West";
	north.name = "North";
	south.name = "South";

	GetDivisionSales(east);
	GetDivisionSales(west);
	GetDivisionSales(north);
	GetDivisionSales(south);

	DisplayDivision(east);
	DisplayDivision(west);
	DisplayDivision(north);
	DisplayDivision(south);

	return 0;
}


//The GetDivisisionSales() function gets a user input for the sales of each quater.
void GetDivisionSales(Division& div)
{
	
	cout << "Please enter the sales for the " << div.name << " Division";
	cout << "Quarter 1: \n";
	cin >> div.quarter1;
	cout << "Quarter 2: \n";
	cin >> div.quarter2;
	cout << "Quarter 3: \n";
	cin >> div.quarter3;
	cout << "Quarter 4: \n";
	cin >> div.quarter4;

	

}


//The DisplayDivision () function outputs the dvision name, quarterly sales, and the total sales of 
//each division. Since the sales are a monetary value they are output with a fixed set precision of 2.
void DisplayDivision(Division div)
{
	cout << setprecision(2) << fixed << endl;
	cout << "Sales amount for the " << div.name << " Division" << endl;
	cout << setw(20) << right << div.quarter1 << endl;
	cout << setw(20) << right << div.quarter2 << endl;
	cout << setw(20) << right << div.quarter3 << endl;
	cout << setw(20) << right << div.quarter4 << endl;
	cout << "Total Sales " << right << div.quarter1 + div.quarter2
		+ div.quarter3 + div.quarter4 << endl;

	cout << "Press Enter to Exit: \n";
	cin.ignore();
}