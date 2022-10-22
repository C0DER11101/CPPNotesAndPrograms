#ifndef ProblemA_H
#define ProblemA_H

using namespace std;

class shape
{
	double base;
	double height;

	public:

	void get_data(double, double);

	void display_area(string);
};

class triangle:public shape
{
};

class rectangle:public shape
{
};


#endif
