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

		void showVal();
};

void sample::showVal()
{
	cout<<"_a = "<<_a<<"\n";
	cout<<"_b = "<<_b<<"\n";
}

int main(void)
{
	sample p1, p2(12, 13);

	cout<<"\nStructure variable p1:\n";
	p1.showVal();
	cout<<"\nStructure variable p2:\n";
	p2.showVal();
	return 0;
}
