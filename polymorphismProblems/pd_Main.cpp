#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include "pd.h"
#include "pd.cpp"


int main(void)
{
	Sample s1, s2;

	s1.initObjects(102, 'A');
	s2.initObjects(404, 'B');

	s1.showObjectVal();
	s2.showObjectVal();

	s1.swapObjectVal(&s2);

	cout<<"\n\n\nAfter swapping values!!!\n\n\n";

	s1.showObjectVal();
	s2.showObjectVal();
	return 0;
}
