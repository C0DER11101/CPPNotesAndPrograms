#include<iostream>
#include<iomanip>

using namespace std;

class A
{
	protected:
		int a;

	public:
		void get_a(int);
		void show_a();
};

void A::get_a(int val)
{
	a=val;
}

void A::show_a()
{
	cout<<"a = "<<a<<endl;
}

class B
{
	protected:
		int b;

	public:
		void get_b(int);
		void show_b();
};

void B::get_b(int val)
{
	b=val;
}

void B::show_b()
{
	cout<<"b = "<<b<<endl;
}

class C: public A, public B
{
	public:
		int c;

		void get_c(int);
		void show_c();
		void showAll();
};

void C::get_c(int val)
{
	c=val;
}

void C::show_c()
{
	cout<<"c = "<<c<<endl;
}

void C::showAll()
{
	cout<<setiosflags(ios::left)<<"a"<<setw(30);
	cout<<resetiosflags(ios::left)<<"b";
	cout<<setiosflags(ios::right)<<setw(30)<<"c"<<endl;
	cout.unsetf(ios::right);
	cout.setf(ios::left, ios::adjustfield);
	cout<<setw(30)<<a;
	cout.unsetf(ios::left);
	cout<<b;

	cout<<setw(30)<<c<<endl;
}


int main(void)
{
	C cobj;

	cobj.get_a(10);
	cobj.get_b(20);
	cobj.get_c(30);
	cobj.show_a();
	cobj.show_b();
	cobj.show_c();
	//cobj.a=100; // throws an error
	//cobj.b=200; // throws an error
	cobj.c=300;
	cobj.show_c();
	cobj.showAll(); // since protected members can be inherited, so they can be accessed through a member function of a derived class!
	return 0;
}
