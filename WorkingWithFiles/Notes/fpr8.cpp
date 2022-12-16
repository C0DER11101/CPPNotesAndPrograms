#include<iostream>
#include<fstream>

using namespace std;

// about output pointer

int main(void)
{
	ofstream outF;

	int ptrPos;
	
	outF.open("file3.txt", ios::app); // opening the file in append mode!!

	ptrPos=outF.tellp();
	cout<<"\nPointer position in file3.txt: "<<ptrPos<<"\n";


	outF.close();

	outF.open("file2.txt", ios::app);

	ptrPos=outF.tellp();

	cout<<"Pointer position in file2.txt: "<<ptrPos<<"\n";

	outF.close();

	outF.open("file1.txt", ios::app);

	ptrPos=outF.tellp();

	cout<<"Pointer position in file1.txt: "<<ptrPos<<"\n";

	outF.close();


	return 0;
}
