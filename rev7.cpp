#include<iostream>

using namespace std;

class sample
{
	int a;
	static int b;

	public:

	void getvalue();
	static void getstatic(); // static member function!!
	void display();
};

int sample::b;

void sample::getstatic()
{
	cout<<"enter the value of b: ";
	cin>>b;
}

void sample::getvalue()
{
	cout<<"enter value of a: ";
	cin>>a;
}

void sample::display()
{
	cout<<"\n\nthe value of a is: "<<a<<endl;
	cout<<"the value of b is: "<<b<<endl;
}


int main(void)
{
	sample s;

	s.getvalue();
	sample::getstatic(); // this is how a static member function is called!!!
	s.display();

	return 0;
}
