# About

The **reinterpret_cast** is used to change one type into a fundamentally different type.

Example:

It can be used to change a pointer type object into integer type object or vice versa.

Syntax:

```c++
reinterpret_cast<type>(object);
```

Example:

```c++
int m;
float x;
int*intptr;
float*floatptr;

intptr=reinterpret_cast<int*>(m);
floatptr=reinterpret_cast<float*>(x);
```

---
