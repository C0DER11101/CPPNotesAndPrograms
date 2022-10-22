#ifndef Name_H
#define Name_H

using namespace std;

void sort(int*, int);
void order(void (*)());

class Order 
{
	public:
		virtual void desc(int*, int);
};

#endif
