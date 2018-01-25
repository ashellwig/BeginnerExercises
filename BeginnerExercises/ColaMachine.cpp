/**
 * @file
*/

#include <iostream>
#include <map>
#include <string>
#include <iterator>
#include "ColaMachine.h"
using namespace std;

/**
 * \brief Iterates though a list.
 * Also asks to choose one then outputs that.
*/
int cola()
{
	// Defines the dictionary
	map<int, string> sodaCollection;
	sodaCollection.insert(make_pair(1, "Coke"));
	sodaCollection.insert(make_pair(2, "Sprite"));
	sodaCollection[3] = "Coffee";
	sodaCollection[4] = "Boba";
	sodaCollection[5] = "Sake";

	// Prompt user
	cout << "Please chose a number from one of the following: " << endl;

	// Iterate through all elements
	cout << "Here are your options..." << endl;
	map<int, string>::iterator it = sodaCollection.begin();
	while (it != sodaCollection.end())
	{
		cout << it->first << " :: " << it->second << endl;
		it++;
	}



	// Do not immediatly exit
	system("pause");

	// Return
	return 0;
}
