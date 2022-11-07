#include<iostream>
#include<stdlib.h>

using namespace std;

template<class T>
void add(T a, T b)
{
	try
	{
		if(a<0 || b<0)
			throw (a+b);
	}

	catch(int)
	{
		cout<<"\n[Calculating....]\n";
		system("sleep 0.2");
		throw;
	}

	cout<<"\n"<<a<<" + "<<b<<" = "<<a+b<<"\n";
}

int main(void)
{
	int i1, i2;

	cout<<"enter two positive integers: ";
	cin>>i1>>i2;

	try
	{
		add(i1, i2);
	}

	catch(int)
	{
		cout<<"\nNegative numbers are not allowed!!\n";
	}

	return 0;
}
