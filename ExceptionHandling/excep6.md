# About [excep6.cpp](https://github.com/C0DER11101/CPPNotesAndPrograms/blob/master/ExceptionHandling/excep6.cpp)

**Rethrowing an exception means to simply invoke the `throw` statement without any arguments.**

Example:

```c++
try
{
	if(/*some condition*/)
		throw variable;
	else
		// no condition, no throw
}

catch(datatype)
{
	// handle
	throw; // exception re-thrown!!
}
```

It works like a normal try/catch block, exception thrown from the **try** block gets caught by the **catch()** block.
Again, the exception thrown by the **catch()** block gets caught by another try/catch block in some other function!!

_When an exception is rethrown, it won't be caught by the same **catch()** block or any other **catch** in that group(or function). I will be caught by an approriate **catch** in the outer try/catch sequence only._

---
