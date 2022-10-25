#include<iostream>
#include<stdlib.h>

using namespace std;

class sample
{
	int *_a;

	public:

	sample()
	{
		_a=new int[5];
	}

	/*~sample()
	{
		delete _a;
	}
	*/

	void initialize()
	{
		for(int i=0; i<5; i++)
			_a[i]=i+1;
	}

	void manipulate(int val, int index)
	{
		if(index>=5 || index<0)
			return;
		else
			_a[index]=val;
	}

	void display()
	{
		for(int i=0; i<5; i++)
			cout<<_a[i]<<" ";
		cout<<"\n\n";
	}

	void terminate()
	{
		delete _a;
	}
};

int main(void)
{
	sample s1, s2;
	
	cout<<"H"<<"\n";
	s1.initialize();

	s2=s1;
	s1.display();
	s2.display();

	s1.manipulate(30, 2);
	s1.display();
	s2.display();

	s2.manipulate(100, 0);

	s1.display();
	s2.display();

	s1.terminate();
	s2.terminate();

	return 0;
}
