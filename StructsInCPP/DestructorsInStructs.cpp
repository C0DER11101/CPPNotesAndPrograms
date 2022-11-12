#include<iostream>
#include<stdlib.h>

using namespace std;

struct sample
{
	private:
		int _a;
		int _b;

	public:
		sample():_a(0), _b(0){}
		sample(int va, int vb):_a(va), _b(vb){}
		~sample()
		{
			cout<<"\nStructure destructor called!!\n\n";
		}

		void showVal();
};

void sample::showVal()
{
	cout<<"_a = "<<_a<<"\n";
	cout<<"_b = "<<_b<<"\n";
}

int main(void)
{
	sample p1, p2(20, 30);

	cout<<"\nStructure object-1:\n";
	p1.showVal();

	cout<<"\nStructure object-2:\n";
	p2.showVal();
	return 0;
}
