#include<iostream>
#include<stdlib.h>

using namespace std;

int main(void)
{
	int *a=new int[5];

	try
	{
		throw a;
	}

	catch(int*c)
	{
		cout<<"\nCaught a pointer to integer!!\n\n";
	}

	catch(...)
	{
		cout<<"\nSomething else!!\n\n";
	}

	int **b;
	char*c;

	try
	{
		throw b;
	}

	catch(int*a)
	{
		cout<<"\nCaught a pointer to integer!!\n\n";
	}

	catch(int**c)
	{
		cout<<"\nCaught a pointer to pointer to integer!!\n\n";
	}

	catch(...)
	{
		cout<<"\nSomething else!!\n\n";
	}

	try
	{
		throw c;
	}

	catch(int*a)
	{
		cout<<"\nCaught a pointer to integer!!\n\n";
	}

	catch(int**c)
	{
		cout<<"\nCaught a pointer to pointer to integer!!\n\n";
	}

	catch(...)
	{
		cout<<"\nSomething else!!\n\n";
	}

	delete a;

	return 0;
}
