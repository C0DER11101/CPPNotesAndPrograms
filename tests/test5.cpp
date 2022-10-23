#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;


class sample
{
	int _var;

	public:

	sample(int val): _var(val){}

	void power(int raise=2) const; // const member function
	
};

void sample::power(int raise) const
{
	int product=1;
	_var=3; // error!!!
	cout<<_var<<" ^ "<<raise<<" = ";

	for(int i=0; i<raise; i++)
		product*=_var;

	cout<<product<<"\n";
}

int main(void)
{

	sample s(2);

	s.power(3);

	return 0;
}
