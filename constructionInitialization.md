# Different Ways Of Using Construction Initialization

**_In Inheritance_**

```C++
class A
{
	int a;
	public:
	A(int val)
	{
		a=val;
	}

};

class B
{
	int b;
	public:
	B(int val)
	{
		b=val;
	}
};

class C:public A, public B
{
	int c;
	public:
	C(int v1, int v2, int v3): A(v1), B(v2) // A() calls the constructor class A and B() calls the constructor of class B
	{
		c=v3;
	}
};
```

**_In Nesting Of Classes_**
```C++
class A
{
	int a;
	public:
	A(int val):a(val) { }
};

class B
{
	int b;
	public:
	B(int val):b(val) { }
};

class C
{
	A obA;
	B obB;
	int c;
	public:
	C(int val1, int val2):obA(val1), obB(val2)
	{
		c=val1+val2;
	}
};
```

**_For The Class Members_**
```C++
class A
{
	int a;
	float b;

	public:

	A(int val1, int val2, float val3): a(val1+val2), b(val3) { }
};
```
