#include<iostream>

using namespace std;

// single inheritance!!!
class A
{
	int a;

	public:
	int b;
	void get_ab();
	int get_a();
	void show_a();
};

class B:private A
{
	int c;
	
	public:
	void mul();
	void display();
};

void A::get_ab()
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

	//ob.get_ab(); // get_ab() is a private member function of B and cannot be accessed directly from a non-member function like main()
	ob.mul();
	//ob.show_a(); // won't work for the same reason
	ob.display();
	

	//ob.b = 20; // won't work for the same reason
	ob.mul();
	ob.display();

	A a;

	cout<<"Class A's object:\n\n";
	a.show_a();

	return 0;
}
