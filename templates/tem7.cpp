#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include<conio.h>

using namespace std;

template<class T1, class T2>
void display(T1, T2);

int main(void)
{
	int a=30;
	char b='a';

	display(a, b);

	display(b, a);

	return 0;
}


template<class T1, class T2>
void display(T1 a, T2 b)
{
	cout<<a<<setw(20)<<b<<"\n\n";
}
