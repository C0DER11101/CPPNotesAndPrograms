# For [test4.cpp](https://github.com/C0DER11101/CPPNotesAndPrograms/blob/master/tests/test4.cpp)

test4.cpp has line,

```c++
class Y; // forward declaration
```

Now, the [error](https://github.com/C0DER11101/CPPNotesAndPrograms/blob/master/tests/test4.png?raw=true "Image") that shows up was quite
confusing to me. After some thinking I came to know why that error was thrown!!

Actually, `class Y;` is a just a forward declaration of the class `Y`, not its definition!! So the the compiler throws an error of `Y` being an `incomplete type`. Class `Y` had no data members when it was "forward declared". That's why the error was thrown!!!

---
