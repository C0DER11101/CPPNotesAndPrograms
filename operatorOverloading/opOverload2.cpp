#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;


class Sum
{
	int _a;

	public:
	
	Sum():_a(0){}
	Sum(int a):_a(a){}

	int operator+(Sum);
	void show();
};

int Sum::operator+(Sum s)
{
	return ((_a)+(s._a));
}

void Sum::show()
{
	cout<<"Value = "<<_a<<"\n\n";
}

int main(void)
{
	Sum a(10), b(20), c;

	a.show();
	b.show();

	cout<<"\nSum:\n\n";
	c=a+b; // same as writing:   c=a.operator+(b);
	c.show();
	return 0;
}
