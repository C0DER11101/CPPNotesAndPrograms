#include<iostream>

using namespace std;

int main(void)
{
	cout.fill('*');
	cout.setf(ios::left, ios::adjustfield);
	cout.width(15);
	cout<<"TABLE 1"<<"\n";

	cout.fill('*');
	cout.setf(ios::right, ios::adjustfield);
	cout.width(15);
	cout<<"TABLE 2"<<"\n";

	cout.setf(ios::left, ios::adjustfield);
	cout.width(15);
	cout.fill('*');
	cout<<"TABLE 3"<<"\n";

	return 0;
}
