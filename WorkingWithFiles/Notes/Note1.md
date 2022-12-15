# Introduction

**File:** It's a collection of related data stored in a particular area on the disk.

_A program either or both of the following kinds of data communication:_

1. Data transfer between the console unit and the program.
2. Data transfer between the program and a disk file.


**The stream that supplies data to the program is known as "input stream".**

**The stream that receives data from the program is known as "output stream".**


## Classes for file stream operations

Classes for file stream operations:

1. ifstream.
2. ofstream.
3. fstream.

These classes are derived from **fstreambase**.

Details of file stream classes.

|Class|Contents|
|:---:|:------:|
|filebuf|Sets the file buffers to read and write. Contains **Openprot** constant used in **open()** of file stream classes. Also contains **open()** and **open()** as members.|
|fstreambase|Serves as a base for fstream, ifstream and ofstream. Contains **open()** and **close()** functions.|
|ifstream|Provides input operations. Contains **open()** with default input mode. Inherits the functions **get()**, **getline()**, **read()**, **seekg()** and **tellg()** functions from istream.|
|ofstream|Provides output operations. Contains **open()**with default output mode. Inherits **put()**, **seekp()**, **tellp()** and **write()** functions from ostream.|
|fstream|Provides support for simultaneous input and output operations. Inherits all functions from istream and ostream classes through iostream.|
