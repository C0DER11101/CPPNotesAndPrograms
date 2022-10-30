#include<iostream>
#include<stdlib.h>

using namespace std;

template<class T>
class sample
{
	T* _a;
	int _size;
	//static int _count;

	public:

	sample():_a(NULL), _size(0){}
	sample(int size):_size(size)
	{
		_a=new T[_size];
	}

	~sample()
	{
		cout<<"\nDe-allocating memory!!\n\n";
			delete _a;
	}

	void initialize();
	sample&operator+(sample&);
	void show();
};

/*
template<class T>
int sample<T>::_count;
*/

template<class T>
void sample<T>::initialize()
{
	cout<<"\nEnter elements:\n";

	for(int i=0; i<_size; i++)
		cin>>_a[i];
}

template<class T>
sample<T>& sample<T>::operator+(sample&s)
{
	for(int i=0; i<_size; i++)
		_a[i]+=s._a[i];


	return *this;
}

template<class T>
void sample<T>::show()
{
	for(int i=0; i<_size; i++)
		cout<<_a[i]<<" ";
	cout<<"\n";
}


int main(void)
{
	sample<int> a(5), b(5);

	a.initialize();
	b.initialize();

	cout<<"\n\nHere are the two arrays:\n\n";
	a.show();
	b.show();

	a=a+b;

	cout<<"\n\nThe two arrays after adding first array to the second array:\n\n";
	a.show();
	b.show();

	return 0;
}
