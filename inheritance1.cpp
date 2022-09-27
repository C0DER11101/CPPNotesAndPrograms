#include<iostream>

using namespace std;

// single inheritance!!!
class A
{
	int a;

	public:
	int b;
	void set_ab();
	int get_a();
	void show_a();
};

class B:public A
{
	int c;
	
	public:
	void mul();
	void display();
};

void A::set_ab()
{
	a=5, b=10;
}

int A::get_a()
{
	return a;
}

void A::show_a()
{
	cout<<"a = "<<a<<endl;
}

void B::mul()
{
	c=b*get_a();
}

void B::display()
{
	cout<<"a = "<<get_a()<<endl;
	cout<<"b = "<<b<<"\n";
	cout<<"c = "<<c<<endl;
}

int main(void)
{
	B ob;

	ob.set_ab();
	ob.mul();
	ob.show_a();
	ob.display();
	

	ob.b = 20;
	ob.mul();
	ob.display();

	A a;

	cout<<"Class A's object:\n\n";
	a.show_a();

	return 0;
}
