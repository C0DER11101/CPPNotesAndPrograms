#include<iostream>
#include<stdlib.h>

using namespace std;

struct sample
{
	int a;
	int b;

	private:
	void showValues()
	{
		cout<<"a = "<<a<<"\n";
		cout<<"b = "<<b<<"\n";
	}

	public:

	void getValues();

};

void sample::getValues() // this how you define a member function of a structure outside it!!
{
	cout<<"enter value of a: ";
	cin>>a;
	cout<<"enter value of b: ";
	cin>>b;
	showValues(); // private members can be accessed only by the member functions(just like classes).
}

int main(void)
{
	sample s;

	s.getValues();
	return 0;
}
