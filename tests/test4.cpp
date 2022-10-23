#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

class Y; // forward declaration of class Y

class X
{
	int xmember;
	public:
	X():xmember(0){}
	X(int val): xmember(val){ }
	int fun1(X x, Y y)
	{
		cout<<"Value of data member of class Y: "<<y.ymember<<"\n";
		return x.xmember;
	}
};

class Y
{
	int ymember;
	public:
	Y(int val): ymember(val){ }
	friend int X::fun1(X, Y); // member function of class X is a friend function of class Y!!
};

int main(void)
{
	X defObj;
	X objX(10);
	Y objY(20);

	cout<<"Value of data member of class X: "<<defObj.fun1(objX, objY)<<"\n";

	return 0;
}
