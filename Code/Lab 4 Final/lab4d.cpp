// Lab Title: Calculate Primes in a Range
// Date: May 2, 2015
// Name: Jonathan Getachew
// ID: NSR/0294/07

#include <iostream>
#include <math.h>

using namespace std;


// declaration of the isPrime function
int isPrime(int n);
	
// End of the function declaration for isPrime function

int main()
{
	// A variable to hold the input value
	int number;

	cout<<"Input an integer:";
	cin>>number;

	// Any action to be performed before the  checking begins
	// variable to count total number of prime numbers
	int noOfPrimeNums=0, i = 1;
	
	if(number < 200){
		for(int j = 2; j <= number; j++)
		{
			if (isPrime (j) == 0) // call the function isPrime(j) to check
			{
				// action to be performed when j is prime
				// cout << j << " is prime." << endl;
				
				if(i%8==0){
					cout << j << " " << endl;
				}else{
					cout << j << " ";
				}
				
				noOfPrimeNums++;
				i++;
				
			}
			else{
				// action to be performed when j is NOT a prime number
				// cout << j << " is not prime." << endl; 
				
			}
		}
		
		cout << "\nThere are " << noOfPrimeNums << " Prime numbers between 2 and " << number << endl;
		
	}else{
		//variable to accept user choice
		int choice;
		
		cout << "\n Choose how the answer is displayed: " << endl;
		cout << "\t 1 for amount of prime numbers." << endl;
		cout << "\t 2 for displaying all primes less than " << number << endl;
		cout << "\t 3 to display both outputs." << endl;
		cin >> choice;
		
		switch(choice){
			case 1:
				for(int j = 2; j <= number; j++){
					if(isPrime(j) == 0){
						noOfPrimeNums++;
					}
				}
				cout << "\nThere are " << noOfPrimeNums << " Prime numbers between 2 and " << number << endl;
				break;
			
			case 2:
				for(int j = 2; j <= number; j++)
				{
					if (isPrime (j) == 0) // call the function isPrime(j) to check
					{
						// action to be performed when j is prime
						
						// cout << j << " is prime." << endl;
					
						if(i%8==0){
							cout << j << " " << endl;
						}else{
							cout << j << " ";
						}
						
						i++;
						
					}
				}
				break;
			
			case 3:
				for(int j = 2; j <= number; j++)
				{
				if (isPrime (j) == 0) // call the function isPrime(j) to check
					{
						// action to be performed when j is prime
						
						// cout << j << " is prime." << endl;
						
						if(i%8==0){
							cout << j << " " << endl;
						}else{
							cout << j << " ";
						}
						
						noOfPrimeNums++;
						i++;
					}
				}
				cout << "\nThere are " << noOfPrimeNums << " Prime numbers between 2 and " << number << endl;
				break;
				
			default:
				cout << "Incorrect choice!" << endl;
				break;
		}
	}	
	
	return 0;
}

// definition of the isPrime function
int isPrime(int n){
	
	int isPrime = 0, i = 2;
	for( ; i<=sqrt(n); i++){
		if(n%i==0){
			isPrime =  1;
		}
	}
	
	return isPrime;
}
	
// End of the definition of isPrime function

