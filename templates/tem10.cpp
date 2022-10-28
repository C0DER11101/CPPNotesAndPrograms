#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

template<class T, int size>
class Array
{
	T*_a;

	public:

	Array()
	{
		_a=new T[size];
	}

	~Array()
	{
		delete _a;
		cout<<"\nMemory cleared\n";
	}

	void initialize();
	void show();
};

template<class T, int size>
void Array<T, size>::initialize()
{
	cout<<"enter elements into the array:\n\n";

	for(int i=0; i<size; i++)
		cin>>_a[i];
}

template<class T, int size>
void Array<T, size>::show()
{
	cout<<"\n\nhere are the elements:\n\n";

	for(int i=0; i<size; i++)
		cout<<_a[i]<<" ";
	cout<<"\n";
}

int main(void)
{
	Array<int, 5> a;
	a.initialize();
	a.show();
	return 0;
}
