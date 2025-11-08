// This program shows variable initialization.
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string month = "February";    // month is initialized to "February"  
	int year,                     // year is not initialized
	    days  = 29;               // days is initialized to 29
	    
	year = 1776;                  // Now year is assigned a value

	cout << "In "   << year << " " << month
		 << " had " << days << " days.\n";

	return 0;
}

/*
 	Note: The difference in a variable assignment vs Initialization.
	Variable Assignment --> To give a variable a value when it is defined by a datatype. 
	Initialization --> To give a variable a datatype like int or double etc etc... 

	This also shows how the 2 process don't have to be done at once but that it can be done in 
	seperate lines so long as its assigning a datatype first and then assigning a value. 
	Ex: int year = 1776;
*/