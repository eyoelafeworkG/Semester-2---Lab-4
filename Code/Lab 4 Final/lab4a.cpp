// Date: May 2, 2015
// Name: Jonathan Getachew
// ID: NSR/0294/07

#include <iostream>
#include <math.h>

using namespace std;

double quadratic(double);

int main()
{
	cout<<"quadratic(3.0) "<< quadratic(3.0)<<endl;
	cout<<"quadratic(4.0) "<< quadratic(4.0)<<endl;
	cout<<"quadratic(5.0) "<< quadratic(5.0)<<endl;
	
	return 0;
}

// definition of the quadratic function 
double quadratic(double x){
	
	double a=1.0, b=2.0, c=1.0;
	return a*pow(x,2)+b*x+c;
}
	
// End of the definition of quadratic function
