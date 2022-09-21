#include<iostream>

using namespace std;

class sample
{
	static int count;

	public:

	sample()
	{
		count++;
	}

	void Number_of_objects()
	{
		cout<<count<<" objects were created!!!\n\n";
	}

};

int sample::count; // definition of static data member!!

int main(void)
{
	sample s1, s2, s3, s4, s5;

	s1.Number_of_objects();

	return 0;
}
