#include<iostream>
#include<fstream>

using namespace std;

int main(void)
{
	ifstream inF("file3.txt");

	char something[30];

	cout<<"\nSomething from the file:\n";

	while(inF.eof()==0)
	{
		inF.getline(something, 30);
		cout<<something<<"\n";
	}

	return 0;
}
