// This program has a variable.

#include <iostream>
using namespace std;

int main()
{
	// the following line shows the variable. 
	int number;

	// here we see the variable assigned with the value of 5
	number = 5;
	cout << "The value of number is " <<  number  << endl;

	// the variable gets reassigned the value of 7
	number = 7;
	cout << "Now the value of number is " << number << endl;
	
	return 0;
}

// note how the same variable gets reassigned a new value as the program runs 
// this is important to understand in programming