// This program displays the size of various data types.
#include <iostream>
using namespace std;

int main()
{
	double apple;

	cout << "The size of a short integer is " << sizeof(short) 
	     << " bytes.\n";
		  
	cout << "The size of a long integer is "  << sizeof(long) 
	     << " bytes.\n";
		  
	cout << "An apple can be eaten in " << sizeof(apple)
	     << " bytes!\n";
	
	return 0;
}

/*	
	Notes: 1 byte stores 8 bits. 
	So since "short int" holds 2 bytes --> it can store up to 16 bits
	& since "long integer" holds 8 bytes --> it can store up to 64 bits 
	apple is double, a double holds double the percision of a floaf (15-17 decimal palces)\
	a double has the size of 8 bytes = 64 bits. 

*/
