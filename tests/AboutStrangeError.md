# About the strange error!!

The images below shows the strange error that I got.

![image](https://github.com/C0DER11101/CPPNotesAndPrograms/blob/master/tests/StrangeError2.png?raw=true)

And here is another image of the file that threw the error!!

![image](https://github.com/C0DER11101/CPPNotesAndPrograms/blob/master/tests/StrangeError.png?raw=true)

Here is the [file](https://github.com/C0DER11101/CPPNotesAndPrograms/blob/master/tests/test19.cpp) that threw the error!!


These are the images after the strange error was removed:

![image](https://github.com/C0DER11101/CPPNotesAndPrograms/blob/master/tests/StrangeErrorGone2.png?raw=true)


![image](https://github.com/C0DER11101/CPPNotesAndPrograms/blob/master/tests/StrangeErrorGone.png?raw=true)

Here is the [file](https://github.com/C0DER11101/CPPNotesAndPrograms/blob/master/tests/test20.cpp) that resolved the error!!


It's rather simple to resolve the error, from the above images, it seems that the simple way to resolve this error is to not include the `iomanip` header file at the last(i.e. after including all other header files).
