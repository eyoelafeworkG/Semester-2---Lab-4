// This is a a template program for you to submit lab exercises in lab 4
// Lab Title: Summation of integer digits
// Date: Place the date here
// Name: Place your name here
// ID: Place your ID here

#include <iostream>

using namespace std;


//Declaration of the condense function
int condense(int);
// End of function declaration

int main()
{
	// A variable to hold the input value
	int number;

	cout<<"Input an integer:";
	cin>>number;
	if(number < 0){
		cout<<" Input number should be positive "<<endl;
	}
	else{
		cout<<" The condensed value for "<< number <<" is "<< condense(number)<<endl;
	}
	return 0;
}
int condense(int n)
{
	/// Insert the body of your condense function here
	
	/// End of the body of your function
}