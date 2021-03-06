#include <stdio.h>
#include <errno.h>
#include <stdlib.h>    // exit
#include <string.h>    // strerror

#define buf_size 1024

int main(int argc, char *argv[])
{
    FILE *fp;                                            // pointer to a FILE object
	
    char buf[buf_size];                             

    for (size_t i = 1; i < argc ; i++)
    {
        if ((fp = fopen(argv[i], "r")) == NULL)       	 // if the file cannot be opened 
        {
            printf("wcat: cannot open file\n");
            exit(EXIT_FAILURE);                       	 // EXIT
        }

        while (fgets(buf, buf_size, fp))         		// used to get input from file, one line at a time.
            printf("%s", buf);                      

        errno = 0;
        if (fclose(fp) != 0) {                       	// if the file cannot be closed 
            strerror(errno);                       	    // error message for not closed file 
            exit(EXIT_FAILURE);
        }
    }

                                

    return 0;
}
