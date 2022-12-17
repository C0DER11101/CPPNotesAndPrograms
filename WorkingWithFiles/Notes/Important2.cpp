#include<iostream>
#include<stdlib.h>
#include<fstream>

using namespace std;


int main(void)
{
	int a[4];

	ifstream inF;

	inF.open("store.txt");

	inF.read((char*)&a, sizeof(a));


	for(int i=0; i<4; i++)
		cout<<a[i]<<" ";

	cout<<"\n";

	inF.close();

	return 0;
}
