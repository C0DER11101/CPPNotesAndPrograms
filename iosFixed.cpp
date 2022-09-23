#include<iostream>

using namespace std;

int main(void)
{
	float a=9.0;
	cout.setf(ios::fixed, ios::floatfield);
	cout.precision(3);

	cout<<34.56<<endl;

	cout<<25.0<<endl;
	cout<<10.0<<endl;

	cout<<.9<<endl;
	cout<<a<<endl;
	return 0;
}
