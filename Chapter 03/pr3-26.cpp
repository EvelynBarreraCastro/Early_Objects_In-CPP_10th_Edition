// This program uses setw with the cin object.

#include <iostream>
#include <iomanip>       // Header file needed to use stream manipulators
using namespace std;

int main()
{	

	const int SIZE = 5;		// Declares SIZE to 5
    char word[SIZE];		// Creating an Array known as word with the memory cell size of 5
							// word[5] = [0,1,2,3,4,5]

	// Prompt user for a word
	cout << "Enter a word: ";

	// Set wdith of 5 to "word" & console out
	cin  >> setw(5) >> word;
	cout << "You entered " << word << endl;

	return 0;
}
