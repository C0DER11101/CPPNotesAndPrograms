# About [excep7.cpp](https://github.com/C0DER11101/CPPNotesAndPrograms/blob/master/ExceptionHandling/excep7.cpp)

Now, this program explains about restricting a function to throw only specific exceptions!!

Syntax of specifying exceptions is:

```c++
returnType functionName(argumentList) throw(typeList)
{
	// function body
}
```

where `returnType` is any valid return type(eg.`int`, `float`, etc..), `functionName` is any valid identifier and `typeList` specifies type of exceptions that may be thrown e.g, `throw(int, float)`

```c++
void test(int x) throw(int, double)
{
	if(x==0)
		throw 'a';
	if(x==1)
		throw 1;
	if(x==2)
		throw 2.3;
}

int main(void)
{
	// code....

	try
	{
		test(0);
		test(1);
		test(2);
	}

	catch(char c)
	{
		cout<<"\nCaught a character!\n";
	}

	catch(int c)
	{
		cout<<"\nCaught an integer!\n";
	}

	catch(double c)
	{
		cout<<"\nCaught an double!\n";
	}

	return 0;
}
```

Remember one thing:
`
If no matching catch statement is found, the exception will not be caught and the program will terminate abnormally
`

Sort of like this :point_down:

![image](https://github.com/C0DER11101/CPPNotesAndPrograms/blob/master/ExceptionHandling/SpecifyingExceptions.png?raw=true)


**The restrictions to a function regarding throwing of excpetions applies only when throwing an exception out of the function and not within the function!!**

---
