// This is a a template program for you to submit lab exercises in lab 4
// Lab Title: Calculate Primes in a Range
// Date: Place the date here
// Name: Place your name here
// ID: Place your ID here

#include <iostream>
#include <math.h>

using namespace std;


/// Insert in the declaration of your isPrime function on the next line
	
/// End of the function declaration for isPrime function

int main()
{
	// A variable to hold the input value
	int number;

	cout<<"Input an integer:";
	cin>>number;

	// Any action to be performed before the  checking begins

	for(int j = 2; j <= number; j++)
	{
		if (isPrime (j) == 0) // call the function isPrime(j) to check
		{
			// action to be performed when j is prime 
		}
		else{
			// action to be performed when j is NOT a prime number
		}
	}
	// Any additional action required when the checking completes
	return 0;
}

/// Insert in the definition of the isPrime function starting from the next line
	
/// End of the definition of isPrime function