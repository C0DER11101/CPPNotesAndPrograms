# About

**dynamic_cast** is used to cast the type of an object at runtime.

### Main function

- To perform casts on polymorphic objects.


**Syntax:**

```c++
dynamic_cast<type>(object);
```

The `object` is the base class object whose type is to be checked and casted.
It casts the type of the object to `type`.

**It checks checks if conversion is legal or not at runtime. If the conversion is not valid, it returns NULL.**

The `type` must be a reference or a pointer to a defined class type.
The argument object must be expression that resolves to a pointer or reference.

**The use of the operator `dynamic_cast` is also called _type-safe downcast_**.

---
