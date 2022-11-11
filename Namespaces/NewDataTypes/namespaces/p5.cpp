#include<iostream>
#include<stdlib.h>

using namespace std;

namespace Classes
{
	class test
	{
		int _m;

		public:

		test():_m(0){}
		test(int val):_m(val){}

		void display()
		{
			cout<<"\n_m = "<<_m<<"\n";
		}

	};

}


int main(void)
{
	using namespace Classes;

	test t(20);

	t.display();
	return 0;
}
