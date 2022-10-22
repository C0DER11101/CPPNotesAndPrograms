// contains the definitions of member functions of classes in pa.h



void shape::get_data(double b, double h)
{
	base=b;
	height=h;
}

void shape::display_area()
{
	cout<<"\nThe area is : "<<base*height<<"\n";
}
