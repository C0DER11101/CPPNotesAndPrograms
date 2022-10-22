#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include "pa.h"
#include "pa.cpp"


int main(void)
{
	double h, b;

	triangle t;

	cout<<"TRIANGLE:\n";
	cout<<"enter base: ";
	cin>>b;
	cout<<"enter height: ";
	cin>>h;

	t.get_data(h, b);
	t.display_area();
	rectangle r;
	
	cout<<"RECTANGLE:\n";
	cout<<"enter breadth: ";
	cin>>b;
	cout<<"enter length: ";
	cin>>h;

	r.get_data(h, b);
	r.display_area();
	return 0;
}
