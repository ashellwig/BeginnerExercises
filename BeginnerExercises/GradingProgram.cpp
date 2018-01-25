/**
* @file
*/
#include <iostream>
#include "GradingProgram.h"
using namespace std;

int grade()
{
	// Variables
	int a;
	int b;
	b = 100;
	cout << "Please enter your grade percentage (integers only): " << endl;
	cin >> a;

	// Compares the grade
	if (a == b)
		cout << "Your score is equal to 100, Perfect!" << endl;
	else
		cout << "Your score could be higher..." << endl;

	// Goodbye!
	cout << "Goodbye!" << endl;
	system("pause");
	return 0;
}
