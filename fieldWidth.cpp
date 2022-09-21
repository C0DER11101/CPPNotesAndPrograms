#include<iostream>

using namespace std;

int main(void)
{
	int a=120;

	cout.width(5);

	cout<<120<<"\n";
	cout.width(5);
	cout<<130<<"\n";

	cout.width(-9);
	cout<<100;
	cout.width(9);
	cout<<120<<"\n";


	cout.width(8);
	cout<<12;
	cout.width(8);
	cout<<15<<"\n";

	return 0;
}
