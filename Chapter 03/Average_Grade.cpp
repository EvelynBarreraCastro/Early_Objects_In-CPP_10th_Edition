/*  
    Programmer: Evelyn Barrera Castro
    Description: The main idea of this program is to calculate the average grade amongst 3 grades. 
                 Shows simple calculation.
*/ 

#include <iostream>
#include <iomanip>  // input & output manipulation
using namespace std;

int main()
{   
    // using the datatype float = holds 32 bits
    float a, b, c, avg;

    // The following prompts user for their grades and then divides it by 3 to get the average.
    cout << "Please input the first grade ";
    cin >> a ;
    cout << "Please input the second grade ";
    cin >> b ;
    cout << "Please input the third grade ";
    cin >> c ;

    avg = (a + b + c ) / 3;
    cout << setprecision (2);
    cout << fixed << "The average of the three grades is " << avg << "%" << endl;

    return 0;

}