#include<iostream>
#include<stdlib.h>
#include<fstream>

using namespace std;

int main(void)
{
	float height[4];
	ifstream inF("file5.txt");

	inF.read((char*)&height, sizeof(height));

	cout<<"\nValues from the text file:\n";

	for(int i=0; i<4; i++)
		cout<<height[i]<<" ";
	cout<<"\n";

	return 0;
}
