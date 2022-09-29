#include<iostream>

using namespace std;

class A
{
	int a;
	int b;

	public:
	A(int i, int j): a(i), b(2*j)
	{
		cout.setf(ios::left, ios::adjustfield);
		cout.width(30);
		cout<<"a";
		cout.unsetf(ios::left);
		cout<<"b"<<endl;
		cout.setf(ios::left, ios::adjustfield);
		cout.width(30);
		cout<<a;
		cout.unsetf(ios::left);
		cout<<b<<endl;
	}

};


int main(void)
{
	A a(2, 3);
	return 0;
}
