#include<iostream>
#include<stdlib.h>

using namespace std;

template<class T>
class Array
{
	T*_a;
	int _size;

	public:

	Array():_a(NULL), _size(0){}

	Array(int size):_size(size)
	{
		_a=new T[_size];
	}

	~Array()
	{
		cout<<"Cleaning memory!!\n\n";
		delete _a;
	}

	void initialize();
	void show();
};

template<class T>
void Array<T>::initialize()
{
	cout<<"enter elements:\n\n";

	for(int i=0; i<_size; i++)
		cin>>_a[i];
}

template<class T>
void Array<T>::show()
{
	cout<<"\ndisplaying elements:\n\n";
	
	for(int i=0; i<_size; i++)
		cout<<_a[i]<<" ";
	cout<<"\n";
}

int main(void)
{
	Array<int> a(5);
	a.initialize();
	a.show();
	return 0;
}
