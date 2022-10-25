#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<conio.h>

using namespace std;

class String
{
	char*_s;

	static int count;

	public:
	String():_s(NULL){}

	String(const char*str)
	{
		_s=new char[100];
		strcpy(_s, str);
	}

	~String()
	{
		cout<<"\n\nDestructor called\n\n";
		if(count<3)
		{
			if(_s!=NULL)
			{
				cout<<"Deleting: "<<_s<<"\n";
				delete _s;
			}
		}
		count++;
	}

	friend String&operator+(String&, String&);
	bool operator<=(String&);

	void display();

	void terminate();
};

int String::count;

String&operator+(String&s1, String&s2)
{
	strcat(s1._s, s2._s);
	return s1; // creating an object and returning it!!
}

bool String::operator<=(String&s)
{
	if(strlen(_s)<=strlen(s._s))
		return true;

	else
		return false;
}

void String::display()
{
	cout<<_s<<"\n";
}

/*void String::terminate()
{
	delete _s;
}
*/

int main(void)
{
	String s1("Data"), s2("Structures"), s3;

	cout<<"s1: ";
	s1.display();

	cout<<"s2: ";
	s2.display();

	if(s1<=s2)
		cout<<"s2 is greater than or equal to s1\n";
	else
		cout<<"s1 is greater than s2\n";

	cout<<"\nBefore concatenation\n";
	s3=s1+s2;
	cout<<"\nAfter concatenation\n";

	cout<<"s3: ";
	s3.display();


//	s1.terminate();
//	s2.terminate();


	return 0;
}
