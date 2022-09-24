#include<iostream>
#include<iomanip>
#include<string.h>

using namespace std;

class List
{
	char*itemName;
	int code;
	float cost;

	public:

	void ItemData(char*, int, float);
	void ShowData();
	void terminate();
};

void List::ItemData(char*nme, int cde, float cst)
{
	itemName=new char[100];
	strcpy(itemName, nme);
	code=cde;
	cost=cst;
}

void List::ShowData()
{
	cout<<setiosflags(ios::left)<<setw(50)<<setfill('-')<<itemName;
	cout<<setw(50)<<setfill('-')<<code;
	cout<<setiosflags(ios::right)<<setprecision(2)<<setiosflags(ios::fixed)<<cost<<endl;
	cout.unsetf(ios::right);
}

void List::terminate()
{
	delete itemName;
}

int main(void)
{
	int n, code;
	float cost;
	char*name;
	name=new char[100];

	cout<<"enter number of items: ";
	cin>>n;
	getchar();

	List*list=new List[n];

	for(int i=0; i<n; i++)
	{
		cout<<"ITEM "<<i+1<<":\n";
		cout<<"name: ";
		cin.getline(name, 100);
		cout<<"code: ";
		cin>>code;
		cout<<"cost: ";
		cin>>cost;
		list[i].ItemData(name, code, cost);
		getchar();
	}

	cout<<"\n\n\n\n";

	cout<<setiosflags(ios::left)<<setw(50)<<setfill('-')<<"NAME";
	cout<<setw(50)<<setfill('-')<<"CODE";
	cout<<setiosflags(ios::right)<<"COST"<<endl;
	cout<<resetiosflags(ios::right);

	for(int i=0; i<n; i++)
		list[i].ShowData();


	delete name;

	for(int i=0; i<n; i++)
		list[i].terminate();

	delete list;

	return 0;
}
