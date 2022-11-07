# About

Like conventional cast operators, the **static_cast** operator is used for any standard conversion of data types. It can also be used to cast a base class pointer into a derived class pointer.

_General syntax_

```c++
static_cast<type>(object);
```

Example:

```c++
int m=10;
double x=static_cast<double>(m);
char ch=static_cast<char>(m);
```

**Why use this new type?**
> Because, the syntax of the old style blends into the rest of the lines and therefore is difficult to locate, the new format is easy to spot and to search for using automated tools.

---
