/*
    Programmer: Evelyn Barrera Castro
    Date: June 25, 2025
    Comipler: clang++ / g++ via VSCode
    Description: Provides meal cost, tip, tax, and the final total.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    double meal_cost = 44.50, 
           tax = 0.0675, 
           tip = 0.15, 
           total_mealCost;
    
    cout << "In a resturant the meal cost is $" << meal_cost << " the sales tax is 6.75%, and the tip is 15% \n";

    cout << fixed << setprecision(2); // sets values to 2 decimal places
    
    // final calculations of the meal
    tax = meal_cost * tax; // reassign value of tax to $3.00
    tip = meal_cost * tip; // reassign value of tip to $6.67
    total_mealCost = meal_cost + tax + tip; 

    // Prints out final calculation to users
    cout << "The final bill is $" << total_mealCost << endl;

    return 0;
}