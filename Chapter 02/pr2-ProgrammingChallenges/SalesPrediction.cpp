/*  
    Programmer: Evelyn Barrera Castro (e.barrercastro@wsu.edu)
    Date: June 25, 2025
    Compiler: clang++ / g++ via VSCode
    Description: This program will display how much an East Coast company will generate in total revenue. 
    Given that the company makes 58 percent of total sales and last year it made $8.6 million dollars. 

*/

#include <iostream> 
#include <iomanip> 
using namespace std; 

int main () {

    double total_sales2024 = 8.6e6,
           percent_revenue = 0.58, 
           total_revenue; 

    // performing the math
    total_revenue = total_sales2024 * percent_revenue; 

    // Printing out the final revenue
    cout << fixed << setprecision(2);
    cout << "Given that the company last year made $8.6 million dollars and\n";
    cout << "the company keeps 58% of it the total profit made is " << total_revenue << endl;  

    return 0;
}


