#pragma once
#include "Derived.h"
using namespace std;

void pauseProgram();

int main()
{

	Derived<int>* myList = new Derived<int>();
	
	myList->appendNode(1);
	myList->displayList();
	myList->appendNode(2);
	myList->displayList();
	myList->appendNode(3);

	cout << "High: " << myList->getHigh() << endl;
	//cout << "Low: " << myList->getLow() << endl;

	cout << myList[1];

	delete myList;

	pauseProgram();
	return 0;
}

void pauseProgram()
{
	cout << "Press Enter to Exit \n	";
	cin.ignore();
}