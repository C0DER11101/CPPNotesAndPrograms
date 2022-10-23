#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

class A
{
	int val;

	public:
	virtual void getVal(int){}
	virtual void showVal(){}
};

class B:public A
{
	public:
		void getVal(int v)
		{
			//A::val=v; // throws an error!!
			val=v; // throws and error!!
		}

		void showVal()
		{
			//cout<<"Value = "<<A::val<<"\n"; // throws an error!!
			cout<<"Value = "<<val<<"\n"; // throws an error!!
		}
};

int main(void)
{
	A *a;

	B b;

	a=&b;

	a->getVal(10);
	a->showVal();
	return 0;
}
