/*
 	Programmer: Evelyn Barrera Castro
	Date: April 28, 2026
	Compiler: VSCode 
	Description: This program correctly averages 3 test scores.
				 fix, setprecision, showpoint are all streaming manipulators
				 fixed --> significant figures
	 			 setprecision --> decimal places
				 showpoint --> shows decimal point 4 sig figs
*/ 


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int score1, score2, score3;
	double average;

	// Get the three test scores
	cout << "Enter 3 test scores and I will average them: ";
	cin  >> score1 >> score2 >> score3;

	// Calculate and display the average score
	average = (score1 + score2 + score3) / 3.0;

	// fixed, 
	// setprecision allows for 2 decimal places && 
	cout << fixed << showpoint << setprecision(2);
	cout << "Your average is " << average << "%" << endl;

	// If the average equals 100, congratulate the user
	if (average == 100)
	{   cout << "Congratulations! ";
		cout << "That's a perfect score!\n";
	}
	return 0;
}
