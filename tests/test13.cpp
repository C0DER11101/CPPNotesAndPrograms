#include<iostream>
#include<stdlib.h>

using namespace std;


class sample
{
	int _a;

	public:

	sample():_a(0){}

	sample(int val):_a(val){}

	~sample()
	{
		cout<<"destructor called!!\n\n";
	}

	void manipulate(int val)
	{
		_a=val;
	}

	void display()
	{
		cout<<_a<<"\n\n";
	}
};

int main(void)
{
	sample s1(10), s2;

	s2=s1;
	
	s1.display();
	s2.display();

	s1.manipulate(30);

	s1.display();
	s2.display();
	return 0;
}
