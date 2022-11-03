#include<iostream>
#include<stdlib.h>

using namespace std;

template<class T>
void divide(T, T);

int main(void)
{
	double a=12.0, b=2.0;

	try
	{
		divide(a, b);
		b=0.0;
		divide(a, b);
	}

	catch(double)
	{
		cout<<"\nCaught a double in main()!!\n";
	}
	return 0;
}

template<class T>
void divide(T a, T b)
{
	try
	{
		if(b==0.0)
			throw b;

		else
			cout<<"\nDivision: "<<a/b<<"\n";
	}

	catch(double)
	{
		cout<<"\nCaught a double in divide()!!\n";

		throw; // rethrowing an exception
	}

}
