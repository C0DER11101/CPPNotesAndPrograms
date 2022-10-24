# Operator functions

**Syntax of defining an operator function:**
`
returnType classname::operator op(arglist)
{
	// function body
}
`

where `operator` is a keyword and `op` is any operator like `+`, `-`, `*`, etc....


**operator functions must be member functions(non-static) or friend functions.**

Overloaded functions can be invoked by expressions like:

`_x op_`  or ` _op x_` for unary operators and `_x op y_` for binary operators!!

`op x` or `x op` will be interpreted as `operator op(x)`.

In the same way:

`x op y` will be interpreted as:

`x.operator op(y)` in case of member functions or

`operator op(x, y)` in case of friend functions!!

---
