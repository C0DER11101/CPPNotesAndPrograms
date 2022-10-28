#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

template<class T>
void divide(T, T);

int main(void)
{
	int a, b;

	cout<<"enter a and b: ";
	cin>>a>>b;

	try
	{
		divide(a, b);
	}

	catch(int Exception)
	{
		cout<<"\nDivideByZeroError!!\n\n";
	}
	cout<<"\nProgram Ended!!\n";
	return 0;
}


template<class T>
void divide(T a, T b)
{
	if(b==0)
		throw b;
	else
		cout<<"a/b = "<<a/(float)b<<"\n\n";

	cout<<"\ndivide() terminated!!\n\n";

}
