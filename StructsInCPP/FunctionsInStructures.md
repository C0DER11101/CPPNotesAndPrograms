# Functions in structures

Structures in C++ are similar to classes.

Defining member functions outside the structure is exactly same like defining member functions outside of a class(i.e. you have to use the scope resolution operator).

Example:

```c++
struct sample
{
	int a; // by-default this is public!!

	private:
	void showValue()
	{
		cout<<"a = "<<a<<"\n";
	}

	public:
	void getValue();
};

void sample::getValue()
{
	cout<<"enter a: ";
	cin>>a;

	showValue();
}

int main(void)
{
	sample s;
	s.getValue();
	return 0;
}
```

As you can see here :point_up:, we can specify the visibility mode for the data members and member functions in the structure as well in C++. If we donot specify any visibility mode, then by default it's `public` in structures in C++(unlike classes).

`s.getValue()` basically calls the `getValue()` method in the public section of the structure `sample`.

When you specify the visibility modes in structures, then all the properties of C++ classes also apply here. The private members can only be accessed by the member functions of the structures, they cannot be accessed by non member functions!!

So here we cannot write `s.showValue()` in the `main()` function, this will throw an error because `showValue()` is a private member of `sample`.

---
