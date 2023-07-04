#include <stdio.h>
#include <string.h>

/**
 * main - entry into the code
 * string compare - compares where two strings are same
 * array and for loop 
*/

void main()
{
    int i=0, flag = 0;
    char str1[] = "Hello Julien", str2[] = "Hi bieber";

    while(str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("Same\n");
    else
        printf("Not same\n");
}