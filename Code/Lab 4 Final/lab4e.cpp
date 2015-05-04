// Lab Title: Maximum of three
// Date: May 2, 2015
// Name: Jonathan Getachew
// ID: NSR/0294/07

#include <iostream>

using namespace std;

// declaration of the inline max function
inline int max(int num1, int num2, int num3);
	
// End of the function declaration for max function

int main()
{
	// A variable to hold the input value
	int number1,number2,number3;

	cout<<"Input the first number:";
	cin>>number1;
	cout<<"Input the second number:";
	cin>>number2;
	cout<<"Input the third number:";
	cin>>number3;

	cout<<"The maximum of "<<number1<<","<<number2<<","<<number3<<" is "<< max(number1,number2,number3);
	return 0;
}

// definition of the inline max function
inline int max(int num1, int num2, int num3){
	int max;
	if(num1 == num2 == num3){
		max = num1;
	}else if(num1 > num2 && num1 > num3){
		max = num1;
	}else if(num2 > num1 && num2 > num3){
		max = num2;
	}else{
		max = num3;
	}
	
	return max;
}	
// End of the definition of max function
