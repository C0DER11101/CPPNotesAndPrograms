#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include<conio.h>

using namespace std;


class space
{
	int _x;
	int _y;
	int _z;

	public:

	void getdata(int, int, int);
	void display();
	void operator-(); // for unary operation(that's why no arguments)!!!
};

void space::getdata(int x, int y, int z)
{
	_x=x;
	_y=y;
	_z=z;
}

void space::display()
{
	cout<<"x"<<setw(20)<<"y"<<setw(20)<<"z"<<"\n";
	cout<<_x<<setw(20)<<_y<<setw(20)<<_z<<"\n\n";
}

void space::operator-()
{
	// negating the values!!!
	_x = -_x;
	_y = -_y;
	_z = -_z;
}

int main(void)
{
	space s;

	s.getdata(2, 4, 6);
	s.display();
	-s;
	s.display();
	return 0;
}
