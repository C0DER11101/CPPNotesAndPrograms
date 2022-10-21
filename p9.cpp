#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

using namespace std;


class media
{
	protected:

	float price;
	char*title;

	public:
	media(char*t, float p): price(p)
	{
		title=new char[100];
		strcpy(title, t);
	}

	virtual void display();
};

void media::display()
{
	cout<<"\n\ndisplay() from class media!!\n\n";
}

class book:public media
{
	int pages;

	public:
	book(char*name, float p, int page):media(name, p)
	{
		pages=page;
	}

	void display();
	void destroy();
};

void book::display()
{
	cout<<"display() of class book\n\n";

	cout<<"Book name: "<<title<<"\n";
	cout<<"Price: "<<price<<"\n";
	cout<<"Pages: "<<pages<<"\n";
}

void book::destroy()
{
	delete title; 
}

class tape:public media
{
	float time;

	public:
	tape(char*name, float p, float duration):media(name, p)
	{
		time=duration;
	}

	void display();
	void destroy();
};

void tape::display()
{
	cout<<"display() of class tape\n\n";
	cout<<"Book name: "<<title<<"\n";
	cout<<"Price: "<<price<<"\n";
	cout<<"Duration: "<<time<<"\n";
}

void tape::destroy()
{
	delete title;
}

int main(void)
{
	char*book1;
	char*tape1;

	book1=new char[100];
	tape1=new char[100];

	strcpy(book1, "Hello");
	strcpy(tape1, "World");
	media *M;
	book b(book1, 900.23, 700);
	M=&b;
	M->display();

	tape t(tape1, 150.5, 200);
	M=&t;
	M->display();

	b.destroy();
	t.destroy();
	return 0;
}
