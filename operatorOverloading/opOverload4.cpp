#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<conio.h>

using namespace std;

class Complex
{
	float _real;
	float _imaginary;

	public:

	Complex():_real(0.0), _imaginary(0.0){}

	Complex(float real, float imaginary):_real(real), _imaginary(imaginary){}

	friend Complex operator+(Complex&, Complex&);

	friend Complex operator-(Complex&, Complex&);

	void display();
};

Complex operator+(Complex&c1, Complex&c2)
{
	return Complex((c1._real+c2._real), (c1._imaginary+c2._imaginary));
}

Complex operator-(Complex&c1, Complex&c2)
{
	return Complex((c1._real-c2._real), (c1._imaginary-c2._imaginary));
}

void Complex::display()
{
	cout<<_real<<"+"<<_imaginary<<"i"<<"\n\n";
}

int main(void)
{
	Complex C1(1.2, 1.5), C2(1.3, 1.5), C3, C4;

	cout<<setiosflags(ios::fixed);
	cout<<setprecision(1);
	cout<<"C1: ";
	C1.display();

	cout<<"C2: ";
	C2.display();

	C3=C1+C2; // same as writing C3=operator+(C1, C2);

	cout<<"C3: ";
	C3.display();

	C4=C2-C1; // same as writing C4=operator-(C2, C1);

	cout<<"C4: ";
	C4.display();
	
	cout<<resetiosflags(ios::fixed);
	return 0;
}
