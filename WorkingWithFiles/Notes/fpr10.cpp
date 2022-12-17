#include<iostream>
#include<stdlib.h>
#include<fstream>

using namespace std;

int main(void)
{
	ofstream outF;
	outF.open("file4.txt");

	char ch;

	cout<<"enter a text: ";
	cin.get(ch);

	while(ch!='\n')
	{
		outF.put(ch);
		cin.get(ch);
	}

	outF.close();
	return 0;
}
