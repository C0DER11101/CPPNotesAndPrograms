# Pure Virtual Functions!!

Pure virtual functions are also called _"do-nothing"_ functions.

**Syntax:**

`virtual returntype functionName() = 0;`

Example:

`virtual void display() = 0;`

Here `display()` is a pure virtual function(keep in mind: a virtual function must belong to a class) of some class.

These functions have no definitions relative to the base class.
In this case, the compiler requires the derived classes to either define that pure virtual function or redeclare it as a pure virtual function.

:exclamation:Remember, the class containing pure virtual functions cannot be used to declare any objects of its own(but it may be used to declare pointers):exclamation: Such classes are called **Abstract Base Classes**.

## Objective of an abstract class

- **To provide some traits to the derived classes and to create a base pointer required for achieving run time polymorphism**.
