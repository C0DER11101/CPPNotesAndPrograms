#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

void sort(int*, int);
int main(void)
{

	int*a, size;

	cout<<"enter size of the array: ";
	cin>>size;

	a=new int[size];

	cout<<"\nenter elements into the array:\n\n";

	for(int i=0; i<size; i++)
		cin>>*(a+i);

	void (*order)(int*, int);

	order=sort;

	order(a, size);

	cout<<"\n\nhere is the sorted array:\n\n";
	
	for(int i=0; i<size; i++)
		cout<<a[i]<<" ";


	delete a;
	cout<<"\n\n";
	return 0;
}


void sort(int*a, int size)
{
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<size-1; j++)
		{
			if(a[j]>a[j+1])
			{
				int temp;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}

}
