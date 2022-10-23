# About [friendProgram3.cpp](https://github.com/C0DER11101/CPPNotesAndPrograms/blob/master/operatorOverloading/friendProgram3.cpp)

_Declaring the same friend function in both the classes is a way of making that function a common function to both the classes._

Example:

```c++
class B;

class A
{
	int a;

	public:
	friend void add(A, B);
};

class B
{
	int b;

	public:
	friend void add(A, B);
};
```


Here `add()` has become a common function to both `class A` and `class B`. So, we need to define add() only once!!

```c++
void add(A aobj, B bobj)
{
	return (aobj.a+bobj.b);
}
```


**Remember, a friend function should always take atleast one argument of class type.**

---
