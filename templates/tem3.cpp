#include<iostream>
#include<stdlib.h>
#include<iomanip>

using namespace std;

template<class T1=int, class T2=int> // default types in templates!!!
class test
{
	T1 _a;
	T2 _b;

	public:

	test(){}
	
	test(T1 a, T2 b):_a(a), _b(b){}

	~test()
	{
		cout<<"Destructor called!!\n";
	}

	void show()
	{
		cout<<"_a"<<setw(20)<<"_b"<<"\n";
		cout<<_a<<setw(20)<<_b<<"\n\n\n";
	}
};

int main(void)
{
	test<int, float> a(12, 45.6);
	test<char, char> b(122, 'a');
	test<> c('A', 'a'); // no type provided inside <>, this means by default, the type will taken as int

	a.show();
	b.show();
	c.show();

	return 0;
}
