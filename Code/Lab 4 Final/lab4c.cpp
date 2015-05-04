// Date: May 2, 2015
// Name: Jonathan Getachew
// ID: NSR/0294/07

#include <iostream>
#include <math.h>

using namespace std;

// declaration of your distance2 function on the next line
double distance2(double x1, double y1, double x2, double y2);
	
// End of the function declaration for distance2 function
int main()
{
	
	cout << "Distance between (3.0, 0.0) and (0.0, 4.0) = " << distance2(3.0, 0.0, 0.0, 4.0) << " units" << endl;
	cout << "Distance between (2.0, 1.0) and (3.0, 1.5) = " << distance2(2.0, 1.0, 3.0, 1.5) << " units" << endl;
	cout << "Distance between (4.0, 2.0) and (1.0, 5.0) = " << distance2(4.0, 2.0, 1.0, 5.0) << " units" << endl;
	cout << "Distance between (5.0, 0.0) and (0.0, 1.0) = " << distance2(5.0, 0.0, 0.0, 1.0) << " units" << endl;
	cout << "Distance between (1.0, 0.5) and (27.0, 0.0) = " << distance2(1.0, 0.5, 27.0, 0.0) << " units" << endl;
	cout << "Distance between (6.5, 3.0) and (10.0, 14.0) = " << distance2(6.5, 3.0, 10.0, 14.0) << " units" << endl;
	
	/// End of the function call lines	
	return 0;
}

// definition of the distance2 function 
double distance2(double x1, double y1, double x2, double y2){
	
	//variables to calculate the difference b/n the x coordinates (x1, x2), the y coordinates (y1, y2) and the Distance
	double dx, dy, distance;
	dx = x2 - x1;
	dy = y2 - y1;
	
	//code to calculate distance
	distance = sqrt(pow(dx,2)+pow(dy,2));
	
	return distance;
	
}
	
/// End of the definition of distance2 function
