# Pointers to strings

```C++
// header files are included

int main(void)
{

	char num[]="one";
	const char*numstr="one";

	cout<<"Printing num character by character:\n";
	for(int i=0; i<strlen(num); i++)
		cout<<num[i];
	cout<<"\nPrinting num using cout:\n";
	cout<<num;
	cout<<"\n";

	cout<<"\nPrinting numstr character by character:\n";
	for(int i=0; i<3; i++)
		cout<<numstr[i];
	cout<<"\nPrinting numstr using cout:\n";
	cout<<numstr<<"\n";
	return 0;
}
```

```C++
char num[]="one";
```
declares an array of four characters ``` 'o', 'n', 'e', '\0' ```

```C++
const char *numstr="one";
```
declares a pointer to character which points the first character i.e ``` 'o' ```

There is a reason of using ```const``` before ```numstr```.

```"one"``` is actually a string constant, so we cannot simply assign it to ```C++
char*numstr
```
The constant ```"one"``` cannot be converted to a ``` char* ``` type, that's why the compiler throws us a warning.
And that's why we use ```const``` before ```char*numstr```.
