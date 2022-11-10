#include<iostream>
#include<stdlib.h>

using namespace std;

void Show();

void ShowVar();

namespace TestSpace
{
	bool printed=false;
	int var=10;

	void displayBool()
	{
		if(printed)
			cout<<var<<"\nValue has been printed\n";
		else
			cout<<"\nValue will not be displayed!\n";
	}

} // notice, no semicolon required here!!


int main(void)
{
	using namespace TestSpace;
	var+=12;

	printed=true;

	displayBool();
	Show();
	ShowVar();


	return 0;
}

void Show()
{
	using TestSpace::displayBool; // this is how you can use a function of a namespace!!!
	displayBool();
//	cout<<var<<"\n"; -> error: cannot use var here, if you want to use it then you need to write this:  using TestSpace::var;
}

void ShowVar()
{
	using TestSpace::var;

	cout<<"\nValue of var of namespace TestSpace is: "<<var<<"\n";
}
