#ifndef Name_H
#define Name_H

using namespace std;

class Sample
{
	int objId;
	char objCharId;

	public:

	void initObjects(int, char);
	void showObjectVal();
	void swapObjectVal(Sample*);
};

#endif
