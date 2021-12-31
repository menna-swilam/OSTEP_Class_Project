### ZIP Project

This repository holds the source code and a set of test cases for a program named `wzip` that simulates the Unix `zip` command logically

> Description

The `zip`  is the most widely used archive file format that supports lossless data compression.

A Zip file is a data container containing one or more compressed files or directories. Compressed (zipped) files take up less disk space and can be transferred from one to another machine more quickly than uncompressed files. Zip files can be easily extracted in Windows, macOS, and Linux using the utilities available for all operating systems.

The type of compression we used is  **run-length encoding**\
**Run-length encoding (RLE)** is a form of lossless data compression in which runs of data (sequences in which the same data value occurs in many consecutive data elements) are stored as a single data value and count, rather than as the original run.
meaning that when decompressed, all of the original data will be recovered when decoded.

For Example : \
if we had a file containing the text\
 `aaaassssswwbyyy`\
the zip should turn it into\
 `4a5s2w1b3y` 

In order to encode a string of data, you need to loop through each character of the data and count the occurrences. Once you see a character that is different from the previous character, you will append the number of occurrences and the character to your encoding.

> Syntax

Before going into how to use the `wzip` command, let’s start by reviewing the basic code syntax.

```c
$ zip   files_list > zipfile
```



> Usage

Firstly we compile the code file as follows

``` bash
prompt> gcc -o wzip wzip.c -Wall -Werror 
```

this will produce a binary file named `wzip` which we will use.

To run the tests we firstly have to give a running permission for the bash script `test-wzip.sh`

```bash
prompt> chmod u+x ./test-wzip.sh
prompt> ./test-wzip.sh
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

The wzip utility expression takes the following form:

```sh
./wzip [FILES_NAME] > [zipfile]
```
you should use the UNIX redirection sign `>` to redirect the output to the zipfile

