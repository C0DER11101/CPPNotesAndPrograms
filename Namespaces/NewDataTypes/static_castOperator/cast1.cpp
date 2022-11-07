#include<iostream>

using namespace std;

int main(void)
{
	int m=48;

	double x=static_cast<double>(m);
	char y=static_cast<char>(m);

	cout<<"m = "<<m<<"\n";
	cout<<"x = "<<x<<"\n";
	cout<<"y = "<<y<<"\n";

	return 0;
}
