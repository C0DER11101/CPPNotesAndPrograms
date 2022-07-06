#include<iostream>

using namespace std;

int main(void)
{
	char ch;

	cin.get(ch);

	while(ch!='\n')
	{
		cout.put(ch);
		cin.get(ch);
	}

	cout<<"\n";

	return 0;
}
