#include<iostream>
#include<stdlib.h>

using namespace std;

// Specifying exceptions!!

void test(int x) throw(int, double) // means exceptions for int and double will be thrown!!
{
	if(x==0)
		throw 'x';
	if(x==1)
		throw x;
	else if(x==-1)
		throw 1.0;
}

int main(void)
{
	try
	{
		cout<<"\nTesting throw restrictions!!\n";

		cout<<"x==0\n";
		test(0);
		cout<<"x==1\n";
		test(1);
		cout<<"x==-1\n";
		test(-1);
	}

	catch(char c)
	{
		cout<<"\nCaught a character!\n";
	}

	catch(int c)
	{
		cout<<"\nCaught an integer!\n";
	}

	catch(double c)
	{
		cout<<"\nCaught a double!\n";
	}

	return 0;
}
