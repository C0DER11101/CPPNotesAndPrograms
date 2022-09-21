#include<iostream>

using namespace std;

int main(void)
{
	char s[100], ch;

	cout<<"enter a string: ";

	cin.getline(s, 5);

	cout<<"enter a character: ";
	cin>>ch;

	cout<<"\nThe string is: "<<s<<endl;

	cout<<"\nCharacter entered is: "<<(int)ch<<endl;

	return 0;
}
