#include<iostream>

using namespace std;

int main(void)
{
	cout.fill('*');
	cout.precision(4); // displays 3 digits after the decimal point
	cout.setf(ios::internal, ios::adjustfield);
	cout.setf(ios::scientific, ios::floatfield);
	cout.width(15);
	cout<<-12.34567<<"\n";

	cout.fill('*');
	cout.setf(ios::internal, ios::adjustfield); // since there is no sign before 12.3567, these statements will run normally!!
	cout.width(15);
	cout<<12.3567<<endl;

	cout.fill('*');
	cout.setf(ios::internal, ios::adjustfield);
	cout.width(15);
	cout<<-12.34566<<endl;


	cout.setf(ios::scientific, ios::floatfield);
	cout<<45.679<<endl;

	cout.setf(ios::internal, ios::adjustfield);
	cout.precision(4);
	cout.fill('*');
	cout.width(15);
	cout<<-12.34567<<"\n";



	cout.setf(ios::internal, ios::adjustfield);
	cout.precision(4);
	cout.fill('*');
	cout.width(15);
	cout<<-12.34567<<"\n";

	return 0;
}
