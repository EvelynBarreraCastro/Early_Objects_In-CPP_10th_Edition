// This program demonstrates cin's getline function
// to read a line of text into a C-string.

#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 81;
	char sentence[SIZE];

	cout << "Enter a sentence: ";	// Prompts user for a sentence
	cin.getline(sentence, SIZE);	// reads in sentence but only with the capacity of 81 memmory cells

	cout << "You entered " << sentence << endl;

	return 0;
}
