#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<iomanip>

using namespace std;

template<class T>
void Swap(T&, T&);

int main(void)
{
	int a, b;

	a=10, b=20;

	cout<<"a"<<setw(20)<<"b"<<"\n";
	cout<<a<<setw(20)<<b<<"\n\n";

	Swap(a, b);
	cout<<"After swapping:\n";
	cout<<"a"<<setw(20)<<"b"<<"\n";
	cout<<a<<setw(20)<<b<<"\n\n";
	return 0;
}

template<class T>
void Swap(T&a, T&b)
{
	T temp;

	temp=a;
	a=b;
	b=temp;
}
