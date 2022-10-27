# About [tem8.cpp](https://github.com/C0DER11101/CPPNotesAndPrograms/blob/master/templates/tem8.cpp)

> A template function may be overloaded either by template functions or ordinary functions of its name.

In these cases, the overloading resolution is accomplished as follows:

1. Call an ordinary function that has an exact match.
2. Call a template function that could be created with an exact match.
3. Try normal overloading resolution to ordinary functions and call the one that matches.

**An error is generated is no match is found.**

In tem8.cpp, when we call

```c++
display(100);
```

The above steps are followed, and the call to an ordinary function that has an exact match is made, and it is also found,

```c++
void display(int a)
{
	cout<<"Display-3: "<<a<<"\n\n";
}
```

Here is the image:

![image](https://github.com/C0DER11101/CPPNotesAndPrograms/blob/master/templates/OverloadingTemplateFunctions.png?raw=true)
