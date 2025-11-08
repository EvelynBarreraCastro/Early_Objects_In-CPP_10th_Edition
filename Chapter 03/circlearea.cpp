/* 
    Programmer: Evelyn Barrera Castro
    Purpose: This program will output the circumference and area of the circle with a given radius.
    Date modified: 02/02/2024
    Compiler used: CLion
*/ 

#include <iostream>
using namespace std;

const double PI = 3.14;
const double RADIUS = 5.4;

int main()
{
    // Assigning variables to datatypes
	float area;							
	float circumference;			

    circumference = 2 * PI * RADIUS;	    // computes circumference
	area = PI * RADIUS * RADIUS;		    // computes area

    // Outputs the circumference
    cout << "Circumference of the circle: " << circumference << endl;

    // Outputs the area
    cout << "Area of the circle: " << area << endl;
    cout << endl; 

	return 0;
}