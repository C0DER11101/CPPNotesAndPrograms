#include<iostream>
#include<stdlib.h>

using namespace std;

struct sample
{
	private:
		int*_ar;
		int _size;

	public:
		sample():_ar(NULL), _size(0){}

		sample(int size):_size(size){
			_ar=new int[_size];
		}

		~sample()
		{
			cout<<"\n\nCleaning memory!!\n\n";

			delete _ar;
		}

		void GetVal()
		{
			cout<<"\nenter values:\n";
			for(int i=0; i<_size; i++)
			{
				cout<<"["<<i<<"]";
				cin>>_ar[i];
			}
		}
		void showVal();
};

void sample::showVal()
{
	cout<<"\nValues are:\n";

	for(int i=0; i<_size; i++)
		cout<<_ar[i]<<" ";
}

int main(void)
{
	sample p1, p2(5);

	p2.GetVal();
	p2.showVal();
	return 0;
}
