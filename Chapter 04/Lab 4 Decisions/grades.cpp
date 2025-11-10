/*
    Programmer: Evelyn Barrera Castro
    Note: If I input -12 my output is "Process finished with exit code 0".
    Purpose: This program prints "You Pass" if a student's average is 60 or higher and prints "You Fail" otherwise
    Date modified: 02/05/2024
    Compiler used: CLion
*/

#include <iostream>
using namespace std;

int main()
{
	float average;	// holds the grade average

	cout << "Input your average grade: ";
	cin >> average;

	if (average > 100 || average < 0)
		cout << "You have entered an invalid grade.\n";
        

    else if (average >= 90) {
        cout << "You have received an A." << endl;
        cout << "You Passed." << endl; 
    }

    else if (average >= 80) {
        cout << "You have received a B" << endl;
        cout << "You Passed." << endl;
    }

    else if (average >= 70) {
        cout << "You have recieved a C." << endl;
        cout << "You have passed."; 
    }

    else if (average >= 60)
        cout << "You Passed" << endl;
    
    if (average <= 59 && average >= 0)
        cout << "You Failed" << endl;

	return 0;
}