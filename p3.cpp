#include<iostream>

using namespace std;


// PASSING FUNCTIONS AS ARGUMENTS!!!

int result(int, int, int (*)(int, int));
int sum(int, int);
int main(void)
{
	int a, b;

	cout<<"enter value of a: ";
	cin>>a;
	cout<<"enter value of b: ";
	cin>>b;

	int Sum=result(a, b, sum);

	cout<<a<<"+"<<b<<" is: "<<Sum<<"\n";
	cout<<"\n\n";

	return 0;
}

int sum(int a, int b)
{
	cout<<"sum() called\n";
	return (a+b);
}

int result(int a, int b, int(*sm)(int x, int y))
{
	cout<<"result() called\n";
	return (*sm)(a, b);
}
