#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<conio.h>

using namespace std;

template<class T>
class sample
{
	int _a;
	string _id;

	public:

	sample():_a(0), _id("noid"){}

	sample(int a, string id):_a(a), _id(id){}

	~sample()
	{
		cout<<"\nDestructor for "<<_a<<" "<<_id<<"\n";
	}

	void show();
	void showError();
};

template<class T>
void sample<T>::show()
{

	if(_id=="a2")
	{
		_id="a3";
		cout<<"throwing\n";
		throw *this;
		cout<<"thrown\n";
	}
	cout<<"_a"<<setw(20)<<"_id\n";
	cout<<_a<<setw(20)<<_id<<"\n\n";
}


template<class T>
void sample<T>::showError()
{
	cout<<"\nERROR DETAILS:\n";
	cout<<"_a"<<setw(20)<<"_id\n";
	cout<<_a<<setw(20)<<_id<<"\n\n";
}

int main(void)
{
	sample<int>a(100, "a1"), b(120, "a2");

	try
	{
		a.show();
		b.show();
		cout<<"\nInside try block!!\n\n";
	}

	catch(sample<int>e)
	{
		e.showError();
		cout<<"\nAfter showing the error!!\n";
	}

	cout<<"\nOutside catch!\n";

	return 0;
}
