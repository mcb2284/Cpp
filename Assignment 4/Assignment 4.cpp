#pragma once
#include "Derived.h"
using namespace std;


void pauseProgram();

int main()
{
	LinkedList<int>* myList = new LinkedList<int>();

	myList->appendNode(5);
	myList->appendNode(6);
	myList->appendNode(7);
	myList->displayList();
	myList->insertNode(3);
	myList->displayList();
	myList->deleteNode(3);
	myList->displayList();
	
	//cout << "The highest number in the list is " << myList->getHighest() << endl;
	//cout << "The lowest number in the list is " << myList->getLowest() << endl;


	pauseProgram();
	return 0;
}


void pauseProgram()
{
	cout << "Press Enter to Exit. \n";
	cin.ignore();
}