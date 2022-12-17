# Random access

**Updating a file.**

Updating a file would include one or more of the following tasks:

* Displaying the contents of a file.
* Modifying an existing item.
* Adding a new item.
* Deleting an existing item.

**These actions require the file pointers to move to a particular location that corresponds to the item/object under consideration. This can be implemented easily if the file contains collection of items/objects of _equal lengths_.**

_The size of each object in this case can be obtained as follows:_

`int object_length=sizeof(object);`

_In this case, the location of a desired object, say the_ $m^{th}$ _object can be obtained as follows:_

`int location=m*object_length;`  The location gives the byte number of the first byte of the $m^{th}$ object. Now, we can set the file pointer to reach this byte with the help of **seekg()** or **seekp()**.

_We can also find the total number of objects in the file using the **object_length** as follows:_

`int n=file_size/object_length;`

`file_size` can be obtained by using **tellg()** or **tellp()** when the file pointer is at the end of the file.
