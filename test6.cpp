#include<iostream>

using namespace std;

int main(void)
{
	cout.precision(3);
	cout.width(5);
	cout<<1.23456<<endl;

	cout.width(7);
	cout.precision(3);
	cout<<1.23456<<endl;

	cout.precision(3);
	cout.width(7);
	cout<<1.23456<<endl;

	cout.width(5);
	cout<<12345<<endl;

	cout.width(10);
	cout<<"abcde"<<endl;

	cout.width(5);
	cout.precision(3);
	cout<<1.234567<<endl;

	cout.precision(3);
	cout.width(5);
	cout<<1.234567<<endl;
	return 0;
}
