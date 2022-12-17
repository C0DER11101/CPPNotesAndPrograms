# write() and read() functions

_**write()** and **read()** handle data in binary form._

**Values are stored in the disk file in the same format in which they they are stored in internal memory.**


_Binary format is more accurate for storing the numbers as they are stored in the exact internal representation._

_There are no conversions while saving the data, so, saving is much faster._


Syntax for **write()**

```c++
.
.
outfile.write((char*)&V, sizeof(V));
.
.
.
```

Syntax for **read()**

```c++
.
.
infile.read((char*)&V, sizeof(V));
.
.
```


**The first argument in both _write()_ and _read()_ is the address of the variable _V_. Then the second argument is the length(size) of that variable in bytes.**

The address of the variable `V` is typecast to `char*`.

**Note**
```
Everything that we store in files is in the form of texts, so that's why we are typecasting to char* here
```


Look at programs below:

[fpr14.cpp](https://github.com/C0DER11101/CPPNotesAndPrograms/blob/master/WorkingWithFiles/Notes/fpr14.cpp)

[fpr15.cpp](https://github.com/C0DER11101/CPPNotesAndPrograms/blob/master/WorkingWithFiles/Notes/fpr15.cpp)


## Reading and writing class objects

**read()** and **write()** handle the entire structure of an object as a single unit, using the computer's internal representation of data.


**write()** _copies a class object from memory byte by byte with no conversion._

**Only data members are written to the disk file and not the member functions.**


Look at these programs:

[writingObjects1.cpp](https://github.com/C0DER11101/CPPNotesAndPrograms/blob/master/WorkingWithFiles/Notes/writingObjects1.cpp)

[ReadingObjects.cpp](https://github.com/C0DER11101/CPPNotesAndPrograms/blob/master/WorkingWithFiles/Notes/ReadingObjects.cpp)


Since everything we write into files is in the form of texts, so when reading from the file also we must typecast the address of the object or variable to `char*`.

---
