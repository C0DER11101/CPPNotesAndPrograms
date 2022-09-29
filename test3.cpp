#include<iostream>

using namespace std;


class A
{
	int a;
	public:
	void greet()
	{
		cout<<"hello world!!\n\n";
	}

};


class B:A // by default it's private inheritance!!
{
	public:
		void Greet()
		{
			cout<<"Hello world\n\n";
			greet();
		}
};

int main(void)
{
	B b;

	b.Greet();

	return 0;
}
