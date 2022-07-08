#include<iostream>

using namespace std;

int Add(int, int);

int main(void)
{
	int a, b;

	cout<<"enter two integer values: ";
	cin>>a>>b;

	cout<<a<<" + "<<b<<" = "<<Add(a, b)<<endl;

	return 0;
}


inline int Add(int a, int b)
{
	return (a+b);
}
