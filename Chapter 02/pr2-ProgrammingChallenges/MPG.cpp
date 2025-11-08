/*
    Programmer: Evelyn Barrera Castro 
    Date: June 25, 2025
    Compiler: clang++ / g++ via VSCode
    Description: The car holds 16 gallons, can travel 312, calculate the total miles per gallon. 

    This program displays the distance a car can travel on 
    one tank of gas when driven in town and when driven on the highway.
*/

#include <iostream> 
using namespace std; 

int main () {
    double miles = 312, gallons = 16, mpg; 

    // calculations
    mpg = miles / gallons; 

    cout << "The car holds " << gallons << " gallons and can run for " << miles <<" miles. " << endl;
    cout << "The total miles per gallon is " << mpg << endl; 

    return 0;
}
