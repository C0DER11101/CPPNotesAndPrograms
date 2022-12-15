#include<iostream>
#include<fstream>

using namespace std;

int main(void)
{
	ofstream writeF("file1.txt");

	char something[30]={'\0'};

	cout<<"\nenter some string: ";

	cin>>something;


	writeF<<something<<"\n";

	int number;

	cout<<"enter some number: ";
	cin>>number;

	writeF<<number<<"\n";
	return 0;
}
