#include<iostream>

using namespace std;

int main(void)
{
	int*ptr;

	int a=65;

	ptr=&a;

	void*gp; // generic pointer(void pointer)

	gp=ptr; // generic pointer can be assigned a pointer value of any type

	/* 
	   ptr is a pointer to integer which stores
	   the address of an int variable!!!
	*/


	int*ptr2;
	char*cptr;

	ptr2=(int*)gp; // typecasting is important when you are assigning a void pointer to another pointer to a non-void type

	cout<<"\n\nThe value of a is = "<<a<<"\n";
	cout<<"\nThe value of a using ptr is = "<<*ptr<<"\n";
	cout<<"\nThe value of a using ptr2 is = "<<*ptr2<<"\n";

	cptr=(char*)gp;

	cout<<"\nThe value of a using cptr is = "<<*cptr<<"\n";


	return 0;
}
