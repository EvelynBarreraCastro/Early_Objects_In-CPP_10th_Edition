 /*
    PROGRAM: Payroll.cpp
    Written by Herbert Dorfmann
    This program calculates company payroll
    Last modified: 8/20/2012
 */

  #include <iostream>
  using namespace std;
 /*
   Original source code prompt: 

  int main()
  {
     int employeeID;   // Employee ID number 
     double payRate;   // Employees hourly pay rate
     double hours;     // Hours employee worked this week     

    (The remainder of this program is left out.)

   completed below: 
*/ 

int main () 
{
   int employeeID;   // Employee ID number
   double payrate,   // Employees hourly pay rate
          hours,     // Hours employee worked this week 
          totalPay; 
   
   cout << "Please input your employee ID number: "; 
   cin >> employeeID;

   // Prompts user for there current hourly rate
   cout << "What is your current hourly rate? ";
   cin >> payrate;

   // Prompts user for how many hours they've worked
   cout << "How many hours did you work this week? ";
   cin >> hours; 

   // Mathamatical calculation 
   totalPay = payrate * hours;
   
   // Informs user how much there pay will be
   cout << employeeID << " your toal pay is $" << totalPay << endl;



   return 0; 
}