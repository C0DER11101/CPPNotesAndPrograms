# Rules of Virtual Functions!!

**Rules for Virtual function:**

- must be member functions of some class.
- cannot be static members.
- accessed using object pointers.
- can be a friend of another class.
- must be defined, even though may remain unused.
- we cannot have virtual constructors, but we can have virtual destructors.
- base pointer can point to any type of derived object; but pointer to a derived class cannot be used to access an object of base class.
- we should not use increment/decrement operators with base pointers; that won't make it point to the next object of derived class.
- if a virtual function is defined in the base class, it need not be necessarily redefined in the derived class; in such cases, calls will invoke the base function.
