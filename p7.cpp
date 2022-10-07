#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

// VIRTUAL FUNCTIONS

class A
{
	public:
		void greet();
		virtual void show();
};

void A::greet()
{
	cout<<"\nHello, this is class A\n";
}

void A::show()
{
	cout<<"\nI am show() of class A\n";
}

class B:public A
{
	public:
		void greet();
		void show();
};

void B::greet()
{
	cout<<"\nHello, this is class B\n";
}

void B::show()
{
	cout<<"\nI am show() of class B\n";
}

int main(void)
{
	A*ptr=NULL;
	A a;
	B b;

	ptr=&a;
	ptr->greet(); // calls greet() of class A
	ptr->show(); // calls show() of class A

	cout<<"\n--------------------------------------\n";

	ptr=&b;
	ptr->greet(); // calls greet() of class A
	ptr->show(); // calls show() of class B
	return 0;
}
