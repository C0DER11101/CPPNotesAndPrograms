# Different file modes

Syntax:

`stream_object.open("filename.extension", mode);`

The `mode` parameter specifies the purpose for which the file is opened.


## Modes defined in **ios** class.

|Parameter|Meaning|
|:-------:|:-----:|
|`ios::app`|Append to end-of-file|
|`ios::ate`|Go to end-of-file on opening|
|`ios::binary`|Binary file|
|`ios::in`|Open file for reading only(by-default for ifstream)|
|`ios::nocreate`|Open fails if the file doesnot exist|
|`ios::noreplace`|Open fails if the file already exists|
|`ios::out`|Open file for writing only(by-default for ofstream)|
|`ios::trunc`|Delete the contents of the file if it exists|
