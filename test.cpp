#include<iostream>

using namespace std;

class A
{
	private:
		int a;
	protected:
		int b;
	public:
		void get_ab(int, int);
		void show();
};

void A::get_ab(int n1, int n2)
{
	a=n1, b=n2;

}

void A::show()
{
	cout<<"a="<<a<<"\n";
	cout<<"b="<<b<<"\n";
}

int main(void)
{
	A obj;

	obj.get_ab(2, 3);
	obj.show();
	//obj.b=30; // cannot access protected members(visibility is same as private members)!!
	//obj.show();


	return 0;
}
