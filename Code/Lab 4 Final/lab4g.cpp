// Lab Title: Summation of integer digits
// Date: May 2, 2015
// Name: Jonathan Getachew
// ID: NSR/0294/07

#include <iostream>

using namespace std;


// Declaration of the condense function
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
	int rem; // variable to store the remainder 
	if(n == 0){
		return 0;
	}else{
		rem = n%10;
		n/=10;
		return rem + condense(n);
	}
	
	/// End of the body of your function
}
