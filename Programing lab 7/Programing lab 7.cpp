/*
The following program outputs student data from the student class. The purpose of this program is to test how static data types and methods are used in classes.
The static int is incremented when the constructor is called and then output using the outputcount() class member function.  in this example the count is output at 2.
If the count variables data type had not been static the count would have been reset evertime the constructor was called and the output would have been 1, but since it was static
the count held the value instead of re-initializing.

All comments concerning the class, vairables, and methods are located in the Student.h header file
*/

#include <iostream>
#include "Student.h"
using namespace std;

int main()
{

	Student rich(2);

	rich.DisplayStudent();

	Student mary(2);

	mary.DisplayStudent();

	cout << "The constructor was called " << Student::DisplayCount() << " times\n";
	cout << "Press Enter to Exit: \n";
	cin.ignore();

	return 0;
}


