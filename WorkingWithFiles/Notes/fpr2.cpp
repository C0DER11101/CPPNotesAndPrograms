#include<iostream>
#include<fstream>

using namespace std;

int main(void)
{
	ifstream readF("file1.txt");

	char something[30];

	readF>>something;

	int number;

	readF>>number;

	cout<<"\nHere is the string from the file: "<<something;
	cout<<"\nHere is the number from the file: "<<number<<"\n";

	return 0;
}
