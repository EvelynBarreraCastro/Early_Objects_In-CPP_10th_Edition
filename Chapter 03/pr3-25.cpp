// This program uses the strcpy function to copy one C-string to another.

#include <iostream>
using namespace std;

int main()
{	
	// declares SIZE to 12
	const int SIZE = 12;
	// declars 2 arrays (name1 & name2) with the memory cell space of 12 into char datatype 
    char name1[SIZE],
	     name2[SIZE];
	
	// string copy: name1 = Sebastian
	strcpy(name1, "Sebastian");             
	cout << "name1 now holds the string " << name1 << endl;

	// string copy: name2 = name1 = Sebstian
	strcpy(name2, name1);
	cout << "name2 now also holds the string " << name2 << endl;

	/*
		Output should be: 
		name1 now holds the string Sebastian
		name 2 now also holds the string Sebastian
	*/
	
	return 0;
}
