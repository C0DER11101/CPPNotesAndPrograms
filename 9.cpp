#include<iostream>
#include<string.h>

using namespace std;

int main(void)
{
	char s[100];

	cout<<"\nenter a string: ";
	cin.getline(s, 100);
	
	cout<<"\ndisplaying using some random length:\n";

	cout.write(s, 20);

	cout<<"\ndisplaying using length of the entered string:\n";

	cout.write(s, strlen(s));

	cout<<"\ndisplaying again using some random length:\n";

	cout<<"\n";
	cout.write(s, 10);

	cout<<"\n";

	return 0;
}
