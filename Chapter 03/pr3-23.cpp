// This program displays the user's name surrounded by stars.
// It uses the + operator and several string class member functions.

#include <iostream>
#include <string>       // Header file needed to use string objects
using namespace std;

int main()
{
	string firstName, lastName, fullName;
	string stars;
	int numStars;
	
	// read in user's first name
    cout << "Please enter your first name: ";
	getline(cin, firstName);
	
	// read in user's last name
    cout << "Please enter your last name: ";
	getline(cin, lastName);
	
	// assign full name to = firstName + " " + lastNaem
	fullName = firstName + " " + lastName;
	
	// assign numStars to full name's length
	numStars = fullName.length();
	// assign stars to number of starts and associate that number with '*' symbol
	stars.assign(numStars, '*');
	
	// final output: empty line
	cout << endl;
	// display stars with corresponfing '*'
	cout << stars    << endl;
	// display user's fullname
	cout << fullName << endl;
	// display stars with corresponfing '*'
	cout << stars    << endl;
	cout << endl; 

	return 0;
}
