/*
    Programmer: Evelyn Barrera Castro 
    Date: June 25, 2025
    Compiler: clang++ / g++ via VSCode
    Description: This program calculates and displays the number of square feet and
    the number of squared meters in 1/2 acre of land. 
    NOTE: 1 acre is equal to 43,560 square feet
          A square meter is equal to 10.7639 square feet. 
*/

#include <iostream> 
#include <iomanip> // setprecision
using namespace std;

int main () {
    const double one_Acre = 43560.0;
     const double SQ_FEET_PER_SQ_METER = 10.7639;

    double half_Acre_sq_ft = one_Acre / 2.0;
    double half_Acre_sq_meters = half_Acre_sq_ft / SQ_FEET_PER_SQ_METER;

    // print out information
    cout << fixed << setprecision(2); 
    cout << "Half an acre in square feet is " << half_Acre_sq_ft << endl;
    cout << "Half an acre in square meters is " << half_Acre_sq_meters << endl; 

    return 0;
}