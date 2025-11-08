// This program demonstrates that characters are actually 
// stored internally by their ASCII integer value.
#include <iostream>
using namespace std;

int main()
{
   char letter;

   letter = 65;               // 65 is the ASCII code for the character A
   cout << letter << endl;
	
   letter = 66;               // 66 is the ASCII code for the character B
   cout << letter << endl;
   return 0;
}

/* 
   Note: char is short for character
   for this reason even though a number is stored it autmatically reads it as an ASCII code
*/
