#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<time.h>

using namespace std;

int main(void)
{
	char something[100];

	cout<<"enter something: ";
	cin>>something;

	ofstream outF("file3.txt");

	srand(time(NULL));

	int Random;

	Random=20+(rand()%50);
	outF<<something<<"\n";
	outF<<Random;
	return 0;
}
