// This program uses cin's width function.

#include <iostream>
#include <iomanip>       // Header file needed to use stream manipulators
using namespace std;

int main()
{
	const int SIZE = 5;		// sets SIZE = 5
	char word[SIZE];		// char word[5]


	cout << "Enter a word: ";

	cin.width(SIZE);	// cin >> width size of 5
	cin  >> word;       // outputs word with width of 5

	cout << "You entered " << word << endl;

	return 0;
}
