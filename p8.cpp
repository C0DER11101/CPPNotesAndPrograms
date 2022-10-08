#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

class A
{
	public:
		void greet();
};

void A::greet()
{
	cout<<"Hello, this is greet() of class A\n";
}

class B:public A
{
	public:
		void greet();
};

void B::greet()
{
	cout<<"Hello, this is greet() of class B\n";
}

int main(void)
{
	A a;
	B b;
	B*bptr;
	bptr=&b;

	bptr->greet(); // calls greet() of class B

	//bptr=&a; error, derived class pointer cannot store the address of base class object

	bptr->greet();// calls greet() of class B
	a.greet(); // calls greet() of class A
	return 0;
}
