#include<iostream>
#include<stdlib.h>
#include<conio.h>

// POLYMORPHISM - compile-time polymorphism!!
using namespace std;

class A
{
	public:
		void show();
};

void A::show()
{
	cout<<"\nclass A\n";
}

class B:public A
{
	public:
		void show();
};

void B::show()
{
	cout<<"\nclass B\n";
}

int main(void)
{
	B b;
	b.show(); // calls show() of class B
	b.A::show(); // calls show() of class A
	return 0;
}
