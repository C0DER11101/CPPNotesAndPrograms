#include<iostream>

using namespace std;

int main(void)
{
	char c, b, d, a;

	cin.get(c);
	cin.get(b);
	cin.get(d);

	try
	{
		cin.get(a);

		if(a=='\n')
			if(b==' ')
				throw b;
			else
				throw a;

	}

	catch(char ss)
	{
		cout<<(int)ss<<"\n";
	}

	cout<<(int)c<<" "<<(int)b<<" "<<(int)d<<"\n";

	return 0;
}
