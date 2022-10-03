#include<iostream>
#include<stdlib.h>
#include<conio.h>

// POINTERS TO OBJECTS!!

using namespace std;

class sample
{
	int sampleVar;

	public:
	void sampleGet(int);
	void sampleShow();
};

void sample::sampleGet(int val)
{
	sampleVar=val;
}

void sample::sampleShow()
{
	cout<<"sampleVar="<<sampleVar<<"\n";
}

int main(void)
{
	sample s;

	cout<<"\nDisplaying class data member using object:\n";
	s.sampleGet(10);
	s.sampleShow();

	sample*sptr;
	sptr=&s;

	cout<<"\nDisplaying class data member using object pointer by using dereferencing operator:\n";
	(*sptr).sampleShow();

	cout<<"\nDisplaying class data member using object pointer by using arrow operator:\n";
	sptr->sampleShow();
	cout<<"\n";
	return 0;
}
