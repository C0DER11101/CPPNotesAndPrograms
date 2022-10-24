# About [opOverload3.cpp](https://github.com/C0DER11101/CPPNotesAndPrograms/blob/master/operatorOverloading/opOverload3.cpp)

_The operator+() function returns an object of Complex type._


```C++
Complex Complex::operator+(Complex&c)
{
	return Complex((_real+c._real), (_imaginary+c._imaginary));
}
```

`Complex((_real+c._real), (_imaginary+c._imaginary))` basically creates an object of type Complex that has the private members `_real` as the sum of the `_real` of the other two objects, and `_imaginary` as the sum of the `_imaginary` of the other two objects!!


That object is returned and it gets assigned to `C3`. Since, C++ allows object assignment, there is no error in the program, and the object returned from `operator+()` gets assigned to `C3`.
