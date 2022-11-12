#include<iostream>

using namespace std;

template<class T>
struct sample
{
	T*a;

	public:
	void init(int size)
	{
		a=new T[size];

		for(int i=0; i<size; i++)
			a[i]=i;
		display(size);
	}

	void display(int size)
	{
		for(int i=0; i<size; i++)
			cout<<a[i]<<" ";
	}

	void rmv()
	{
		delete a;
	}

};


int main(void)
{
	sample<int>a;
	a.init(5);
	a.rmv();
	return 0;
}
