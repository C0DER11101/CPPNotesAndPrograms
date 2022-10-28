#include<iostream>
#include<stdlib.h>

using namespace std;

template<class T>
class Array
{
	T*_array;

	int _size;

	public:

	Array():_array(NULL), _size(0){}

	Array(int size):_size(size)
	{
		_array=new T[_size];
	}

	~Array()
	{
		delete _array;
		cout<<"\ncleaning up memory!!\n\n";
	}

	void initialize();

	Array&operator+(Array&);

	void show();
};

template<class T>
void Array<T>::initialize()
{
	cout<<"\nenter elements:\n";
	for(int i=0; i<_size; i++)
		cin>>_array[i];
}

template<class T>
Array& Array<T>::operator+(Array&arr)
{
	for(int i=0; i<_size; i++)
		_array[i]+=arr._array[i];

	return *this;
}

template<class T>
void Array<T>::show()
{
	for(int i=0; i<_size; i++)
		cout<<_array[i]<<" ";
	cout<<"\n";
}

int main(void)
{
	Array<int>a(5), b(5);

	a.initialize();
	b.initialize();

	a.show();
	b.show();

	a=a+b;

	a.show();
	b.show();

	return 0;
}
