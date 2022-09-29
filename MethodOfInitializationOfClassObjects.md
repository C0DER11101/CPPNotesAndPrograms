# _INITIALIZATION LIST IN THE CONSTRUCTOR FUNCTION_

**This is another method od initializing the class objects**

_SYNTAX:_

constructor(arglist): initialization-section
{
	assignment-section
}

_Example_

```C++
class A
{
	int a;
	int b;
	public:
	A(int i, int j): a(i), b(2*j)
	{
		cout<<a<<" "<<b<<"\n";
	}
};

int main(void)
{
	A obj(1, 2);

	return 0;
}
```

Here is are some images for better explanation:

![alt text](file:///home/priyanuj/Desktop/C0DER11101/c++practice/ConstructorInitialization1.png)
