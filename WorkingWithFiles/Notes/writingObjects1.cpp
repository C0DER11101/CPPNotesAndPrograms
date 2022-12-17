#include<iostream>
#include<stdlib.h>
#include<fstream>

using namespace std;


class sample
{
	int _a[4];

	public:

	sample()
	{
		for(int i=0; i<4; i++)
			_a[i]=0;
	}

	void getVal();
};

void sample::getVal()
{
	cout<<"enter values into the array: ";

	for(int i=0; i<4; i++)
	{
		cout<<"["<<i<<"]: ";
		cin>>_a[i];
	}
}


int main(void)
{
	ofstream outF("ObjectWrite.txt");

	sample obj1;

	obj1.getVal();


	outF.write((char*)&obj1, sizeof(obj1));
	return 0;
}
