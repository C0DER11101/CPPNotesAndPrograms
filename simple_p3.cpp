#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

void(*fptr)(int, int); // function pointer!!
void sum(int, int);
int main(void)
{
	fptr=sum;

	fptr(10, 20);
	return 0;
}

void sum(int a, int b)
{
	cout<<a+b<<endl;
}
