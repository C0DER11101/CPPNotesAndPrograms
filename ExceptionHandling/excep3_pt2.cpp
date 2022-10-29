#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

template<class T>
void test(T);

int main(void)
{
	int a=10;
	char b='b';
	double d=12;
	float c=45.78;

	test(a);
	cout<<"\nBack in main:\n";
	test(b);
	cout<<"\nBack in main:\n";
	test(d);
	cout<<"\nBack in main:\n";
	test(c);
	return 0;
}

template<class T>
void test(T var)
{
	try
	{
		throw var;
	}

	catch(int x)
	{
		cout<<"\ncatch statement-1:\n";
		cout<<x<<" is an integer!!\n";
	}

	catch(int x)
	{
		cout<<"\ncatch statement-2:\n";
		cout<<x<<" is an integer!!\n";
	}

	catch(char x)
	{
		cout<<x<<" is a character!!\n";
	}

	catch(double x)
	{
		cout<<x<<" is a double!!\n";
	}

	catch(float x)
	{
		cout<<x<<" is a float!!\n";
	}
}
