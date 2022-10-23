#include<iostream>
#include<stdlib.h>

using namespace std;

class sample
{
	int a;
	int b;

	public:
	void getvalue()
	{
		a=25;
		b=40;
	}

	friend float mean(sample s);
};

float mean(sample s)
{
	return (((float)(s.a+s.b))/2);
}


int main(void)
{

	sample s;

	float Mean;
	s.getvalue();
	Mean=mean(s);
	cout<<"Mean = "<<Mean<<"\n";
	return 0;
}
