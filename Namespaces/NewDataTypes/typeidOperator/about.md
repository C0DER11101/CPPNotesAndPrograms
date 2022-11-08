# About

We can use `typeid` operator to obtain the types of unknown objects, such as their class name at runtime.

Example:

```c++
char *objectType=typeid(object).name;
```

this will assign the type of "object" to the character array **objectType** which can be printed out(if necessary).
It uses the **name()** member function of the **type_info** class.

```
The object maybe of type int, float or an other class.
```

**We must include _<typeinfo>_ header file to use the operators _dynamic_cast_ and _typeid_.**

**typeid** also provides runtime type information.

---
