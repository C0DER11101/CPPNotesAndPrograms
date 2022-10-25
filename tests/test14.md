# About [test14.cpp](https://github.com/C0DER11101/CPPNotesAndPrograms/blob/master/tests/test14.cpp)

**These errors only happen when the private members are pointers!!!**
In this file, the concept of object assignment is highlighted!!!

There is a line:

```c++
s2=s1;
```

Here is `s1` and `s2` both are objects of the same class `sample`.

We first initialize `s1` by calling `initialize()` for it and then we assign s1 to s2.

When we do `s2=s1;` this is equivalent to writin this:

```c++
int *a, *b;

a=new int[5];
b=new int[5];

for(int i=0; i<5; i++)
{
	a[i]=i+1;
	b[i]=2*i;
}

a=b;

for(int i=0; i<5; i++)
	cout<<a[i]<<" ";
cout<<"\n";

for(int i=0; i<5; i++)
	cout<<b[i]<<" ";
cout<<"\n";
```

What I meant to say is that `s1` and `s2` both have private members which are pointers.
When `s2` is equated with `s1` then actually the private members get equated like this:

`_a=_a` the former `_a` belongs to `s2` and the latter `_a` belongs to `s1`.

Just like in the above example when we assign the pointer `b` to pointer `a` the address in `b` gets assigned to `a`. Any changes made to that address will reflect onto both the pointers!!!

Same is the case with `s2=s1`, the address stored by `_a` of `s1` gets assigned to `_a` of `s2` and any changes made to `_a` of `s1` will reflect onto the `_a` of `s2`.


The image here shows this:

![image](https://github.com/C0DER11101/CPPNotesAndPrograms/blob/master/tests/AssigningAnObjectToAnotherObject.png?raw=true)


The last two lines: `free(): double free detected in tcache2` and `Aborted(core dumped)` were printed because of the reason mentioned above!!
The address blocks allocated to `_a` of `s2`(which it got from `_a` of `s1`) were deleted and after that tha destructor for `s1` was also called but it found out that the address blocks were already deleted(deletion of `_a` of `s2`).

**Destructors are always called at the end of the functions and at the end of a program. So the destruction of objects starts from the end of a program and continue in the opposite direction of the direction of compilation of the program!!**
