### UNZIP Project

This repository holds the source code and a set of test cases for a program named `wunzip` that simulates the Unix `unzip` command logically

> Description

The `unzip` command does the reverse of `zip` command. it takes a compressed file and decompresses it and prints the output to the standard output `std` .


For Example : \
if we had a compressed file containing \
 `4a5s2w1b3y`\
the unzip should turn it into\
 `aaaassssswwbyyy` 

In order to decode a compressed file, you need to loop through each integer number and character. the integer number (n) shows that you should repeat the character n times

> Syntax

Before going into how to use the `wunzip` command, let’s start by reviewing the basic code syntax.

```c
$ unzip    zipfile.z
```



> Usage

Firstly we compile the code file as follows

``` bash
prompt> gcc -o wunzip wunzip.c -Wall 
```

this will produce a binary file named `wunzip` which we will use.

To run the tests we first have to give a running permission for the bash script `test-wunzip.sh`

```bash
prompt> chmod u+x ./test-wunzip.sh
prompt> ./test-wunzip.sh
```

the output will be in the following form

```bash
test 1: passed
test 2: passed
test 3: passed
test 4: passed
test 5: passed
test 6: passed
```

The wunzip utility expression takes the following form:

```sh
./wunzip  zipfile.z
```
#### Note
The format of the compressed file must match exactly (a 4-byte integer followed by a character for each run).

If multiple files are passed to unwzip, they are decompressed into a single uncompressed stream of text. so , you can't know what did each file contain before compressing
