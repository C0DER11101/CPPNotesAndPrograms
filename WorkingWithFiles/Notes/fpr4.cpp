#include<iostream>
#include<fstream>

using namespace std;

int main(void)
{
	ifstream inF("file2.txt");

	char something[30];

	inF>>something;

	int Random;

	inF>>Random;


	cout<<"\nHere is the text that you entered: "<<something<<"\n";

	cout<<"The random number that was put into the file: "<<Random<<"\n";

	return 0;
}
