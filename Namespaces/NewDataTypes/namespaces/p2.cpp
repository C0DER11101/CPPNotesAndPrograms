#include<iostream>

using namespace std;

// nested namespaces

namespace NS1
{
	int m=1200;

	namespace NS2
	{
		int v=1000;
	}
}

int main(void)
{
	cout<<"\nVariable of namespace 2:\n";
	cout<<NS1::NS2::v<<"\n";
	using namespace NS1;

	cout<<"\nVariable of namespace 1:\n";
	cout<<m<<"\n";
	cout<<"\nVariable of namespace 2:\n";
	cout<<NS2::v<<"\n";

	using namespace NS1::NS2;
	cout<<"\nVariable of namespace 1:\n";
	cout<<m<<"\n";
	cout<<"\nVariable of namespace 2:\n";
	cout<<v<<"\n";
	return 0;
}
