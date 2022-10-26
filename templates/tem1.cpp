#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

template<class T>
class Vector
{
	T*_v;
	int _size;

	public:
	
	Vector():_v(NULL), _size(0){}

	Vector(int size):_size(size)
	{
		_v=new T[size];
	}

	~Vector()
	{
		cout<<"\nDestructor called!!\n";
		delete _v;
	}

	void initVector()
	{
		for(int i=0; i<_size; i++)
			cin>>_v[i];
	}

	void operator*(int num)
	{
		for(int i=0; i<_size; i++)
			_v[i]*=num;
	}

	void showVector()
	{
		for(int i=0; i<_size; i++)
			cout<<_v[i]<<" ";
	}
};

int main(void)
{
	Vector<int>v1(5), v2(5);

	cout<<"\nenter elements into vector-1:\n";
	v1.initVector();

	cout<<"\nenter elements into vector-2:\n";
	v2.initVector();

	cout<<"\nVector-1:\n";
	v1.showVector();

	cout<<"\nVector-2:\n";
	v2.showVector();

	v1*2;
	v2*5;

	cout<<"\nVector-1:\n";
	v1.showVector();

	cout<<"\nVector-2:\n";
	v2.showVector();

	cout<<"\n";

	return 0;
}
