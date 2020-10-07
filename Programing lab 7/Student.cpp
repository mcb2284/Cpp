#include "Student.h"


Student::Student(int numGrades)
{
	quanity = numGrades;
	grades = new int[numGrades];
	name = "rich";
	grades[0] = 88;
	grades[1] = 96;
	count++;

}

Student::~Student()
{
	delete[] grades;
}

void Student::DisplayStudent()
{
	cout << "Grades for " << name << endl;

	for (int index = 0; index < quanity; index++)
	{
		cout << *(grades + index) << endl;

	}
}

int Student::count = 0;
 
int Student::DisplayCount()
{
	return count;
}
