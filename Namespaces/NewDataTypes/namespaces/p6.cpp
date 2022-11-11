#include<iostream>
#include<stdlib.h>

using namespace std;

namespace sample
{
	int m=100;

	void display();
}

void sample::display()
{
	cout<<"\nValue of m is: "<<m<<"\n";
}


int main(void)
{
	using sample::display;

	display();

	return 0;
}
