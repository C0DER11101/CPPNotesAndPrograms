void shape::get_data(double b, double h)
{
	base=b;
	height=h;
	radius=b;
}

void shape::display_area(string shapeName)
{
	if(shapeName=="triangle")
		cout<<"Area of the triangle is: "<<((float)1/2)*base*height<<"\n";

	else if(shapeName=="rectangle")
		cout<<"Area of the rectangle is: "<<base*height<<"\n";

	else if(shapeName=="circle")
		cout<<"Area of the circle is: "<<PI*radius*radius<<"\n";
}
