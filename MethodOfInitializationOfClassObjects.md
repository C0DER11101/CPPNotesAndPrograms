# _INITIALIZATION LIST IN THE CONSTRUCTOR FUNCTION_

**This is another method of initializing the class objects**

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

There are many other ways:

**Way-1**
```C++
A(int i, int j): b(i), a(i+j) { }
```

**Way-2**
```C++
A(int i, int j): a(i), b(a*j) { }
```

**Way-3**
```C++
A(int i, int j): b(i), a(b*j) { }
```
**Way-4**
```C++
A(int i, int j): a(i) {b=j;}
```

**Way-5**
```C++
A(int i, int j){a=i; b=j;}
```
