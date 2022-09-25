#include<iostream>
#include<string.h>
#include<iomanip>

using namespace std;

// number of words left to be displayed!!

int main(void)
{
	char**text;
	int strCounter=0;

	text=new char*[100];

	for(int i=0; i<100; i++)
		text[i]=new char[100];

	cout<<"enter a text: ";

	for(int i=0; i<100; i++)
	{
		cin.getline(text[i], 100);
		strCounter++;

		for(int j=0; j<strlen(text[i]); j++)
		{
			if(text[i][j]=='<') // '<' indicates don't take anymore input or stop taking inputs from the user!!
			{
				i=100;
				break;
			}

		}

	}

	for(int i=0; i<strCounter; i++) // removing any string that had been entered after '<'
	{
		for(int j=0; j<strlen(text[i]); j++)
		{
			if(text[i][j]=='<')
			{
				int len=strlen(text[i]);
				for(int k=j; k<len; k++)
				{
					text[i][k]='\0';
				}
			}
		}
	}

	int lineCounter=0, wordCounter=0, charCounter=0;


	for(int i=0; i<strCounter; i++) // couting the number of words and number of lines!!
	{
		if(text[i][0]!='\0')
			lineCounter++;
	}

	for(int i=0; i<strCounter; i++)
		charCounter+=strlen(text[i]);


	cout<<"Number of lines in the text!!\n\n";

	cout.setf(ios::left, ios::adjustfield);
	for(int i=0; i<strCounter; i++)
		cout<<"\n"<<text[i];

	cout<<setw(40);
	cout<<resetiosflags(ios::left);
	cout<<lineCounter<<endl<<endl;

	/*cout<<"Number of words!\n\n";
	cout<<setiosflags(ios::left);
	for(int i=0; i<strCounter; i++)
		cout<<"\n"<<text[i];
	cout<<setw(40);
	cout<<resetiosflags(ios::left);
	cout<<wordCounter<<endl;
	*/

	cout<<"Number of characters!!\n\n";
	cout<<setiosflags(ios::left);
	for(int i=0; i<strCounter; i++)
		cout<<"\n"<<text[i];
	cout<<setw(40);
	cout<<resetiosflags(ios::left);
	cout<<charCounter<<endl;

	for(int i=0; i<100; i++)
		delete text[i];

	delete text;
	return 0;
}
