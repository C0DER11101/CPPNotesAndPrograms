# Pointer to array!

```C++

// header files inluded

int main(void)
{
	int (*arptr)[10];
	int ar[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	arptr=&ar;

	for(int i=0; i<10; i++)
		cout<<*(*arptr+i)<<endl;

	return 0;
}

```

Here ```arptr``` is a pointer to an array of integers!!

This is the syntax of declaration of a pointer to array:

```C++
datatype (*pointername)[size];
```

Where ```datatype``` can be any datatype like _int, float, double, etc..._ and ```size``` is the size of the array.

```arptr``` stores the address of the whole array ```ar```.

When we dereference ```arptr``` once i.e we write:
```C++
*arptr
```
it gives us the address of the 0th element of the array ```ar```; and when we dereference ```arptr``` the second time:
```C++
**arptr
```
it gives the value at the address of the 0th element of the array ```ar```.
This concept has been applied to this statement:

```C++
cout<<*(*arptr+i)<<endl;
```
```*arptr``` gives the address of the 0th element of the array ```ar```.
Then with that address of the 0th element we add i(0, 1, ...9, remember pointer arithmetic) which is dereferenced as:
```*(*arptr+i);```

```(*arptr+i)``` means access the address of the 0th element of the array and add ```i``` with it and
```*(*arptr+i)``` means after adding ```i```, dereference it to get the value at that address.......
