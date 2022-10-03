# POINTERS TO FUNCTIONS!!

## _SYNTAX_

```C++
datatype (*functionPointer)(arguments);
```

## Snippet 1
```C++
void(*fptr)(int, int);
void sum(int, int);
int main(void)
{
	fptr=sum;

	fptr(10, 20);
	return 0;
}

void sum(int a, int b)
{
	cout<<a+b<<endl;
}
```

This is a simple example of pointers to functions!!!

```fptr=sum``` simply assigns fptr the address of the function ```sum()```

So calling the function pointer with the arguments or calling ```sum()``` itself is the same.

```fptr(10, 20);``` is the same as ```sum(10, 20);```, because ```fptr``` stores the address of ```sum()```

## Snippet 2

```C++
int result(int, int, int (*)(int, int));
int sum(int, int);
int main(void)
{
	int a, b;

	cout<<"enter value of a: ";
	cin>>a;
	cout<<"enter value of b: ";
	cin>>b;

	int Sum=result(a, b, sum);

	cout<<a<<"+"<<b<<" is: "<<Sum<<"\n";
	cout<<"\n\n";

	return 0;
}

int sum(int a, int b)
{
	cout<<"sum() called\n";
	return (a+b);
}

int result(int a, int b, int(*sm)(int, int))
{
	cout<<"result() called\n";
	return (*sm)(a, b);
}
```

The above snippet displays the following output:
**enter value of a: 5**
**enter value of b: 5**
**result() called**
**sum() called**
**5+5 is: 10**

```result()``` takes 3 arguments, two integers and a pointer to function

When we send ```sum``` as an argument to ```result()```, it basically sends the address of ```sum()``` as an argument.
In the function declaration we have written the third argument of result as ```int (*)(int, int)```, this basically means we are using a
function as an argument.

Now, in the declaration of ```result()```, the third parameter becomes ```int(*sm)(int, int)```, notice that we haven't yet provided any
arguments to ```(*sm)(int, int)```, you can provide arguments to ```(*sm)(int, int)``` as ```(*sm)(int x, int y)```

Actually ```(*sm)(int, int)``` in the definition of ```result()``` is just like a function declaration, so it's not mandatory to provide
any arguments to ```(*sm)()```, the compiler ignores the arguments provided to ```(*sm)()``` in the arguments of definition of ```result()```
Similarly, in the declaration of ```result()``` the compiler ignores any variable names given, it only notes the types of the argument of the
function ```result()```.

So in the declaration:
```C++
int result(int, int, int(*sm)(int, int);
```
the compiler only looks at the types of the arguments and not the names of the arguments. That means the compiler ignores the name provided
to the third argument and only looks at the type of the argument which is a pointer to a function with a return type ```int```. It totally
ignores the name ```sm``` given to the argument.

But in the definition:
```C++
int result(int a, int b, int(*sm)(int, int))
{
	cout<<"result() called\n";
	return (*sm)(a, b);
}
```
The name of each argument of ```result()``` is mandatory. But if any argument names are given to the arguments of ```(*sm)(int, int)```,
then the compiler will ignore them. **Snippet 3** shows what I mean.
## Snippet 3

```C++
int result(int, int, int (*)(int, int));
int sum(int, int);
int main(void)
{
	int a, b;

	cout<<"enter value of a: ";
	cin>>a;
	cout<<"enter value of b: ";
	cin>>b;

	int Sum=result(a, b, sum);

	cout<<a<<"+"<<b<<" is: "<<Sum<<"\n";
	cout<<"\n\n";

	return 0;
}

int sum(int a, int b)
{
	cout<<"sum() called\n";
	return (a+b);
}

int result(int a, int b, int(*sm)(int x, int y))
{
	cout<<"result() called\n";
	return (*sm)(a, b);
}
```

The above snippet also gives the same output as the previous snippet.
