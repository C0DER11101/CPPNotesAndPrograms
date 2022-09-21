#include<iostream>

using namespace std;

class sample
{
	protected:
		int a;

	public:
		void getvalue();
		void showvalue();
};

void sample::getvalue()
{
	cout<<"\nenter value of a: ";
	cin>>a;
}

void sample::showvalue()
{
	cout<<"\n\nvalue of a is: "<<a<<endl;
}

int main(void)
{
	sample s;

	s.getvalue();
	s.showvalue();

	return 0;
}
