#include <stdio.h>

/**
 * main - entry into the code
 * arrays 
 * loops 
 * assignment.
*/

void main()
{
    char name1[30], name2[15];
    
    printf("Enter name:");

    scanf("%s%s", name1, name2);

int i = 0, j, count2 = 0, count1 = 0;

    while (name1 != '\0')
    {
        count1++;
        i++;
    }


 for  (j = 0; name2 != '\0'; )
    {
        count2++;
        j++;
    }

 printf("Length of fist string is %d and the second is %d\n", count1, count2);

    int len1, len2;
    len1 = count1;
    len2 = count2;

    for (j=0; i<=len2; i++ )
    {
        name1[len1] = name2[j];
        len1++;
    }

    printf("Concatenated string is %s\n", name1);
}
