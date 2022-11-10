#include<iostream>
#include<stdlib.h>

using namespace std;

// un-named namespaces!!

namespace N1
{
	int m=100;
}

namespace N2
{
	int n=200;
}

namespace
{
	int m=300;
}

int main(void)
{
	using namespace N2;
	cout<<"\nvariable of namespace N1: "<<N1::m<<"\n";
	cout<<"\nvariable of namespace N2: "<<n<<"\n";
	cout<<"\nvariable of un-named namespace: "<<m<<"\n";
	return 0;
}
