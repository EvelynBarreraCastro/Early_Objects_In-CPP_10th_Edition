// This program will determine the batting average of a player.
// The number of hits and at bats are set internally in the program as constants.

// Programmer: Evelyn Barrera

#include <iostream>
using namespace std;



int main()
{	
	// const ensures that the variable values remain unchanged. 
    const int AT_BAT = 421;
    const int HITS = 123;
	double batAvg;

	/*
	  statically casts "HITS" from int to double
	  this allows for the output to have decimals as a pose to no decimal places with int. 
	*/

	batAvg = static_cast<double>( HITS ) / AT_BAT;
	cout << "The batting average is " << batAvg << endl;	

	return 0;
}