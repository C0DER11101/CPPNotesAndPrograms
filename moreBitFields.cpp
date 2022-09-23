#include<iostream>

using namespace std;

int main(void)
{
	int a=12;

	cout<<"The decimal, hexadecimal and octal representation of "<<a<<" are:\n";
	cout.setf(ios::dec, ios::basefield);
	cout<<a<<"\n";
	cout.setf(ios::hex, ios::basefield);
	cout<<a<<"\n";
	cout.setf(ios::oct, ios::basefield);
	cout<<a<<"\n";


	return 0;
}
