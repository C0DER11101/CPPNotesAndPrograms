#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include "pb.h"
#include "pb.cpp"


int main(void)
{
	double h, b, R;

	string shapeName;

	triangle t;

	cout<<"enter shape name: ";
	cin>>shapeName;
	cout<<"enter base: ";
	cin>>b;
	cout<<"enter height: ";
	cin>>h;

	t.get_data(h, b);
	t.display_area(shapeName);
	rectangle r;
	
	cout<<"enter shape name: ";
	cin>>shapeName;
	cout<<"enter breadth: ";
	cin>>b;
	cout<<"enter length: ";
	cin>>h;

	r.get_data(h, b);
	r.display_area(shapeName);

	circle c;

	cout<<"enter shape name: ";
	cin>>shapeName;
	cout<<"enter radius: ";
	cin>>R;

	c.get_data(R);
	c.display_area(shapeName);
	return 0;
}
