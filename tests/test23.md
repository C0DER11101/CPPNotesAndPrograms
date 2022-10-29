# About [test23.cpp](https://github.com/C0DER11101/CPPNotesAndPrograms/blob/master/tests/test23.cpp)

From test23.cpp, I came to know one more thing, that destructors are called in exception handling as well!!

I will talk about it by taking this image :point_down:

![image](https://github.com/C0DER11101/CPPNotesAndPrograms/blob/master/tests/DestructorsInExceptionHandling.png?raw=true)

I will start from `After showing the error!!` in this image :point_up:

After this statement, the destructor was called for object `e` that was declared in the **catch()** block as an argument.

The next `Destructor for 120 a2` was for the **throw** statement which was present in the `show()` function of the class `sample`.

Notice, that in the file test23.cpp, I wrote a cout statement as `Outside catch!` which was printed after calling the destructor for the above two objects.

The next `Destructor for 120 a2` was for object `b` in the main function and the final `Destructor for 100 a1` was for object a in the main function.

**------------------------------------------------------------------------------------**

_This is what I thought had happened(maynot be precise)_

We already know that a destructor begins from the end of a program or a function(opposite to the flow of control).

So, what happened is that, when the **catch()** block completed executing all the statements, the destructor was called to delete the local object inside **catch()** block, i.e. `e`, after that the destructor was called to delete the object that was thrown by the throw statement of `show()` function to the **catch()** block. Now, `throw` is different from `return`, it functions like `return`, but is not `return`.

Now, consider if there was a `return` statement in function, then the destructor would have been called immediately after the `return` statement was executed, but `throw` is different, it throws the exception(doesnot return it) that's why the destructor is not called for it at that time, but is called after **catch()** block completed execution!!

_If I make it simpler, then write test23.cpp's exception handling part like this:_

```c++

try
{
	if(_id=="a2")
		throw *this;
	for(int i=0; i<_size; i++)
		// code
	
}

catch(sample<int>e)
{
	// code
}
```

This is how it looks like. Even though I had written `a.show();`, `b.show();`, but in reality it was kinda like this :point_up:

So, the destructor first destroys `e` which is the local object of the **catch()** block, then it moves to the **try** block, and deletes `*this`, then it enters the **main()** function and deletes the objects `b` and `a`.

So, this was all about the destructors in exception handling!!

---
