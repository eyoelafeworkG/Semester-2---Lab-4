// This is a a template program for you to submit lab exercises in lab 4
// Lab Title: Fibonacci number
// Date: Place the date here
// Name: Place your name here
// ID: Place your ID here

#include <iostream>

using namespace std;


//Declaration of the Fibonacci function
int fibonacci(int);
// End of function declaration

int main()
{
	// A variable to hold the input value
	int number;

	cout<<"Input an integer:";
	cin>>number;
	if(number < 0){
		cout<<" The input number should be positive"<<endl;
	}
	else{
		cout<<" The "<< number <<"th Fibonacci number is "<< fibonacci(number)<<endl;
	}
	return 0;
}
int fibonacci(int n)
{
	/// Insert the body of your Fibonacci function here
	
	/// End of the body of your function
}