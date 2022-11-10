# Namespaces in C++


**Namespaces define a scope that can hold global identifiers.**


The **using namespace** statement specifies that the members defined in that namespace will be used frequently throughout the program.


**Defining a namespace**

**_Syntax_**

```c++
namespace namespace_name
{
	// declaration of variables, functions, classes, etc.
}
```
Notice that the closing brace of the namespace doesnot have a semicolon after it unlike classes and structs.


Example:

```c++
namespace TestSpace
{
	int m;

	void display(int n)
	{
		cout<<n;
	}
}
```


Now, to access the variable `m`, we need to use the scope resolution operator like this:

```c++
TestSpace::m=10;
```

Since `m` and `display()` are inside the scope of the namespace `TestSpace`, to access any member of the namespace we need to use the scope resolution operator.

We can also use the using directive to simplify their access.

```c++
using namespace namespace_name;
```
In this form, all the membersdeclared within the specified namespace my be accessed without using the scope resolution operator.


There is one more form, but that applies only for specific members of the namespace.

```c++
using namespace namespace_name::member_name;
```
In this case, we can only use the specified member without using the scope resolution operator, but for other members we need to use the scope resolution operator.

[p1.cpp](https://github.com/C0DER11101/CPPNotesAndPrograms/blob/master/Namespaces/NewDataTypes/namespaces/p1.cpp) explains everything!!

---
