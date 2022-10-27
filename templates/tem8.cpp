#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

template<class T>
void display(T); // Display-1

template<class T1, class T2>
void display(T1, T2); // Display-2

void display(int); // Display-3

int main(void)
{

	display(100);
	display(12.34); // Display-1
	display(100, 12.34); // Display-2
	display('C'); // Display-1

	return 0;
}

template<class T>
void display(T a)
{
	cout<<"Display-1: "<<a<<"\n\n";
}

template<class T1, class T2>
void display(T1 a, T2 b)
{
	cout<<"Display-2: "<<a<<" "<<"\n\n";
}

void display(int a)
{
	cout<<"Display-3: "<<a<<"\n\n";
}
