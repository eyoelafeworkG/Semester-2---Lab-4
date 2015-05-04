// This is a a template program for you to test the pre-lab exercises in lab 4

// Date: Place the date here
// Name: Place your name here
// ID: Place your ID here

#include <iostream>

using namespace std;

// In function declaration, even thought parameter names are optional
// it is often useful to write them anyway as a means of documentation
// for programmers
double quadratic(double a,double b,double c,double x);

int main()
{
	cout<<"1*5^2 + 2 * 5 + 3 = "<< quadratic(1.0,2.0, 3.0,5.0)<<endl;
	cout<<"2*4^2 + 3 * 4 + 3 = "<< quadratic(2.0,3.0, 2.0,4.0)<<endl;
	cout<<"3*3^2 + 1 * 3 + 3 = "<< quadratic(3.0,1.0, 1.0,3.0)<<endl;
	cout<<"2*2^2 + 0 * 2 + 3 = "<< quadratic(2.0,0.0, 0.0,2.0)<<endl;
	cout<<"1*2^2 + 2 * 2 + 3 = "<< quadratic(1.0,2.0, 4.0,2.0)<<endl;
	cout<<"4*2^2 + 1 * 2 + 3 = "<< quadratic(4.0,1.0, 5.0,2.0)<<endl;
	cout<<"0*1^2 + 2 * 1 + 3 = "<< quadratic(0.0,2.0, 1.0,1.0)<<endl;
	cout<<"1*0^2 + 2 * 0 + 3 = "<< quadratic(1.0,2.0, 4.0,0.0)<<endl;
	cout<<"4*4^2 + 1 * 4 + 3 = "<< quadratic(4.0,1.0, 5.0,4.0)<<endl;
	cout<<"5*3^2 + 2 * 3 + 3 = "<< quadratic(5.0,2.0, 3.0,3.0)<<endl;
	cout<<"2*5^2 + 3 * 5 + 3 = "<< quadratic(2.0,3.0, 2.0,5.0)<<endl;
	cout<<"3*2^2 + 3 * 2 + 3 = "<< quadratic(3.0,3.0, 4.0,2.0)<<endl;
	cout<<"0*0^2 + 1 * 0 + 3 = "<< quadratic(0.0,1.0, 1.0,0.0)<<endl;

	return 0;
}

/// Insert in the definition of the quadratic function starting from the next line
	
/// End of the definition of quadratic function