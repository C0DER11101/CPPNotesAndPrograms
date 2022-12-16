#include<iostream>
#include<stdlib.h>
#include<fstream>

using namespace std;

int main(void)
{
	ifstream inF;

	char something[100];

	inF.open("file3.txt");

	while(inF.eof()==0)
	{
		inF.getline(something, 100);
	}

	cout<<"\nFound something in the text file: "<<something<<"\n";
	return 0;
}
