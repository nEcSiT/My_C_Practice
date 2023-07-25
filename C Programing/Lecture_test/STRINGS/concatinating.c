#include <stdio.h>

/**
 * main - entry into the code
 * arrays 
 * loops 
 * assignment.
*/

void main()
{
    int i = 0, j = 0;
    int count2 = 0, count1 = 0;
    int len1, len2;

    char name1[30], name2[15];
    
    printf("Enter name:");

    scanf("%s%s", name1, name2);

printf("%s %s\n", name1, name2);

    while (name1[i] != '\0')
    {
        count1++;
        i++;
    }

    while (name2[j] != '\0')
    {
        count2++;
        j++;
    }

 printf("Length of fist string is %d and the second is %d\n", count1, count2);
    
    len1 = count1;
    len2 = count2;

    for (j=0; j<=len2; j++ )
    {
        name1[len1] = name2[j];
        len1++;
    }

    printf("Concatenated string is %s\n", name1);
}
