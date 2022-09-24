#include<iostream>
#include<iomanip>

using namespace std;

// CREATING USER-DEFINED MANIPULATORS!!!

ostream& posSign(ostream&); // a user-defined manipulator!!

int main(void)
{
	cout<<posSign<<3<<endl;
	return 0;
}


ostream& posSign(ostream& output)
{
	output<<setiosflags(ios::showpos);

	return output;
}
