#include<iostream>

using namespace std;

class A
{
	int a;
	public:
	A()
	{
		cout<<"Constructor of class A called!!\n\n";
	}

	void get_a(int);
	void show_a();
};

void A::get_a(int val)
{
	a=val;
}

void A::show_a()
{
	cout<<"a = "<<a<<"\n";
}

class B:public A
{
	int b;

	public:

	B(int val): b(val){cout<<"b = "<<b<<"\n";}
};

int main(void)
{
	B obB(12);
	obB.get_a(14);
	obB.show_a();

	return 0;
}
