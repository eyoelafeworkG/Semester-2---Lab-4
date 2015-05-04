// Lab Title: Factorial of a number
// Date: May 2, 2015
// Name: Jonathan Getachew
// ID: NSR/0294/07

#include <iostream>

using namespace std;


// Declaration of the factorial function
int factorial(int);
// End of function declaration

int main()
{
	// A variable to hold the input value
	int number;

	cout<<"Input an integer:";
	cin>>number;
	if(number < 0){
		cout<<" Factorial is defined only for positive numbers"<<endl;
	}
	else{
		cout<<" The factorial of "<< number <<"("<<number<<"!) is "<< factorial(number)<<endl;
	}
	return 0;
}
int factorial(int n)
{
	/// Insert the body of your factorial function here
	int fact=1; // variable to store the factorial
	for(int i=n; i>=1; i--){
		fact *= i;
	}
		
	return fact;
	/// End of the body of your function
}
