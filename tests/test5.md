# About [test5.cpp](https://github.com/C0DER11101/CPPNotesAndPrograms/blob/master/tests/test5.cpp)

## `const` member functions

**Syntax:**

`returntype functionName(parameters) const;`


Example:

```c++
void mul(int, int) const;
```

Such type of constant member functions cannot do any change to the data members of the class to which they belong!!! If they try to do so, then the compiler will throw an error!!!

The qualifier `const` is appended to the function declaration and function definition as well!!

test5.cpp is a C++ file containing a simple yet serious error and that is, we are trying to change the value of `_var` in `power()` function, which is a `const` member function, so the compiler throws an error, because we are trying to change the value of a datamember of the class.
