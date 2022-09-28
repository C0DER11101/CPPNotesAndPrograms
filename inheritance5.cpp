#include<iostream>
#include<iomanip>

using namespace std;

/*----------------------------------------------------------------------*/

class A // this class becomes a virtual base class for classes B and C
{
	protected:
		int a;

	public:
		void get_a(int);
		void display();
		void ClassID();
};

void A::get_a(int val)
{
	a=val;
}

void A::display()
{
	cout<<"a = "<<a<<endl;
}

void A::ClassID()
{
	cout<<"Base-A\n"<<endl;
}

/*----------------------------------------------------------------------*/

class B:public virtual A
{
	protected:
		int b;
	public:
		void get_b(int);
		void display();
};

void B::get_b(int val)
{
	b=val;
}

void B::display()
{
	cout<<"b = "<<b<<endl;
}

/*----------------------------------------------------------------------*/

class C:public virtual A
{
	protected:
		int c;
	public:
		void get_c(int);
		void display();
};

void C::get_c(int val)
{
	c=val;
}

void C::display()
{
	cout<<"c = "<<c<<endl;
}

class D:public B, public C // direct child of classes B and C, indirect child of class A(class A is the grandparent of class D)
{
	protected:
		int d;
	public:
		void get_d(int);
		void display();
		void showAll();
};

void D::get_d(int val)
{
	d=val;
}

void D::display()
{
	cout<<"d = "<<d<<endl;
}

void D::showAll()
{
	cout.setf(ios::left, ios::adjustfield);
	cout<<"a"<<setw(30);
	cout.unsetf(ios::left);
	cout<<"b";
	cout.width(30);
	cout<<"c";
	cout.width(30);
	cout<<"d"<<endl;

	cout<<setiosflags(ios::left);
	cout<<a<<setw(30);
	cout<<resetiosflags(ios::left);
	cout<<b;
	cout<<setw(30);
	cout<<c;
	cout<<setw(30);
	cout<<d<<endl;
}

/*----------------------------------------------------------------------*/

int main(void)
{
	D d;
	d.get_a(10);
	d.get_b(12);
	d.get_c(14);
	d.get_d(16);

	d.display(); // calls display() of class D
	d.A::display(); // display() of class A
	d.B::display(); // display() of class B
	d.C::display(); // display() of class C
	d.ClassID(); // function of class A
	d.showAll();
	cout<<"\n\n";
	return 0;
}
