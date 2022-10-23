#include<iostream>
#include<stdlib.h>
#include<iomanip>

using namespace std;

class B;

class A
{
	int a;

	public:

	A(int val): a(val){}

	friend void showVal(A, B);
	friend void swap(A&, B&);
};

class B
{
	int b;

	public:

	B(int val):b(val){}

	friend void showVal(A, B);
	friend void swap(A&, B&);
};

void showVal(A objA, B objB)
{
	cout<<"a"<<setw(30)<<"b"<<"\n";
	cout<<objA.a<<setw(30)<<objB.b<<"\n\n";
}

void swap(A&aobj, B&bobj)
{
	int sub;
	sub = aobj.a > bobj.b ? aobj.a - bobj.b : bobj.b - aobj.a;
	
	if(aobj.a > bobj.b)
	{
		aobj.a-=sub;
		bobj.b+=sub;
	}

	else
	{
		aobj.a+=sub;
		bobj.b-=sub;
	}
}


int main(void)
{
	A objA(50);
	B objB(30);

	cout<<"Before swapping private members!!\n";
	showVal(objA, objB);

	swap(objA, objB);

	cout<<"After swapping private members!!\n";
	showVal(objA, objB);
	return 0;
}
