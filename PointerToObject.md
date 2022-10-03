# Pointer to object

The concept of pointer to object is as simple as simple to pointer to int or pointer to char with just one difference, it points to a class
object.

## _SYNTAX_
```C++
className *objectName;
```
_example:_
```C++
class sample
{
	// datamembers
};

int main(void)
{
	sample s;
	sample *sptr;
	sptr=&s;
	// code....
}
```

Here ```*sptr``` is a pointer to a class object.

## Ways of accessing public members of a class using pointer to class object

**There are two ways of using pointers to access public members of a class:**
1. By using dereferencing operator.
2. By using arrow operator.

### By using dereferencing operator

Assume that there is a function ```greet()``` which is a public member of the class ```sample```.
Now if we want to access ```greet()``` using ```sptr``` then it will be as follows:

```C++
// inside main

{
	(*sptr).greet();
	// code...
	return 0;
}
```

### By using arrow operator
Accessing ```greet()``` using ```sptr``` with arrow operator will look something like this:

```C++
// inside main

{
	sptr->greet();
	// code...
	return 0;
}
```

_It's as simple as normal pointers!!_
