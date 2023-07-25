#include <stdio.h>
#include <stdlib.h>

/**
 * args
*/

int main(int argc, char *argv[])
{
    int i;
    for (i=0; i<argc; i++)
    {
        printf("argv[%d]= %s\n", i, argv[i]);
    }
    printf("argc = %d\n", argc);
    return(0);
}