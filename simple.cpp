#include<iostream>

using namespace std;

int main(void)
{
	cout.setf(ios::internal, ios::adjustfield);
	cout.fill('*');
	cout.width(5);
	cout<<-3<<endl;

	cout.fill('*');
	cout.setf(ios::left, ios::adjustfield);
	cout.width(5);
	cout<<-3<<endl;

	return 0;
}
