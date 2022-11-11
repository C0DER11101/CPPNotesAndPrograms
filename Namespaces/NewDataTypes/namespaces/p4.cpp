#include<iostream>
#include<stdlib.h>

using namespace std;

// functions inside namespaces!!

namespace N
{
	int a;
	int b;

	void display() // function definition inside namespace
	{
		cout<<"\n"<<a<<" x "<<b<<" = "<<a*b<<"\n";
	}

	void product(int, int); // function declaration inside namespace
}

using namespace N;

void N::product(int x, int y)
{
	a=x;
	b=y;
}

int main(void)
{
	int x, y;

	cout<<"enter two values: ";
	cin>>x>>y;

	product(x, y);
	display();
	return 0;
}
