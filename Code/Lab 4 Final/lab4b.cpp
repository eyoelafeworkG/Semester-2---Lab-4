// Date: May 2, 2015
// Name: Jonathan Getachew
// ID: NSR/0294/07

#include <iostream>
#include <math.h>

using namespace std;

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

// definition of the quadratic function starting from the next line
double quadratic(double a, double b, double c, double x){
	
	return a*pow(x,2)+b*x+c;
}
	
// End of the definition of quadratic function
