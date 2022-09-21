#include<iostream>

using namespace std;

class sample
{
	int a;

	public:
	sample()
	{
		cout<<"\n\nconstructor called!!!\n\n";
	}

	~sample()
	{
		cout<<"\n\ndestructor called!!!\n\n";
	}

	void greet()
	{
		cout<<"\n\nHello user!!!\n\n";
	}

	friend void getvalues(sample&s)
	{
		cout<<"enter value of a: ";
		cin>>s.a;
	}

	friend void showvalues(sample&s) // friend functions can access private members of a class !!!
	{
		cout<<"the value of a is: "<<s.a<<"\n";
	}

	void goodbye()
	{
		cout<<"\n\nGood bye user!!!!\n\n";
	}
};

int main(void)
{
	sample s1, s2;

	getvalues(s1);
	getvalues(s2);

	showvalues(s1);
	showvalues(s2);
	
	cout<<"\n\nback to main()!!\n\n";;
	return 0;
}
