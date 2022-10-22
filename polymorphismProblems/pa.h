#ifndef ProblemA_H
#define ProblemA_H

using namespace std;

class shape
{
	double base;
	double height;

	public:

	void get_data(double, double);

	void display_area();
};

class triangle:public shape
{
	double area;
};

class rectangle:public shape
{
	double area;
};


#endif
