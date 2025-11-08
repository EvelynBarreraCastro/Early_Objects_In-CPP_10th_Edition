// This program illustrates the how the showpoint, setprecision, and
// fixed manipulators operate both individually and when used together.

#include <iostream>
#include <iomanip>       // Header file needed to use stream manipulators
using namespace std;	 // preprocessor directive

int main()
{ 
	double x = 6.0;

	/*
		showpoint, setprecision, & fixed are manipulators used for controlling the formating of numbers in output streams
		showpoint: ensures that the decimal point and trailing zeros are displayed
		setprecision: controls the total number of set significant numbers are currently displayed
		fixed: fixed-point notation this preventing the use of scientific notation e.g. 1.23e+05
	*/
	
    cout << x << endl;
	cout << showpoint << x << endl;
	cout << setprecision(2) << x << endl;
	cout << fixed << x << endl;
		
	return 0;
}
