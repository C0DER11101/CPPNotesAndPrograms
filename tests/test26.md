# About [test26.cpp](https://github.com/C0DER11101/CPPNotesAndPrograms/blob/master/tests/test26.cpp)

This file tells us about the nested namespaces!!


The **using namespace** statement is very important.

**In simple words the _using namespace_ statement basically means bring all the members of the namespace into the current scope**.
Example:

```c++
namespace N1
{
	int m;
}

int main(void)
{
	using namespace N1;
	return 0;
}
```

The `using namespace N1` basically means "bring the members of namespace N1 to the current scope(i.e to main() function).

Example:

```c++
namespace N1
{
	int m=10;
	namespace N2
	{
		int v=20;
	}
}
```

Namespace `N2` is nested inside namespace `N1`.

```c++
using namespace N1;

cout<<m<<"\n";
cout<<N2::v<<"\n";
```

The **using namespace N1** tells the compiler that the members of namespace `N1` will be frequently used(members also include the namespace `N2`, because it is defined inside `N1`).


If you write something like this:

```c++
using namespace N1::N2;
cout<<v<<"\n";
```

Then also it will work, because **using namespace N1::N2** tells the compiler that the members of the namespace `N2` will be used frequently!!

Namespaces are not like `structs` or `classes`, nesting is very much different in namespaces than structs or classes.

It's not like once you have written `using namespace N1::N2`, then in the cout statement you will have to write `cout<<N1::N2::v<<"\n";`. You have already specified that you will be using the namespace `N2`.

In simple words, `using namespace N1::N2;` basically means "we will be using members defined in namespace N2, which is defined inside namespace N1, very frequently".

But you can't write this:

```c++
using namespace N1::N2;
cout<<v<<"\n";
cout<<m<<"\n";
```

Because you specified that you will be using members of namespace `N2` only and not `N1`. But you didn't specify that you will be using members of namespace `N1` also very frequently!! That's why this will show an error!! But a statement like `cout<<N1::m<<"\n";` would have worked!!

Again,
```c++
using namespace N1;
using namespace N2;

cout<<m<<"\n";
cout<<v<<"\n";
```

This is fully legal!!! Because first you told the compiler that you will be using the members of namespace `N1` very frequently, then you also specified that you will be using members of namespace `N2` very frequently. So it's is goig to work without any errors!!
