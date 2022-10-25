# When the destructor is called

_Destructor destroys objects of a class(hence the name 'Destrutor')_.


**When the destructor is called:**

- When exiting a function.
- When a program termintes.


**The destructor is not called when we pass arguments as a reference or pointer and also if the that function returns a reference to an object.**

The object that invokes the member function is destroyed!!


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

As we can see `s1` calls the `operator+()` function, so the destructor for `s1` will be called and `s1` will be destroyed!!


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

The destructor will be called for the argument `s1` !!!

So, the friend function also has to return a reference!!!
