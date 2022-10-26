#include<iostream>
#include<stdlib.h>

using namespace std;

class sample
{
	int*_a;
	int _size;

	public:

	sample():_a(NULL), _size(0){}

	sample(int size):_size(size)
	{
		_a=new int[size];
	}

	~sample()
	{
		cout<<"\nFreeing-up space!!\n";
		delete _a;
	}

	friend istream&operator>>(istream&, sample&);

	friend ostream&operator<<(ostream&, sample&);

};

istream&operator>>(istream&in, sample&s)
{
	for(int i=0; i<s._size; i++)
		in>>s._a[i];
	return in;
}

ostream&operator<<(ostream&out, sample&s)
{
	for(int i=0; i<s._size; i++)
		out<<s._a[i]<<" ";
	cout<<"\n";

	return out;
}


int main(void)
{
	sample s1(5);

	cout<<"enter elements: "; // remember, even when an operator is overloaded, its true meaning is not lost!!
	cin>>s1;  // equivalent to calling:   operator>>(cin, s1);
	cout<<"\ndisplaying the elements:\n";
	cout<<s1; // equivalent to calling:   operator<<(cout, s1);

	return 0;
}
