# Rule

_In overloading of binary operators, the left-hand operand is used to invoke the operator function and the right-hand operand is passed as an argument._


Example:

```C++
class sample
{
	int _x;

	public:
	sample():_x(0){}
	sample(int val):_x(val){]

	int operator+(sample);
	void show();
};

int sample::operator+(sample s)
{
	return ((_x)+(s._x));
}

void sample::show()
{
	cout<<"Value = "<<_x<<"\n";
}

int main(void)
{
	sample s1(10), s2(20), s3;

	s1.show();
	s2.show();
	s3=s1+s2;

	s3.show();

	return 0;
	}
```

In the main function, we are calling `operator+()` via the statement `s1+s2` in `s3=s1+s2`.

As mentioned in the [rule](https://github.com/C0DER11101/CPPNotesAndPrograms/blob/master/operatorOverloading/RuleOfOverloadingBinaryOperators.md#rule), the left-hand operand calls the operator function, so in this case `s1` calls `oprerator+()`, and the right-hand
operand is passed as argument, so `s2` is passed as argument.

So the whole statement `s3=s1+s2` can be written as:

```c++
s3=s1.operator+(s2);
```
