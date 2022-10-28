# Member function templates

Consider a simple function:

```c++

// Snippet-1
template<class T>
void Swap(T&, T&);

int main(void)
{
	int a=10, b=20;
	//....
	//....
	Swap(a, b);

	return 0;
}

template<class T>
void Swap(T&a, T&b)
{
	// swap the variables
}
```


Now, consider the same function inside a class:

```c++
// Snippet-2
template<class T>
class SWAP
{

	// some datamembers

	public:

	SWAP():_a(/*default value*/), _b(/*default value*/){}

	SWAP(/*some arguments*/):_a(/*value*/), _b(/*value*/){}

	~SWAP()
	{
		cout<<"\nProgram ended!\n";
	}

	void display();
	void Swap();
};

template<class T>
void SWAP<T>::display()
{
	// display contents
}

template<class T>
void Swap<T>::Swap()
{
	// swap the variables
}

int main(void)
{
	SWAP a(/*arguments*/);

	a.display();
	a.Swap();
	a.display();

	return 0;
}
```

Notice, that in `Snippet-1` and `Snippet-2` the definition of `Swap()`, `display()` and `Swap()` are quite similar.

In both the snippets, you need to follow the following syntax while defining the functions:

```
template<class T>
returnType functionName(arglist)
{
	body
}
```

However, in case of member funtions of a class, you need to specify the class name:

```
template<class T>
returnType classname<T>::functionName(arglist)
{
	body
}
```

Notice, this is same as the syntax that we use while defining member functions of non-template classes:

```
returnType className::functionName(arglist)
{
	body
}
```
