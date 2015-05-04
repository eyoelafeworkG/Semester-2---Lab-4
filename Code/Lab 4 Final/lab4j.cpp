// Lab Title: Check Case
// Date: May 2, 2015
// Name: Jonathan Getachew
// ID: NSR/0294/07

#include <iostream>

using namespace std;


//Declaration of the isCapital  function
int isCapital (char c);
// End of function declaration

int main()
{
	// A variable to hold the input value
	char inputChar;

	// code to accept a character from the user here
	cout << "Input a character to check whether it is a capital letter or not: ";
	cin >> inputChar;
	
	/// End of code to accept a character
	
	/// Check if the character is in capital case or not 
	if(isCapital(inputChar)){
		cout << "C" << endl;
	}else{
		cout << "c" << endl;
	} 
	
	return 0;
}
int isCapital (char c)
{
	int caseCheck=0;
	// statement to check whether c is capital or not using ASCII code
	if( (int)c >= 65 && (int)c <= 90 ){
		caseCheck=1;
	}
	
	return caseCheck;
}
