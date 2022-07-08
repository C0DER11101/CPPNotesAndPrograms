#include<iostream>
#include<string.h>

using namespace std;

int main(void)
{
	char str[100]="Programming";


	for(int i=1; i<=strlen(str); i++)
	{
		cout.write(str, i);
		cout<<"\n";
	}

	for(int i=strlen(str)-1; i>=1; i--)
	{
		cout.write(str, i);
		cout<<"\n";
	}

	return 0;
}
