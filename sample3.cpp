#include<iostream>
#include<iomanip>

using namespace std;

int main(void)
{
	cout<<setiosflags(ios::internal)<<setw(15)<<setfill('*')<<setiosflags(ios::showpos)<<3<<endl;

	cout<<setw(15)<<setfill('*')<<setiosflags(ios::internal)<<setiosflags(ios::showpos)<<3<<endl;
	cout<<setiosflags(ios::showpos)<<setiosflags(ios::internal)<<setw(15)<<setfill('*')<<3<<endl;

	cout<<setiosflags(ios::internal)<<setw(15)<<setfill('*')<<-3<<endl;
	return 0;
}
