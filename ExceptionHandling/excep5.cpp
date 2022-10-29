#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

using namespace std;

template<class T>
class Error
{
	T*_a;
	int _size;
	string _id;

	static int _count;

	public:

	Error():_a(NULL), _size(0), _id("noid"){}

	Error(int size, string id):_size(size), _id(id)
	{
		_a=new T[_size];
	}

	~Error()
	{
		/* for objects e and b(in show()), this condition will be false, it will be true only for objects a(in main()) and b(in main())*/
		if(_count!=0 && _count!=1 && _count<4) // for objects a and b in the main() function(recall, object assignment when they have pointers as data members!!)
		{
			cout<<"\nObject with objectID: "<<_id<<"\n";
			delete _a;
			_count++;
		}

		else
		{
			_count++;
		}

		cout<<"Clearing memory!!\n\n";
	}

	void initialize();

	void show();
	void showError();
};

template<class T>
int Error<T>::_count;

template<class T>
void Error<T>::initialize()
{
	for(int i=0; i<_size; i++)
		_a[i]=i+1;
}

template<class T>
void Error<T>::show()
{
	if(_id=="a2")
		throw *this;

	cout<<"\nArray:\n";

	for(int i=0; i<_size; i++)
		cout<<_a[i]<<" ";
	cout<<"\n";

	cout<<"Object id: "<<_id<<"\n";

	cout<<"\n";
}

template<class T>
void Error<T>::showError()
{
	cout<<"\nArray:\n";

	for(int i=0; i<_size; i++)
		cout<<_a[i]<<" ";
	cout<<"\n";

	cout<<"Object id: "<<_id<<"\n";

	cout<<"\n";
}

int main(void)
{
	Error<int> a(5, "a1"), b(5, "a2");

	a.initialize();
	b.initialize();

	try
	{
		a.show();
		b.show();
	}

	catch(Error<int>e)
	{
		cout<<"\nCaught error object!!\n\n";
		e.showError();
	}

	return 0;
}
