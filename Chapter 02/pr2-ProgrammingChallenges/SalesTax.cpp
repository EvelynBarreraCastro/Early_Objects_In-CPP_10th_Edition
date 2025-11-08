/*
    Programmer: Evelyn Barrera Castro
    Date: June 25, 2025
    Compiler: Clang++ / g++ via VSCode
    Description: This program calculates the total price including taxes. 
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main () {

    double item_price = 95, 
           state_tax = 0.065,
           county_tax = 0.020,
           total_tax, total_cost;
    
    // total tax calculation: should be 8.5% in tax
    total_tax = state_tax + county_tax;

    // calculate total tax amount: should be $8.07
    total_tax = item_price * total_tax; 

    // Add price item and total tax amount 
    total_cost = item_price + total_tax; 

    // Print out to user
    cout << fixed << setprecision(2); 
    cout << "Given that the price item is $95 and the total tax sales is 8.5%\n";
    cout << "The total cost of the item is $" << total_cost << endl;

    return 0; 
}