#include<iostream>
#include<stdlib.h>

using namespace std;

int main(void)
{
	int a=10;
	
	int &b=a;

	cout<<&b<<"\n";
	cout<<&a<<"\n";

	return 0;
}
