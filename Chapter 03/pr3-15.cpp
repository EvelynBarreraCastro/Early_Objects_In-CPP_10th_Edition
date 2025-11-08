// This program demonstrates how the setprecision manipulator 
// affects the way a floating-point value is displayed.

#include <iostream>
#include <iomanip>       // Header file needed to use setprecision
using namespace std;

int main()
{
	double number1 = 132.364, number2 = 26.91;
	double quotient = number1 / number2;

	cout << quotient << endl; 				     // 4.91877
	cout << setprecision(5) << quotient << endl; // 4.9188
	cout << setprecision(4) << quotient << endl; // 4.919
	cout << setprecision(3) << quotient << endl; // 4.92
	cout << setprecision(2) << quotient << endl; // 4.9
	cout << setprecision(1) << quotient << endl; // 5
	// Note: the count starts from [0,1,2,3,4,5, ...] and that it automaticall rounds up the number if it does not fix!

	return 0;
}
