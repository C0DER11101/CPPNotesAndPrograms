#include<iostream>
#include<fstream>

using namespace std;

int main(void)
{
	int a[4]={65, 66, 67, 68};

	ofstream outF;

	outF.open("store.txt");

	outF.write((char*)&a, sizeof(a));

	outF.close();

	return 0;
}
