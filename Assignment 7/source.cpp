#include <iostream>
#include <string>
#include "TimeOff.h"
#include "NumDays.h"
using namespace std;


int main() {


	//class instance using the default constructor
	TimeOff michael;
	cout << "This is the default output: " << endl;
	cout << michael << endl;


	//class instance using an overloaded constuctor
	TimeOff david(2, 10, 9);
	cout << "This is the over loaded output: " << endl;
	cout << david << endl;

	//Demostration of using the manipulators
	michael.setSickTaken(4);
	cout << michael << endl;

	//If you try and take more that available you will recieve an error message
	//and the information will remain unchanged.
	david.setUnpaidTaken(15);
	cout << david << endl;

	//Here is the copy constructor 
	david = michael;
	cout << "Michael: " << endl;
	cout << michael << endl;
	cout << "David: " << endl;
	cout << david << endl;


	cout << "Press Enter to Exit\n";
	cin.ignore();
	return 0;

}