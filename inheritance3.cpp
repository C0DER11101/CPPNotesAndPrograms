#include<iostream>
#include<iomanip>

using namespace std;

class machine
{
	int machNo;

	protected:
	int MacID;

	public:
	void get_No_ID(int, int);
	void put_No_ID();
};

void machine::get_No_ID(int mno, int mID)
{
	machNo=mno;
	MacID=mID;
}

void machine::put_No_ID()
{
	cout.setf(ios::left, ios::adjustfield);
	cout<<"MACHINE NO."<<setw(40);
	cout.unsetf(ios::left);
	cout<<"MACHINE ID"<<endl;
	cout<<setiosflags(ios::left);
	cout<<machNo<<setw(40);
	cout<<resetiosflags(ios::left);
	cout<<MacID<<endl;
}

class fan:public machine
{
	int FanNo;

	public:
	void get_FanNo(int);
	void put_FanNo();
};

void fan::get_FanNo(int fanNo)
{
	FanNo=fanNo;
}

void fan::put_FanNo()
{
	cout<<"Fan number: "<<FanNo<<endl;
}

class StandFan:public fan
{
	int ModelNo;

	public:
	void get_Model_No(int);
	void put_Model_No();
};

void StandFan::get_Model_No(int mdlNo)
{
	ModelNo=mdlNo;
}

void StandFan::put_Model_No()
{
	cout<<"Model No: "<<ModelNo<<endl;
}

int main(void)
{
	StandFan sfan;
	sfan.get_No_ID(1234, 1001);
	sfan.get_FanNo(121);
	sfan.get_Model_No(10901);
	sfan.put_No_ID();
	cout<<"\n";
	sfan.put_FanNo();
	cout<<"\n";
	sfan.put_Model_No();
	cout<<"\n";
	//sfan.MacID=100; // throws an error!!
	return 0;
}
