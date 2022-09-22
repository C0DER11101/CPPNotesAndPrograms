#include<iostream>
#include<math.h>

using namespace std;

int main(void)
{
	int num;

	cout<<"how many square roots do you want to see?: ";
	cin>>num;

	cout<<"Displaying square roots of the first "<<num<<" numbers:\n\n";

	cout<<"VALUE";
	cout.width(40);
	cout<<"Square Root Value:\n";

	for(int i=1; i<=num; i++)
	{
		cout<<i;
		cout.precision(3);
		cout.width(40);
		cout<<sqrt(i);
		cout<<"\n";
	}

	return 0;
}
