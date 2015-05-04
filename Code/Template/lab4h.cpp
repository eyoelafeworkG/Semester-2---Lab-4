// This is a a template program for you to submit lab exercises in lab 4
// Lab Title: Factorial of a number
// Date: Place the date here
// Name: Place your name here
// ID: Place your ID here

#include <iostream>

using namespace std;


//Declaration of the factorial function
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
	
	/// End of the body of your function
}