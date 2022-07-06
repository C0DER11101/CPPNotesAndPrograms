#include<iostream>

using namespace std;

int main(void)
{
	char c;
	int count=0;

	cout<<"INPUT TEXT: ";

	cin.get(c);

	while(c!='\n')
	{
		cout.put(c);
		count++;
		cin.get(c);
	}

	cout<<"\n";

	cout<<"Number of characters: "<<count<<"\n";
	cout<<"\n";

	return 0;
}
