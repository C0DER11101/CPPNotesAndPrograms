#include<iostream>

using namespace std;

int main(void)
{
	cout.precision(3);
	cout.setf(ios::fixed, ios::floatfield);
	cout<<34.5<<endl;

	return 0;
}
