# COMPILE TIME POLYMORPHISM

- There is no ambiguity at the compile time about which function is to be linked to a particular function's call.
- Object is bound to its function call at the compile time.
- Also called early binding or static binding, or static linking.

**Compile-time polymorphism is achieved in two ways:**

- **Function overloading.**
- **Operator overloading.**

Example:
```C++
class A
{
	public:
		void show();
};

void A::show()
{
	cout<<"\nclass A\n";
}

class B:public A
{
	public:
		void show();
};

void B::show()
{
	cout<<"\nclass B\n";
}

int main(void)
{
	B b;
	b.show(); // calls show() of class B
	b.A::show(); // calls show() of class A
	return 0;
}
```
