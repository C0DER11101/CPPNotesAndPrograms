# About [tem1.cpp](https://github.com/C0DER11101/CPPNotesAndPrograms/blob/master/templates/tem1.cpp)

Say, there is a class whose definition looks somewhat like this:

```c++
template<class T>
class Vector
{
	T*_v;
	int _size;

	public:

	// member functions!!
};
```

The syntax of creation of objects of such type of classes is:

`classname<T>objectname`, where `T` is the type specified by the user it can be `int`, `float`, `char`, `double`, or even a class type.

Similary, the object of `class Vector` will look like this:

```c++
Vector<int>object;
```

Now, the definition of the class `Vector` with `T` as `int` would look like this:

```c++
class Vector
{
	int*_v;
	int _size;

	public:
	// member functions!!!
};
```
