#include<iostream>

using namespace std;

class A
{
	int x;
	public:
	A(int val)
	{
		x=val;
		cout<<"A initialized!!\n\n";
	}

	void show_x();
};

void A::show_x()
{
	cout<<"x = "<<x<<endl;
}

class B
{
	int y;
	public:
	B(int val)
	{
		y=val;
		cout<<"B initialized!!\n\n";
	}

	void show_y();
};

void B::show_y()
{
	cout<<"y = "<<y<<endl;
}

class C:public A, public B
{
	int z;
	public:
	C(int a, int b, int c): A(a), B(b)
	{
		z=c;
		cout<<"C initialized!!\n\n";
	}

	void show_z();
};

void C::show_z()
{
	cout<<"z = "<<z<<endl;
}

int main(void)
{
	C c(10, 12, 14);

	c.show_x();
	c.show_y();
	c.show_z();
	return 0;
}
