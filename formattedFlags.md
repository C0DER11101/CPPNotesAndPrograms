.cpp file with same name exists.

SYNTAX:

```c++
cout.setf(arg1, arg2);
```


`arg1` -> formatted flag defined in class ios, specifies the
format action required for the output.

`arg2` -> ios constant, known as bit-field, specifies the group
to which the formatting flag belongs.


| OUTPUT-FORMAT-REQUIRED| Flag|Bit-field |
|:----------------------|:---:|---------:|
|Left-justified|ios::left|ios::adjustfield|
|Right-justified|ios::right|ios::adjustfield|
|Padding after sign or base|ios::internal|ios::adjustfield|
|Scientific notation|ios::scientific|ios::floatfield|
|Fixed point notation|ios::fixed|ios::floatfield|
|Decimal base|ios::dec|ios::basefield|
|Octal base|ios::oct|ios::basefield|
|Hexadecimal base|ios::hex|ios::basefield|


```c++
cout.fill('*');
cout.setf(ios::left, ios::adjustfield);
cout.width(15);
cout<<"TABLE 1"<<"\n";
```

So, `cout.setf(ios::left, ios::adjustfield);` basically left-justifies the output "TABLE 1" and since it's length is 7, the extra 8 whitespaces are displayed after the output and those white spaces are filled by '*' character and after that the newline is printed:

So, in simple words, the output is:

`TABLE 1********`

```c++
cout.fill('*');
cout.setf(ios::right, ios::adjustfield);
cout.width(15);
cout<<"TABLE 2"<<"\n";
```

The output is right-justified in this case, the output was supposed to be 15 characters wide, but it was only 7 characters wide, so additional 8 whitespaces were displayed before "TABLE 2" which were filled by the '*' character and after that the newline character was printed....

Output is:

`********TABLE 2`

Again the order in which you write `cout.fill('*');` `cout.width(15);` and `cout.setf(ios::.........);` doesnot matter, it will still show the same output:

example:

```c++
cout.setf(ios::left, ios::adjustfield);
cout.width(15);
cout.fill('*');
cout<<"TABLE 3"<<"\n";
```

Output will be:

`TABLE 3********`

The `set()` is not like `width()`, meaning it doesnot hold for only one item, it holds for all the items that follow it.......

Example:

```c++
cout.fill('*');
cout.setf(ios::left, ios::adjustfield);
cout.width(15);
cout<<"TABLE 1"<<"\n";
cout.width(15);
cout<<"TABLE 2"<<"\n";
```

Output will be:
```
TABLE 1********

TABLE 2********
```


`cout.setf();` holds for both the output statements here!!!
