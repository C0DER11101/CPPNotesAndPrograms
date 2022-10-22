#ifndef Name_H
#define Name_H
#define PI 3.14

using namespace std;

class shape
{
	double base;
	double height;
	double radius;

	public:

	void get_data(double, double val=0);

	void display_area(string);
};

class triangle:public shape
{
};

class rectangle:public shape
{
};

class circle:public shape
{
};


#endif
