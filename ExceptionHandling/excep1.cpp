#include<iostream>
#include<stdlib.h>

using namespace std;

int main(void)
{
	int a, b;

	cout<<"enter values of a and b: ";
	cin>>a>>b;

	try
	{
		if(b==0) // the denominator is 0(which is not allowed!!)
			throw b;
		else
			cout<<"a/b is: "<<a/(float)b<<"\n";

	}

	catch(int Exception)
	{
		cout<<"\nDivideByZeroError!!\n\n";
	}

	return 0;
}
