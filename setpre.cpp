#include<iostream>
#include<iomanip> // header file for setw(), setiosflags(), setprecision(), etc manipulators!!
#include<math.h>

using namespace std;

int main(void)
{
	cout<<setprecision(3)<<1.2345<<endl;

	cout<<setprecision(3)<<sqrt(2)<<endl;

	// setprecision() works exactly like cout.precision()

	cout<<setw(15)<<setprecision(4)<<sqrt(3)<<endl;


	cout<<setiosflags(ios::showpos);
	cout<<setiosflags(ios::internal);
	cout<<setw(5);
	cout<<setfill('*');

	cout<<3<<endl;


	cout<<setiosflags(ios::showpos)<<setiosflags(ios::internal)<<setw(5)<<setfill('*')<<3<<endl;

	// setfill() works exactly like cout.fill() function !!!

	cout<<setiosflags(ios::showpos);
	cout<<setw(5);
	cout<<setfill('*');
	cout<<setiosflags(ios::internal);
	cout<<3<<endl;

	cout<<setiosflags(ios::showpos)<<setw(5)<<setfill('^')<<setiosflags(ios::internal)<<3<<"\n";
	cout<<setiosflags(ios::internal)<<setw(5)<<setfill('*')<<3<<endl;
	cout<<setiosflags(ios::internal)<<setw(5)<<setfill('*')<<-3<<endl;

	cout<<setiosflags(ios::internal)<<setfill('$')<<setw(5)<<-3<<endl;

	cout<<setw(5)<<setfill('%')<<setiosflags(ios::showpos)<<setiosflags(ios::internal)<<3<<endl;

	/*
	   this statement is similar to writing:

	   cout.width(5);
	   cout.fill('%');
	   cout.setf(ios::showpos);
	   cout.setf(ios::internal, ios::adjustfield);
	   cout<<3<<endl;
	   */

	cout.width(5);
	cout.fill('%');
	cout.setf(ios::showpos);
	cout.setf(ios::internal, ios::adjustfield);
	cout<<3<<endl;

	cout<<setfill('#')<<setw(5)<<setiosflags(ios::internal)<<setiosflags(ios::showpos)<<3<<endl;
	/* this is same as writing:
	   cout.fill('#');
	   cout.width(5);
	   cout.setf(ios::internal);
	   cout.setf(ios::showpos);
	   cout<<3<<endl;
	   */

	cout<<setfill('#')<<setw(5)<<setiosflags(ios::internal)<<-3<<endl;
	/* this is same as writing:
	   cout.fill('#');
	   cout.width(5);
	   cout.setf(ios::internal, ios::adjustfield);
	   cout<<-3<<endl;
	   */

	return 0;
}
