#include<iostream>

using namespace std;

int main(void)
{
	cout.setf(ios::showpos); // showing the + sign
	cout<<123.545<<endl;
	cout.setf(ios::internal, ios::adjustfield); // already know what this does!!
	cout.fill('^');
	cout.width(15);
	cout<<45.89<<endl;
	return 0;
}
