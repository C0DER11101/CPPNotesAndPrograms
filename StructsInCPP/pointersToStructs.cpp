#include<iostream>
#include<stdlib.h>
#include<iomanip>

using namespace std;


struct sample
{
	private:
		int _a;
		int _b;

	public:
		sample():_a(0), _b(0){}
		sample(int a, int b):_a(a), _b(b){}

		~sample()
		{
			cout<<"\nClearing memory!!\n\n";
		}

		void showVal(sample&);
};

void sample::showVal(sample&s)
{
	cout<<"\nDetails of the object that called this function:\n";
	cout<<"_a"<<setw(20)<<"_b"<<"\n";
	cout<<this->_a<<setw(20)<<this->_b<<"\n";

	cout<<"\nDetails of the object that was sent as an argument to this function:\n";
	cout<<"_a"<<setw(20)<<"_b"<<"\n";
	cout<<s._a<<setw(20)<<s._b<<"\n";
}

int main(void)
{
	sample s1(2, 4), s2(6, 8);
	
	s1.showVal(s2);
	s2.showVal(s1);

	sample*p4=new sample(10, 12); // this another way of calling a constructor while allocating memory to a pointer to a structure or a class!!

	p4->showVal(s2);


	delete p4;

	return 0;
}
