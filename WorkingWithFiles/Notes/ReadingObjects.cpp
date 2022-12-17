#include<iostream>
#include<fstream>
#include<stdlib.h>

using namespace std;

class sample
{
	int _a[4];

	public:

	void showVal();
};

void sample::showVal()
{
	for(int i=0; i<4; i++)
		cout<<_a[i]<<" ";
	cout<<"\n";
}

int main(void)
{
	sample obj;

	ifstream inF("ObjectWrite.txt");

	inF.read((char*)&obj, sizeof(obj));

	obj.showVal();

	return 0;
}
