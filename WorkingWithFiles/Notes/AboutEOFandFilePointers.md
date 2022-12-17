# File pointers and eof()

The programs below show the working of eof() member function.

[fpr11.cpp](https://github.com/C0DER11101/CPPNotesAndPrograms/blob/master/WorkingWithFiles/Notes/fpr11.cpp)

[fpr12.cpp](https://github.com/C0DER11101/CPPNotesAndPrograms/blob/master/WorkingWithFiles/Notes/fpr12.cpp)

[fpr13.cpp](https://github.com/C0DER11101/CPPNotesAndPrograms/blob/master/WorkingWithFiles/Notes/fpr13.cpp)


So, the eof() member functions basically determines whether the the file pointers reached end-of-file(in simple words). When the file pointer reaches the end-of-file, then eof() detects it and returns 1(true) otherwise it returns 0(false).

This [link](https://www.sololearn.com/discuss/2420855/why-is-the-last-letter-being-printed-twice) also explains why the last character is read twice while using the get() member function


The output of **fpr11.cpp**

<img src="https://github.com/C0DER11101/CPPNotesAndPrograms/blob/master/WorkingWithFiles/Notes/Output_fpr11.png" width="70%" height="40%">

Here, when the input pointer reaches `r` of `Bora`, it is displayed using `cout<<ch;`; after this the if condition `inF.eof()!=0` is checked which results into false(i.e. eof() returns 0). Now, when the next `inF.get(ch);` is called the input pointer moves to `a` of `Bora` and it is printed through `cout<<ch;`, the if condition after `cout<<ch;` evaluates to false. Again the while condition `inF.eof()==0` is checked which evaluates to true. Then again `inF.get(ch);` is evaluated for which the input pointer moves to end-of-file which was right after `a` of `Bora`, now eof() detects that the input pointer reached end-of-file. Now, nothing is changed in `ch` so `cout<<ch;` still prints `a` and after that the if conditional after `cout<<ch;` is checked which evaluates to true, thus terminating the while loop by breaking through it.

That's why we get the output as `Priyanuj Boraa`.


The output of **fpr12.cpp**

<img src="https://github.com/C0DER11101/CPPNotesAndPrograms/blob/master/WorkingWithFiles/Notes/Output_fpr12.png" width="70%" height="40%">

Here if look at the program then you will find:

```c++
.
.
.
while(inF.eof()==0)
{
	inF.get(ch);
	if(inF.eof()!=0)
		break;
	cout<<ch;
}
.
.
.
```

Here after scanning the `a` of `Bora` for the first time, the if condition is checked which evaluates to false, so `cout<<ch;` is executed. After this, again the while condition is checked which evaluates to true, so `inF.get(ch);` is executed which makes the input pointer move to end-of-file after the `a` of `Bora`, and gets detected by eof() member function. Now, this time, the if condition evaluates to true and breaks out of while loop. Hence we get the output as `Priyanuj Bora`.


The output of **fpr13.cpp**

<img src="https://github.com/C0DER11101/CPPNotesAndPrograms/blob/master/WorkingWithFiles/Notes/Output_fpr13.png" width="70%" height="40%">

Here we have not put any if conditional, so the loop terminates naturally and you get the above output.


**Remember, when inF.get(ch); is called then input pointer moves forward. In simple words, inF.get(ch); moves the input pointer forward.**
