#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

class A
{
	public:
		void greetA();
		void farewell();
};

void A::greetA()
{
	cout<<"\ngreetA() of class A!!\n";
}

void A::farewell()
{
	cout<<"\nSee you later!! Bye from class A:\n";
}
class B:public A
{
	public:
		void greetB();
		void farewell();
};

void B::greetB()
{
	cout<<"\ngreetB() of class B!!\n";
}

void B::farewell()
{
	cout<<"\nSee you later!! Bye from class B:\n";
}

int main(void)
{
	A *ptr=NULL;
	A aobj;
	B b;

	ptr=&aobj; // ptr stores the address of object of class A
	cout<<"\nptr stores the address of an object of class A:\n";

	ptr->greetA();
	ptr->farewell(); // calls farewell() of class A
	cout<<"\n---------------------------------------------------------\n";
	//ptr->greetB(); // inaccessible, greetB() doesn't exist in class A

	// typecasting a pointer to class A to a pointer to class B
	((B*)ptr)->greetB(); // calls greetB() of class B, even though it doesnot store address of any object of class B

	ptr=&b;

	cout<<"\nptr stores the address of an object of class B:\n";

	ptr->greetA(); // calls greetA() of class A
	//ptr->greetB(); // error, greetB() doesnot exist in class A
	ptr->farewell(); // still calls farewell() of class A
	((B*)ptr)->farewell(); // calls farewell() of class B
	cout<<"\n---------------------------------------------------------\n";
	return 0;
}
