#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;


class sample
{
	int _a;

	public:
	sample():_a(0){}
	sample(int val):_a(val){}

	void display()
	{
		cout<<"Value = "<<_a<<"\n\n";
	}
};

int main(void)
{

	sample a(20), b;

	a.display();

	b=a; // object assignment is allowed in C++

	b.display();
	return 0;
}
