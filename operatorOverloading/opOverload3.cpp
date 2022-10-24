#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

class Complex
{
	float _real;
	float _imaginary;

	public:
	Complex():_real(0.0), _imaginary(0.0){}
	
	Complex(float a, float b):_real(a), _imaginary(b){}

	void display();

	Complex operator+(Complex&); // binary operator!!
};

void Complex::display()
{
	cout<<_real<<"+"<<_imaginary<<"i"<<"\n\n";
}

Complex Complex::operator+(Complex&c)
{
	return Complex((_real+c._real), (_imaginary+c._imaginary));
}

int main(void)
{
	Complex C1(1.5, 4.5), C2(2.5, 3.5), C3;

	cout<<"C1: ";
	C1.display();
	cout<<"C2: ";
	C2.display();

	C3=C1+C2;
	cout<<"C3: ";
	C3.display();
	return 0;
}
