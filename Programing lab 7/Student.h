#pragma once
#include <string>
#include <iostream>
using namespace std;

//The class we are defining is the student class
class Student
{
public:
	//The Student constructor initializes with the number of grades and uses that vairable to dynamically allocated memory to story the grades for that student.
	//everytime there is an instance of this constructor the count is incremented by 1.
	Student(int numGrades);
	//The purpose of the deconstructor is garbage disposal.  It frees up the memory used by the array in the constructor.
	~Student();
	//The DisplayStudent method outputs all the data initialized in the constructor.
	void DisplayStudent();
	//The DisplayCount method and the cout are the static variables uses to count the about of times the constuctor is called.
	static int DisplayCount();
	static int count;

private:
	
	string name;
	int* grades;
	int quanity;
};


