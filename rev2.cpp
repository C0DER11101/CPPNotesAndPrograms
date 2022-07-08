#include<iostream>

using namespace std;

enum{FALSE, TRUE};

enum colors{red=1, blue, white, brown, black, orange};
int main(void)
{
	colors aColor;


	aColor=black;

	cout<<"Value of black color is: "<<aColor<<"\n";

	return 0;
}
