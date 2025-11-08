// This program uses cin >> to read a word into a C-string.

#include <iostream>
using namespace std;

int main()
{	
	// sets an array known as name with 12 memory sells stored into a char datatype
	const int SIZE = 12; // [0,1,2,3,4,5,6,7,8,9,10,11,12]
    char name[SIZE];     // name is a set of 12 memory cells
	
	cout << "Please enter your first name: ";
	cin  >> name;

	cout << "Hello, " << name << endl;

	return 0;
}
