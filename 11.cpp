#include<iostream>

using namespace std;

int main(void)
{
	char str[100]="Priyanuj";

	cout.write(str, 0);
	cout<<"\n";
	cout.write(str, 1);
	cout<<"\n";
	cout.write(str, 2);
	cout<<"\n";
	cout.write(str, 4);
	cout<<"\n";

	return 0;
}
