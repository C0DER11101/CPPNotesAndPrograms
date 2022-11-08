#include<iostream>

using namespace std;

int main(void)
{
	int m=10;

	float x=20.5;

	int*intptr;
	float*floatptr;

	intptr=reinterpret_cast<int*>(m);
	floatptr=reinterpret_cast<float*>(x);

	cout<<intptr<<"\n";
	cout<<floatptr<<"\n";

	return 0;
}
