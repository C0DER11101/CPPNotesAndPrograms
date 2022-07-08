#include<iostream>

using namespace std;


struct sample
{
	private:
		int age;
		string name;
	public:

		void getData();
		void showData();
};

void sample::getData()
{
	cout<<"enter age: ";
	cin>>age;
	cout<<"enter name: ";
	cin>>name;
}

void sample::showData()
{
	cout<<"Name is "<<name<<"\n";
	cout<<"\nAge is "<<age<<"\n";
}

int main(void)
{
	sample A;

	cout<<"\nMember function of struct sample>>>\n\n";
	A.getData();
	cout<<"\nMember function of struct sample>>>\n\n";
	A.showData();

//	cout<<"\n\ntrying private members of a struct: "<<A.age<<" & "<<A.name<<endl;  this statement will throw an error!! age and name are private members of sample
	return 0;
}
