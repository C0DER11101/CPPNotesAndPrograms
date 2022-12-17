#include<iostream>
#include<stdlib.h>
#include<fstream>

using namespace std;

int main(void)
{
	ifstream inF;
	char ch;
	inF.open("file4.txt");

	while(inF.eof()==0)
	{
		inF.get(ch);
		if(inF.eof()!=0)
			break;

		cout<<ch;
	}

	inF.close();
	return 0;
}
