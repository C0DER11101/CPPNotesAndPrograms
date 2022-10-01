#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

int main(void)
{
	int (*arptr)[10];
	int ar[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	arptr=&ar;

	for(int i=0; i<10; i++)
		cout<<*(*arptr+i)<<endl;
	return 0;
}
