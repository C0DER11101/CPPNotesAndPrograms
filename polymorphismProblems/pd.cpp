void Sample::initObjects(int intId, char charId)
{
	objId=intId;
	objCharId=charId;
}

void Sample::showObjectVal()
{
	cout<<"Object Id of calling object: "<<objId<<"\n";
	cout<<"Object char Id of calling object: "<<objCharId<<"\n";
}

void Sample::swapObjectVal(Sample*obj) // swap values of private members of two objects using pointers!!!
{
	Sample temp;

	temp.objId=this->objId;
	this->objId=obj->objId;
	obj->objId=temp.objId;

	temp.objCharId=this->objCharId;
	this->objCharId=obj->objCharId;
	obj->objCharId=temp.objCharId;
}
