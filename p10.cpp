#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

class A
{
	int a;

	public:

	void getA(int val) { a = val; }
	void showA() { cout<<"a = "<<a<<"\n"; }
	virtual void about()=0;  // pure virtual function
};

class B:public A
{
	int b;

	public:

	void getB(int val) { b = val; }
	void showB() { cout<<"b = "<<b<<"\n"; }

	void about() { cout<<"This is class B\n"; }
};

class C:public A
{
	int c;

	public:

	void getC(int val) { c = val; }
	void showC() { cout<<"c = "<<c<<"\n"; }

	void about() { cout<<"This is class C\n"; }
};


int main(void)
{
	A*aptr;

	B bobj;

	aptr=&bobj;

	bobj.getB(10);
	bobj.showB();
	aptr->about();

	C cobj;

	aptr=&cobj;

	cobj.getC(50);
	cobj.showC();
	aptr->about();

	cout<<"\n\n---------------------------------\n\n";


	cout<<"Calling about() of class B using object of class B\n";
	bobj.about();

	cout<<"\n\n---------------------------------\n\n";
	cout<<"Calling about() of class C using object of class C\n";
	cobj.about();

	return 0;
}
