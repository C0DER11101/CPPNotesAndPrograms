# Operator functions

**Syntax of defining an operator function:**

```c++
returnType classname::operator op(arglist)
{
	// function body
}
```

where `operator` is a keyword and `op` is any operator like `+`, `-`, `*`, etc....


**operator functions must be member functions(non-static) or friend functions.**

Overloaded functions can be invoked by expressions like:

_`x op`_  or _` op x`_ for unary operators and _`x op y`_ for binary operators!!

`op x` or `x op` will be interpreted as `operator op(x)`.

In the same way:

`x op y` will be interpreted as:

`x.operator op(y)` in case of member functions or

`operator op(x, y)` in case of friend functions!!


**Note**

`
The space between "operator" and "op" is not needed, it is used just to make the reader understand!!!
`

Example:

```C++
class Sample
{
	// data members

	public:
	
	void operator+(Sample&);
};
```


**Here operator is the `keyword` and `+` is the operator `op`.**

---
