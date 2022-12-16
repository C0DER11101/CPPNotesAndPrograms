# Detecting end-of-file(eof)

## Member function eof()

eof() is a member function of the **ios** class.

_Returns a non-zero value if `end-of-file` condition is encountered, zero otherwise._


## EOF through class object

```c++

ifstream inF("hello.txt");

while(inF)
{
	// read operation
}
```

So here `inF` is an object of class `ifstream` which returns 0 if any error occurs in the file operation including the end-of-file condition.

So the while loop `while(inF)` will terminate when `inF` returns 0(either on encoutering the end-of-file condition or on file operation error).
