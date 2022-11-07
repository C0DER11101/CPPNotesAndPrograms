#include<iostream>

using namespace std;

int main(void)
{
	// BOOL ARITHMETIC
	
	bool a, b;
	int m=2, result;

	a=true, b=false;

	result=b+5*m-a;
	cout<<b<<" + "<<5<<" * "<<m<<" - "<<a<<" = "<<result<<"\n";

	return 0;
}
