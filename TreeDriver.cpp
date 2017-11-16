//TreeDriver.cpp
// Programmer: Tabitha Roemish
// Date: November 8, 2017
// File contains: main()
#include <iostream>

#include "BST.h"

int main()
{
	BST RH;
	BST LH;
	BST Bal;
	int RightHeavy[] = { 5, 15, 7, 9, 30, 17, 8, 6, 20, 10 };
	int LeftHeavy[] = { 30, 20, 25, 10, 13, 5, 26, 29, 15, 3 };
	int Balanced[] = { 20, 15, 25, 10, 17, 24, 30, 5, 31, 28, 14 };

	// Right Heavy demonstrations
	cout << "Inserts for right-unbalanced Tree are: 5, 15, 7, 9, 30, 17, 8, 6, 20, 10" << endl;
	for (int i = 0; i < sizeof(RightHeavy) / sizeof(int); i++)
		RH.insert(RightHeavy[i]);

	cout << "In Order traversal is: ";
	RH.printInOrder(cout, RH.getRoot());
	cout << endl;

	cout << "PreOrder Traversal is: ";
	RH.printPreOrder(cout, RH.getRoot());
	cout << endl;

	cout << "PostOrder Traversal is: ";
	RH.printPostOrder(cout, RH.getRoot());
	cout << endl;

	cout << "Breadth Order is: ";
	RH.printBreadthFirst(cout, RH.getRoot());
	cout << endl;
	cout << endl;

	//Left Heavy Demonstrations
	cout << "Inserts for left-unblanced Tree are: 30, 20, 25, 10, 13, 5, 26, 29, 15, 3" << endl;
	for (int i = 0; i < sizeof(LeftHeavy) / sizeof(int); i++)
		LH.insert(LeftHeavy[i]);

	cout << "In Order traversal is: ";
	LH.printInOrder(cout, LH.getRoot());
	cout << endl;

	cout << "PreOrder Traversal is: ";
	LH.printPreOrder(cout, LH.getRoot());
	cout << endl;

	cout << "PostOrder Traversal is: ";
	LH.printPostOrder(cout, LH.getRoot());
	cout << endl;

	cout << "Breadth Order is: ";
	LH.printBreadthFirst(cout, LH.getRoot());
	cout << endl;
	cout << endl;

	//Balanced Tree Demonstrations
	cout << "Inserts for balanced Tree are: 20, 15, 25, 10, 17, 24, 30, 5, 31, 28, 14" << endl;
	for (int i = 0; i < sizeof(Balanced) / sizeof(int); i++)
		Bal.insert(Balanced[i]);

	cout << "In Order traversal is: ";
	Bal.printInOrder(cout, Bal.getRoot());
	cout << endl;

	cout << "PreOrder Traversal is: ";
	Bal.printPreOrder(cout, Bal.getRoot());
	cout << endl;

	cout << "PostOrder Traversal is: ";
	Bal.printPostOrder(cout, Bal.getRoot());	cout << endl;

	cout << "Breadth Order is: ";
	Bal.printBreadthFirst(cout, Bal.getRoot());
	cout << endl;

	cin.get();

	return 0;
}
