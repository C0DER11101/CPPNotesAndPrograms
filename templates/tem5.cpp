#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include<conio.h>
#include "LEN"

using namespace std;

template<class T>
void bubbleSort(T*);
int main(void)
{
	int arr[100]={0}, size;

	cout<<"enter size of the array: ";
	cin>>size;

	cout<<"enter elements into the array:\n\n";

	for(int i=0; i<size; i++)
		cin>>arr[i];

	bubbleSort(arr);

	cout<<"\nsorted array is:\n";

	for(int i=0; i<size; i++)
		cout<<arr[i]<<" ";
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
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}

}
