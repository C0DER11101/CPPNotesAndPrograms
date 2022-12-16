# About [fpr5.cpp](https://github.com/C0DER11101/CPPNotesAndPrograms/blob/master/WorkingWithFiles/Notes/fpr5.cpp), [fpr6.cpp](https://github.com/C0DER11101/CPPNotesAndPrograms/blob/master/WorkingWithFiles/Notes/fpr6.cpp) and [fpr7.cpp](https://github.com/C0DER11101/CPPNotesAndPrograms/blob/master/WorkingWithFiles/Notes/fpr7.cpp)

From the files above it's clear that the `getline()` function reads one line from a file.


The outputs below explain better:

# Output of **frp6.cpp**

<img src="https://github.com/C0DER11101/CPPNotesAndPrograms/blob/master/WorkingWithFiles/Notes/Output_fpr6.png" width="70%" height="40%">

# Output of **fpr7.cpp**

<img src="https://github.com/C0DER11101/CPPNotesAndPrograms/blob/master/WorkingWithFiles/Notes/Output_fpr7.png" width="70%" height="40%">


In **fpr7.cpp**, `inF.getline(something, 100)` inside the while loop goes on reading a single line from the text file `file3.txt`, so in every iteration, the text in `something` gets replaced by a new line of text read from `file3.txt`, finally in the last iteration, `52` is read from `file3.txt` and it replaces the previous text in `something` by `52` and that's why the output comes to be `52`.

---
