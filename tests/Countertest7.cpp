#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<conio.h>

using namespace std;


class space
{
	int _x;
	int _y;
	int _z;

	public:

	void getdata(int, int, int);
	void showData();
	void operator-();
};

void space::getdata(int x, int y, int z)
{
	_x=x;
	_y=y;
	_z=z;
}

void space::showData()
{
	cout<<"x"<<setw(20)<<"y"<<setw(20)<<"z"<<"\n";
	cout<<_x<<setw(20)<<_y<<setw(20)<<_z<<"\n\n";
}

void space::operator-()
{
	_x=-_x;
	_y=-_y;
	_z=-_z;
}


int main(void)
{

	space s;

	s.getdata(10, 20, 30);
	s.showData();
	-s; // same as writing:      s.operator-();
	s.showData();
	return 0;
}
