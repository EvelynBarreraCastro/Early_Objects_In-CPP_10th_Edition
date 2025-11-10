/* 
    Programmer: Evelyn Barrera Castro
    Purpose: This program illustrates the use of logical operators
    Date modified: 02/05/2024
    Compiler used: CLion
*/  


#include <iostream>
using namespace std;

int main()
{
    int year;
    float gpa;

    cout << "\nWhat is your current standing as a student?\n" << endl;
    cout << "Select from the following options bellow:\n";
    cout << "1.freshman\n";
    cout << "2.sophomore\n"; 
    cout << "3.junior\n"; 
    cout << "4.senior\n\n";
    cin >> year;

    cout << "Enter your cumulative GPA: ";
    cin >> gpa;


    //Step 1: rewrite gpa >= 2.0 using the NOT operator which is !
    //this step gives us: if (!(gpa >= 2.0) && year == '4')
    //Step 3: Replacing.
    if ((gpa >= 2.00 && gpa <= 4.00) && year == 4)
        cout << "It is time to graduate soon..." << endl;


    //Step 3: Replace & Explain. 
    //Originally we had students with a GPA >= 2.0 or seniors will graduate.
    //& Students who are not seniors and have a GPA less than 2.0 will not graduate


    //Step 2: Replace year != '4' with year < 4 or year <= 3.
    //This step is valid because it allows any year less than 4.
    // Result: else if (year < '4' || gpa <2.0)
    else if (year < 4 && ( gpa > 0.00 && gpa < 4.00))
        cout <<"You need more schooling\n";

    else
        cout << "Invalid input in year selection, GPA, or both..." << endl;

    return 0;
}



