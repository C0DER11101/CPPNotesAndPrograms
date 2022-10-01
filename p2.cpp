#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

using namespace std;

int main(void)
{
	// pointers to strings!!!
	char num[]="one";
	const char*numstr="one";

	cout<<"Printing num character by character:\n";
	for(int i=0; i<strlen(num); i++)
		cout<<num[i];
	cout<<"\nPrinting num using cout:\n";
	cout<<num;
	cout<<"\n";

	cout<<"\nPrinting numstr character by character:\n";
	for(int i=0; i<3; i++)
		cout<<numstr[i];
	cout<<"\nPrinting numstr using cout:\n";
	cout<<numstr<<"\n";
	return 0;
}
