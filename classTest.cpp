#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

class S
{
	int var;

	public:
	S(int val):var(val){}
	void show()
	{
		cout<<"var = "<<var<<"\n";
	}
};

int main(void)
{
	S s(30);

	s.show();
	return 0;
}
