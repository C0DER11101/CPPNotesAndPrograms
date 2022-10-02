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
