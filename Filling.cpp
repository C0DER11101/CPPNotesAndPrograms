#include<iostream>

using namespace std;

int main(void)
{
	cout.width(10);
	cout.fill('*');
	cout<<12345<<endl;

	cout.fill('*');
	cout.width(10);
	cout<<12345<<endl;

	cout.fill('-');
	cout.width(10);
	cout<<12345<<endl;
	
	cout.fill('2');
	cout.width(10);
	cout<<12345<<endl;

	return 0;
}
