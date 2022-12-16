# File pointers

Each file has two pointers associated with it. One of the pointers is called _input pointer or **get pointer** and the other is called _output pointer or **put pointer**._

These two pointers can be used to move through the files while reading or writing.


> **The input pointer is used for reading the contents of a given file.**

> **The output pointer is used for writing to a given file.**

_When we open a file in read-only mode, the input is pointer is automatically set at the beginning so that we can read the file from the start._


_When we open a file in write-only mode, the existing contents are deleted and the output pointer is set at the beginning. This enables us to write to the file from the start._

_In case, we want to open an existing file to add more data then the file is opened in append mode and the output pointer is placed at the end of the file(i.e. at the end of the existing contents of the file)._

## Functions for manipulation of file pointers

We can control or move the file pointers to any desired position we like using the member functions below:

* seekg() $\rightarrow$ **Moves input pointer to a specified position.**
* seekp() $\rightarrow$ **Moves output pointer to a specified position.**
* tellg() $\rightarrow$ **Gives the current position of the input pointer.**
* tellp() $\rightarrow$ **Gives the current position of the output pointer.**


Example:

```c++
ofstream outF;
outF.open("hello.txt", ios::app);
outF.seekg(10);
```

`outF.seekg(10);` moves the output pointer to byte number 10(bytes in a file are numbered beginning from zero). So, here the output pointer is pointing to the $11^{th}$ byte.

---
