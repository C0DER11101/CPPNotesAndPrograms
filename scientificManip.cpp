#include<iostream>
#include<iomanip>

using namespace std;


int main(void)
{
	float a=45.67321234;

	cout.setf(ios::scientific, ios::floatfield);
	cout<<a<<endl;

	cout.unsetf(ios::scientific);

	cout<<setiosflags(ios::scientific)<<a<<endl;
	cout<<resetiosflags(ios::scientific);
	cout<<a<<endl;

	cout.setf(ios::scientific, ios::floatfield);

	cout<<a<<endl;
	cout.unsetf(ios::scientific);
	cout<<a<<endl;

	cout<<"Using cout.unsetf() for setiosflags()!!\n\n";
	cout<<setiosflags(ios::scientific)<<a<<endl;
	cout.unsetf(ios::scientific);
	cout<<a<<endl;
	return 0;
}
