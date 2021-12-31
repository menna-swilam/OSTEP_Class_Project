/*
 * wunzip.c --- This program uncompresses files using the
 *              run-length encoding (RLE) algorithm.
 */

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
  if (argc < 2) {
    printf("wunzip: file1 [file2 ...]\n");
    exit(1);
  }

  for (int i = 1; i < argc; i++) {
    FILE *fp = fopen(argv[i], "r");

    if (fp == NULL) {
      printf("wzip: cannot open file\n");
      exit(1);
    }
														
	int char_count;
    char cur_char;													//&char_count , &cur_char − This is the pointer to a block of memory with a minimum size of size*nmemb bytes.
																	//size (int size),(char size) − This is the size in bytes of each element to be read.
																	//The total number of elements successfully read are returned as a size_t object.
																	
    while (((int) fread(&char_count, sizeof (int), 1, fp)) > 0) {
      fread(&cur_char, sizeof (char), 1, fp);  						// return the character. 

      for (int j = 0; j < char_count; j++) {     					// read character until its count ends.
        printf("%c", cur_char);
      }
    }

    fclose(fp);
  }

  return 0;
}
