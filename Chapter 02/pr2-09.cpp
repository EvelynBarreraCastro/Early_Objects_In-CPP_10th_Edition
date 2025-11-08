// This program has variables of several of the integer types.
#include <iostream>
using namespace std;

int main()
{
   int checking;
   unsigned int miles;
   long diameter;

   checking = -20;
   miles = 4276;
   diameter = 100000;
   
   cout << "We have made a journey of " << miles << " miles.\n";
   cout << "Our checking account balance is " << checking << " dollars.\n";
   cout << "The Milky Way galaxy is about " << diameter; 
   cout << " light years in diameter.\n";
   return 0;
}

/*
   Notes: 
   The different type of integer types seen is int, unsigned int, & long. 
   They're all a spectrum under integer.
   However, int and long can hold values that are positive and negative.
   Whereas unsigned int can only hold 0 and positive numbers.
   Another difference is the size.
   int ans unsigned int have the same size (often 32 bits)



*/