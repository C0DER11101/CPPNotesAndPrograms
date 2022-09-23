#include<iostream>

using namespace std;

void modify(int&);

int main(void)
{
	int a;

	cout<<"enter value of a: ";
	cin>>a;

	cout<<"Initial value of a is: "<<a<<endl;

	modify(a);


	cout<<"Modified value of a is: "<<a<<endl;

	return 0;
}

void modify(int& temp)
{
	temp=200;
}
