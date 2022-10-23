#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

double raise(double value, int power=2);

int main(void)
{
	double num;

	int power;

	cout<<"enter a number: ";
	cin>>num;

	cout<<"Square of "<<num<<" is: "<<raise(num)<<"\n";

	cout<<"enter power you want "<<num<<" to be raised to : ";
	cin>>power;

	cout<<num<<" raised to the power "<<power<<" is: "<<raise(num, power)<<"\n";
	return 0;
}

double raise(double num, int powr)
{
	if(powr==2)
		return num*num;

	else
	{
		int product=1;
		for(int i=0; i<powr; i++)
		{
			product*=num;
		}
		return product;
	}

}
