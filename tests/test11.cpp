#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

class sample
{
	char*_s;

	public:
	sample()
	{
		_s=new char[100];
		strcpy(_s, "nostring");
	}

	sample(const char*str)
	{
		_s=new char[100];
		strcpy(_s, str);
	}

	~sample()
	{
		cout<<"Destructor called!!\n";
		if(_s!=NULL)
		{
			cout<<"\nDeleting "<<_s<<"\n\n";
			delete _s;
			_s=NULL;
		}
	}


	void displayAddress()
	{
		cout<<"Address of private member: ";
		cout<<&_s<<"\n";
	}

	void display()
	{
		cout<<_s<<"\n";
	}
};

int main(void)
{
	sample s1("Data"), s2("Structures"), s3;

	cout<<"s1: ";
	s1.display();
	s1.displayAddress();
	cout<<&s1<<"\n\n";
	cout<<"s2: ";
	s2.display();
	s2.displayAddress();
	cout<<&s2<<"\n\n";

	s3=s2;
	cout<<"s3: ";
	s3.display();
	s3.displayAddress();
	cout<<&s3<<"\n\n";
	cout<<&s2<<"\n\n";
	
	cout<<"Inside main:\n\n";

	return 0;
}
