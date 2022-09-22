#include<iostream>

using namespace std;

int main(void)
{
	cout.width(5);
	cout.precision(4);
	cout<<1.23456656<<endl;

	cout.precision(4);
	cout.width(9);
	cout<<1.23456656<<endl;

	return 0;
}
