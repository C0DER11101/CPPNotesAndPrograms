#include<iostream>
#include<stdlib.h>

using namespace std;

class B; // forward declaration of class B

class A
{
	int a;

	public:
	A():a(0){}
	A(int val):a(val){}

	friend int add(A, B);
};

class B
{
	int b;

	public:
	B():b(0){}
	B(int val):b(val){}

	friend int add(A, B);
};

int add(A aobj, B bobj)
{
	return (aobj.a+bobj.b);
}


int main(void)
{

	A objA(10);

	B objB(20);

	cout<<"Sum of data members of classes A and B is: "<<add(objA, objB)<<"\n";
	return 0;
}
