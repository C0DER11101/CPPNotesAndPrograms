#include<iostream>
#include<stdlib.h>
#include<fstream>

using namespace std;

int main(void)
{
	char text;

	ifstream inF;

	inF.open("file3.txt");

	int ptrPos=inF.tellg();
	cout<<"\nPointer position: "<<ptrPos<<"\n";

	while(inF.eof()==0)
	{
		inF.get(text);
		cout<<text;
		cout<<inF.eof()<<"\n";
	}

	ptrPos=inF.tellg();

	inF.close();

	cout<<"\nPointer position: "<<ptrPos<<"\n";
	return 0;
}
