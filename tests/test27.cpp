#include<iostream>
#include<stdlib.h>

using namespace std;

namespace N1
{
	int m=10;

	namespace N2
	{
		int v=20;
	}
}

int main(void)
{
	using namespace N2; // -> error!!!
	cout<<"\nVariable of namespace-2:\n";
	cout<<v<<"\n";
	return 0;
}
