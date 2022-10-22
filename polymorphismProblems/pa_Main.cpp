#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include "pa.h"
#include "pa.cpp"


int main(void)
{
	double h, b;

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
	return 0;
}
