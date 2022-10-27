# About [tem1.cpp](https://github.com/C0DER11101/CPPNotesAndPrograms/blob/master/templates/tem1.cpp)

Say, there is a class whose definition looks somewhat like this:

```c++
template<class T>
class Vector
{
	T*_v;
	int _size;

	public:

	Vector():_v(NULL), _size(0){}

	Vector(int size):_size(size)
	{
		_v=new T[_size];
	}

	// member functions!!
};
```

The syntax of creation of objects of such type of classes is:

`classname<type> objectname(arglist);`, where `type` is any valid type specified by the user it can be `int`, `float`, `char`, `double`, or even a class type. The `arglist` is optional, it depends on whether you have defined a parameterized a constructor or not.

Similary, the object of `class Vector` will look like this:

```c++
Vector<int> object(5);
```

Now, the definition of the class `Vector` with `T` as `int` would look like this:

```c++
class Vector
{
	int*_v;
	int _size;

	public:

	Vector():_v(NULL), _size(0){}

	Vector(int size):_size(size)
	{
		_v=new int[_size];
	}
	// member functions!!!
};
```
