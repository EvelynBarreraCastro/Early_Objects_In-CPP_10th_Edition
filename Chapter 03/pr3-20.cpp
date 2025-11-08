// This program illustrates using the getline function 
// to read character data into a string object.

#include <iostream>
#include <string>       // Header file needed to use string objects
using namespace std;

int main()
{
	string name;
	string city;

	/*
		getline() does the same as cin >>, it's always great to lean how to do the same thing but in different ways
		you can uncomment line 19 and 23 and commment out the getline functions to see how you'll get the same affect! 
	*/

	cout << "Please enter your name: ";
	getline(cin, name);
	// cin >> name;

	cout << "Enter the city you live in: ";
	getline(cin, city);
	// cin >> name; 

	cout << "Hello, " << name << endl; 
	cout << "You live in " << city << endl;

	return 0;
}
