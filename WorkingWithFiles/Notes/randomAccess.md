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

_In this case, the location of a desired object, say the $m^{th}$ object can be obtained as follows:_

`int location=m*object_length;`
