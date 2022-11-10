#include<iostream>
#include<stdlib.h>

using namespace std;

class sample
{
	mutable int _m;

	public:
	sample():_m(0){}
	sample(int val):_m(val){}

	void change() const;
	void show();
};

void sample::change() const
{
	_m+=10;
}

void sample::show()
{
	cout<<"Value = "<<_m<<"\n";
}

int main(void)
{
	sample s(10);

	cout<<"\nBefore modifying:\n";
	s.show();
	s.change();
	cout<<"\nAfter modifying:\n";
	s.show();
	
	return 0;
}
