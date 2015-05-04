// Lab Title: Fibonacci number
// Date: May 2, 2015
// Name: Jonathan Getachew
// ID: NSR/0294/07

#include <iostream>

using namespace std;


// Declaration of the Fibonacci function
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
		cout<<" \nThe "<< number <<"th Fibonacci number is "<< fibonacci(number)<<endl;
	}
	return 0;
}
int fibonacci(int n)
{
	// body of the Fibonacci function 
	int fib1 = 1, fib2 = 1, fib;
	
	cout << "The series of Fibonacci numbers upto the " << n << "th Fibonacci is:" << endl;
	cout << "1 1 " ;
	for(int i=1; i<n; i++){
		fib = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib;
		cout << fib << " ";
	}
	
	return fib;
	// End of the body of your function
}
