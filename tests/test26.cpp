#include<iostream>

using namespace std;

// Nested namespaces!!

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
	cout<<"\nVariable of namespace-1:\n";
	cout<<N1::m<<"\n";
	//---- No error ----

	using namespace N1::N2;
	cout<<"\nVariable of namespace-2:\n";
	cout<<v<<"\n";
	//---- No error ----
	
	cout<<"\nVariable of namespace-1:\n";
	cout<<m<<"\n";
	//---- Error ----

	return 0;
}
