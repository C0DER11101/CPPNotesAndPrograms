# File pointers

[Linux command to count the number of bytes in a file](https://www.ibm.com/docs/en/aix/7.1?topic=af-counting-words-lines-bytes-in-files-wc-command)

Each file has two pointers associated with it. One of the pointers is called _input pointer or **get pointer**_ and the other is called _output pointer or **put pointer**._

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
ifstream inF;
inF.open("hello.txt", ios::app);
inF.seekg(10);
```

`inF.seekg(10);` moves the input pointer to byte number 10(bytes in a file are numbered beginning from zero). So, here the output pointer is pointing to the $11^{th}$ byte.


```c++
ofstream outF;
outF.open("hello.txt", ios::app);

int ptrPos;

ptrPos=outF.tellp();

cout<<"\nPointer at position: "<<ptrPos<<"\n";
```

In the above snippet, we want to write some more data into `hello.txt`, so we are opening it in append mode. So, the output pointer is moved to the end of the contents of the file. Now, `outF.tellp()` returns the position of output pointer. The value of `ptrPos` will represent the number of bytes in the file `hello.txt`.

This is also illustrated in [fpr8.cpp](https://github.com/C0DER11101/CPPNotesAndPrograms/blob/master/WorkingWithFiles/Notes/fpr8.cpp)

## Specifying the offset

**seekg()** and **seekp()** can also be used with two arguments as follows:

```
seekg(offset, refposition);
seekp(offset, refposition);
```

The parameter `offset` represents the number of bytes the file pointer is to be moved from the location specified by the parameter `refposition`.

The `refposition` takes one of the following three constants defined in the **ios** class:

* **ios::beg** $\rightarrow$ start of the file.
* **ios::cur** $\rightarrow$ current position of the pointer.
* **ios::end** $\rightarrow$ end of the file.


Table:

|Seek call|Action|
|:-------:|:----:|
|inF.seekg(0, ios::beg)|Go to start|
|inF.seekg(0, ios::cur)|Stay at the current position|
|inF.seekg(0, ios::end)|Go to the end of the file|
|inF.seekg(m, ios::beg)|Move to $(m+1)^{th}$ byte in the file|
|inF.seekg(m, ios::cur)|Go forward by m byte(s) from the current position|
|inF.seekg(-m, ios::cur)|Go backward by m byte(s) from the current position|
|inF.seekg(-m, ios::end)|Go backward by m byte(s) from the end|

**The above table will be the same for seekp() as well.**

`seekg() moves the input pointer`

`seekp() moves the output pointer`

---
