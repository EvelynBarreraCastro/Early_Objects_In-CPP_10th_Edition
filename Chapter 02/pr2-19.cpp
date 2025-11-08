// This program can't find its variable.
#include <iostream>
using namespace std;

int main()
{	
	// this line of code must be on top so the program can process it correctly 
	int value = 100; 

	/*	
		I commented the error so I can fix it!
		cout << value;   // ERROR! value has not been defined yet!

		int value = 100; 
	*/ 

	cout << value; 
	
	return 0;
}
