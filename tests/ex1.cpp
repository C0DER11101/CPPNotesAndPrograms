#include<iostream>

using namespace std;

template<class T>
void test(T var) throw(char, int)
{
	cout<<"\nInside test()\n";
	try
	{
		if(var==4.5)
			throw var;
	}

	catch(double v)
	{
		cout<<"\nCaught a double!\n";
	}

	try
	{
		if(var=='x')
			throw var;
	}

	if(var==1)
		throw var;
}

int main(void)
{
	cout<<"\nInside main()\n";
	try
	{
		test(4.5);
		test('x');
		test(1);
//		test(4.5);
	}

	catch(char)
	{
		cout<<"\nBack in main()\n";
		cout<<"\nCaught a character!!\n";
	}

	catch(int)
	{
		cout<<"\nBack in main()\n";
		cout<<"\nCaught an integer!!\n";
	}

	catch(double)
	{
		cout<<"\nBack in main()\n";
		cout<<"\nCaught an double!!\n";
	}


	return 0;
}
