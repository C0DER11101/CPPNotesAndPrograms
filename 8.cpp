#include<iostream>
#include<string.h>

using namespace std;

int main(void)
{
	char str[10];

	cin.getline(str, 10);

	/*	for(int i=0; i<strlen(str); i++)
		{
		cout<<str[i];
		if(str[i]=='\n')
		cout<<"\nfound newline!";
		}
	 */

	cout<<str<<endl;

	return 0;
}
