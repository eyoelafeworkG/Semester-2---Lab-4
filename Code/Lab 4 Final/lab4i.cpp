// Lab Title: Sum of even numbers in range 
// Date: May 2, 2015
// Name: Jonathan Getachew
// ID: NSR/0294/07

#include <iostream>

using namespace std;


// Declaration of the sumNums function
int sumNums(int n,int m, int c);
// End of function declaration

int main()
{
	// A variable to hold the input value
	int n = 0,m = 0, c;

	cout<<"Input n :";
	cin>>n;
	cout<<"Input m :";
	cin>>m;
	cout << "Choose which numbers u want to add b/n " << n << " and " << m << "\n 1 for even \n 2 for odd." << endl;
	cin >> c;
	
	if(c==1){
		cout<<" The sum of even numbers between "<< n <<" and "<< m <<" is "<< sumNums(n,m,c)<<endl;
	}else if(c==2){
		cout<<" The sum of odd numbers between "<< n <<" and "<< m <<" is "<< sumNums(n,m,c)<<endl;
	}else{
		cout<<"Wrong input for choice to add even/odd!!"<<endl;
	}
	return 0;
}
int sumNums(int n, int m, int c)
{
	/// Insert the body of your sumNums function here
	int evenSum = 0, oddSum = 0; // variables to hold the sum
	for(int i=n; i<=m; i++){
		if(i%2==0){
			evenSum+=i;
		}else{
			oddSum+=i;
		}
	}
	
	if(c==1){
		return evenSum;
	}else{
		return oddSum;
	}
	/// End of the body of your function
}
