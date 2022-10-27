#include<iostream>
#include "LEN"
#include<stdlib.h>

using namespace std;

template<class T>
void bubbleSort(T*);

int main(void)
{
	char a[100]={'\0'};
	int size;

	cout<<"enter size of the array: ";
	cin>>size;

	cout<<"enter elements into the array:\n\n";

	for(int i=0; i<size; i++)
		cin>>a[i];

	bubbleSort(a);

	cout<<"\nSorted array:\n\n";

	for(int i=0; i<size; i++)
		cout<<a[i]<<" ";

	cout<<"\n";

	return 0;
}

template<class T>
void bubbleSort(T*a)
{
	int l=len(a);

	for(int i=0; i<l; i++)
	{
		for(int j=0; j<l-1; j++)
		{
			if(a[j]>a[j+1])
			{
				char temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
