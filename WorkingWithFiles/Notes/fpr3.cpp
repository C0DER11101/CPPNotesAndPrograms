#include<iostream>
#include<fstream>
#include<time.h>

using namespace std;

int main(void)
{
	ofstream outF("file2.txt");
	
	char something[30];
	srand(time(NULL));

	cout<<"enter some string: ";
	cin>>something;

	outF<<something<<"\n";

	int Random;
	Random=1+rand()%30;

	outF<<Random;

	outF.close();

	return 0;
}
