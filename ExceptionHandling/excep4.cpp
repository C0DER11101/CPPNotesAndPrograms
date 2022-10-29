#include<iostream>
#include<stdlib.h>

using namespace std;

template<class T>
void test(T);

int main(void)
{
	int a=10;

	float b=13.56;

	double d=67.8;

	char c='a';
	
	cout<<"\nFrom main:\n";
	test(a);

	cout<<"\nBack to main:\n";
	test(b);

	cout<<"\nBack to main:\n";
	test(d);

	cout<<"\nBack to main:\n";
	test(c);
	
	return 0;
}

template<class T>
void test(T a)
{
	try
	{
		throw a;
	}

	catch(...) // catch all the exceptions!!
	{
		cout<<"\nCaught "<<a<<"\n\n";
	}
}
