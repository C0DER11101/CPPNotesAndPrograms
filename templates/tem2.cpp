#include<iostream>
#include<stdlib.h>

using namespace std;

template<class T1, class T2>
class Multiply
{
	T1 _a;
	T2 _b;

	public:

	Multiply(){}
	
	Multiply(T1 a, T2 b):_a(a), _b(b){}

	~Multiply()
	{
		cout<<"Destructor called for "<<_a<<" and "<<_b<<"\n";
	}

	void operator*(Multiply b)
	{
		cout<<_a*b._a<<"\n";
		cout<<_b*b._b<<"\n";
	}
};

int main(void)
{
	Multiply<int, float> a(3, 1.5), b(3, 1.2);

	a*b;

	return 0;
}
