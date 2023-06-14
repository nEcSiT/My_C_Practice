#include <stdio.h>

/**
 * main - entry into the script
 * Question: WAP that read an array of 10 intergers and count the total of even and odd elements.
 * Arrays
 * Loops
 * If else statement
 * Return;
*/

void main()
{
    int counter[10], even = 0, odd = 0, i, j = 0;
printf("Enter elements: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &counter[i]);
        printf("Elements are counter[%d] = %d\n", i, counter[i] );
    }

    while (j < 10)    
    {
        if (counter[j] % 2 == 0)
            ++even;
        else
            ++odd;
            j++;
    }
    

    printf("Total of even number = %d\nTotal of odd number = %d\n", even, odd);

}