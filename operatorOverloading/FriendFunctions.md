# Friend functions in C++

The function declaration should be preceded by the keyword **friend**.

_The function is defined elsewhere like a normal C++ function._

_The function doesnot use either the keyword **friend** or the scope resolution operator `::`_


**A function can be defined as a friend in any number of classes!!**


**A friend function has full access rights to the private members of the class.**


## Some characteristics of friend functions:

- A friend function cannot be called using the object of the class in which it has been declared.
- It can be invoked like a normal function without the help of any object.
- The friend function cannot access private members of a class directly, it has use class objects to access the private members of the class.
- It can be declared in the public or private field of a class.
- It has objects as arguments.


**Friend functions are generally used in operator overloading.**
