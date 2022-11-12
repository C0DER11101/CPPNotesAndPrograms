#include<iostream>
#include<stdlib.h>

using namespace std;

struct sample
{
	int a;

};

int main(void)
{
	sample obj;

	obj.a=10;

	cout<<"\na = "<<obj.a<<"\n";

	return 0;
}
