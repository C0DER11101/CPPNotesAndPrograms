#include<iostream>
#include<iomanip>

using namespace std;

class alpha
{
	int alp;
	public:
	alpha(int val):alp(val)
	{
		cout<<"class alpha: "<<alp<<"\n";
	}

};

class beta
{
	int bt;
	float bta;

	public:
	beta(int val1, float val2):bt(val1), bta(val2)
	{
		cout<<"class beta: "<<bt<<","<<bta<<"\n";
	}
};

// Nested class

class gamma
{
	alpha a;
	beta b;
	int gam;
	// classes alpha and beta have been nested into class gamma!!!
	public:
	gamma(int x, float y):a(x), b(x, y)
	{
		gam=x;
		cout<<"class gamma: "<<gam<<"\n";
	}
};

int main(void)
{
	gamma gm(2, 4.5f);
	return 0;
}
