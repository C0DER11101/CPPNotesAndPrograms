# When the destructor is called

_Destructor destroys objects of a class(hence the name 'Destructor')_.


**When the destructor is called:**

- When exiting a function.
- When a program termintes.


**The destructor is not called when we pass arguments as a reference or pointer and also if the that function returns a reference to an object.**

**Destructor starts destroying objects in the reverse order of their creation.**

Say, in a function, when it terminates the destructor will be invoked for the object that is being returned by the function(if the function has a class type return type) i.e. in simple words, the destructor will start from the return statement of the function!!!

```c++
String operator+(String&s)
{
	_s=strcat(_s, s._s);

	return *this;
}
```

Here the `operator+()` function returns an object.

```c++

s3=s1+s2; // same as writing s3=s1.operator+(s2)
```

As we can see `s1` calls the `operator+()` function and it is being returned by `operator+()`, so the destructor for `s1` will be called and `s1` will be destroyed!!


But in this case:

```c++
String&operator+(String&s)
{
	strcat(_s, s._s);

	return *this;
}
```

Let's say, this function is called like this:

```c++

s3=s1+s2; // same as writing s3=s1.operator+(s2)
```

This time, the destructor won't be called at all, because `operator+()` returns reference to the invoking object, and not the object!!

Similarly, if you use a friend function and that friend function doesnot return a reference to object, then the destructor for the first argument will be called!!

The scope of a reference doesnot end with the function in which it is used, it lives till the actual variable(or object) it is a reference to is destroyed.

**Destructor is not called for the function returning a reference or pointer!!!**


```c++
friend String operator+(String&, String&);
```

```c++
String operator+(String&s1, String&s2)
{
	strcat(s1._s, s2._s);

	return s1;
}
```
Here, the destructor will start its process of destroying from `return s1`, that is, it will first delete `s1` and the it will be called for any local object in the function(a destructor goes from bottom to top of a function)!!

So, the friend function also has to return a reference!!!
