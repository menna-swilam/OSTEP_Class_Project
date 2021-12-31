### WCAT Project

This repository holds the source code and a set of test cases for a program named `wcat` that simulates the Unix `cat` command

> Description

The `wcat` reads data from the file and gives their content as output to the standard output.

It is used to display the contents of one or multiple text files, combine files by appending one file’s contents to the end of another file, and create new files.

> Syntax

Before going into how to use the `wcat` command, let’s start by reviewing the basic code syntax.

```c
//code goes here
```



> Usage

Firstly we compile the code file as follows

``` bash
prompt> gcc -o wcat wcat.c -Wall 
```

this will produce a binary file named `wcat` which we will use.

To run the tests we firstly have to give a running permission for the bash script `test-wcat.sh`

```bash
prompt> chmod u+x ./test-wcat.sh
prompt> ./test-wcat.sh
```

the output will be in the following form

```bash
test 1: passed
test 2: passed
test 3: passed
test 4: passed
test 5: passed
test 6: passed
test 7: passed
```

The wcat utility expression take the following form:

```sh
./wcat [FILE_NAMES]
```

**Displaying File Contents**

The most basic and common usage of the `wcat` command is to read the contents of files.

For example, the following command will display the contents of the `testfile.txt` file on the terminal:

```
./wcat testfile.txt
```

**Concatenating Files**

When passing two or more file names as arguments to the `wcat` command, the contents of the files will be concatenated. `wcat` reads the files in the sequence given in its arguments and displays the file’s contents in the same sequence.

For example, the following command will read the contents of `file1` and `file2` and display the result in the terminal:

```
./wcat file1 file2
```

**Creating new file**

The `wcat` command can be used for creating new files as follows

```bash
./wcat > newfile.txt
```



