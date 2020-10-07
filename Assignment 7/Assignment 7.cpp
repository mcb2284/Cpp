#include <iostream>
#include <string>
#include <iomanip>
#include "BinaryTree.h"
#include "EmployeeInfo.h"
using namespace std;

const int NUM_NODES = 5;

int main()
{

	// Create the binary tree.
	BinaryTree<EmployeeInfo> tree;


	EmployeeInfo michael(5000);
	michael.setEmpInfo("Michael", "123 Mitchell Blvd.", "Los Angeles", "CA", "123456789");
	michael.setHireDate(18, 5, 1993);
	tree.insertNode(michael);

	EmployeeInfo jared(5001);
	jared.setEmpInfo("Jared", "456 Mitchell Blvd.", "Columbus", "CA", "123456789");
	jared.setHireDate(21, 4, 2019);
	tree.insertNode(jared);

	EmployeeInfo steven(5002);
	steven.setEmpInfo("Steven", "789 Mitchell Blvd.", "Eddison", "CA", "123456789");
	steven.setHireDate(05, 12, 2008);
	tree.insertNode(steven);

	EmployeeInfo edward(5003);
	edward.setEmpInfo("Edward", "987 Mitchell Blvd.", "Westwood", "CA", "123456789");
	edward.setHireDate(01, 1, 2001);
	tree.insertNode(edward);

	EmployeeInfo able(5004);
	able.setEmpInfo("Able", "654 Mitchell Blvd.", "Savannah", "CA", "123456789");
	able.setHireDate(19, 12, 2012);
	tree.insertNode(able);

	EmployeeInfo james(5005);
	james.setEmpInfo("James", "321 Mitchell Blvd.", "Winchestertownfieldville", "CA", "123456789");
	james.setHireDate(20, 4, 1969);
	tree.insertNode(james);

	EmployeeInfo luis(5006);
	luis.setEmpInfo("Luis", "413 Victory Ln.", "Springfield", "WA", "123456789");
	luis.setHireDate(30, 4, 2015);
	tree.insertNode(luis);

	EmployeeInfo sally(5007);
	sally.setEmpInfo("Sally", "520 Victory Ln.", "Helena", "WA", "123456789");
	sally.setHireDate(02, 8, 2017);
	tree.insertNode(sally);

	EmployeeInfo patricia(5008);
	patricia.setEmpInfo("Patricia", "121 Victory Ln.", "Seattle", "CO", "123456789");
	patricia.setHireDate(18, 7, 2002);
	tree.insertNode(patricia);

	EmployeeInfo bonnie(5009);
	bonnie.setEmpInfo("Bonnie", "789 Victory Ln.", "Pheonix", "NY", "123456789");
	bonnie.setHireDate(12, 2, 2013);
	tree.insertNode(bonnie);

	EmployeeInfo meghan(5010);
	meghan.setEmpInfo("Meghan", "900 Victory Ln.", "Atlanta", "NY", "123456789");
	meghan.setHireDate(12, 2, 2013);
	tree.insertNode(meghan);

     // Display the values.
     cout << "\nHere are the values in the tree:\n";
     tree.displayInOrder();


	cout << "Press Enter to Exit\n";
	cin.ignore();

      return 0;
}