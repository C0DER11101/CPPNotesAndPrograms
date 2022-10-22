#include<iostream>
#include<stdlib.h>
#include "pe.h"
#include "pe.cpp"


int main(void)
{
	int *a, size;

	cout<<"enter size of the array: ";
	cin>>size;

	a=new int[size];

	cout<<"enter elements into the array:\n\n";

	for(int i=0; i<size; i++)
		cin>>*(a+i);

	order(a, size, sort);

	cout<<"\n\nthe sorted array is:\n\n";
	for(int i=0; i<size; i++)
		cout<<*(a+i)<<" ";

	cout<<"\n";

	Order Ord;

	Ord.desc(a, size);
	cout<<"\n\nthe sorted array in descending order:\n\n";
	for(int i=0; i<size; i++)
		cout<<*(a+i)<<" ";
	cout<<"\n\n";

	delete a;

	return 0;
}
