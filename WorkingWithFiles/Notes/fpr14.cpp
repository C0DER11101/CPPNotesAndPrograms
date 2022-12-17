#include<iostream>
#include<stdlib.h>
#include<fstream>

using namespace std;

int main(void)
{
	ofstream outF("file5.txt");

	float height[4]={12.3, 13.3, 14.3, 15.3};

	outF.write((char*)&height, sizeof(height));

	return 0;
}
