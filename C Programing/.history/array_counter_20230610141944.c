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
    int counter[10], even = 0, odd = 0, i;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &counter[i]);

                while (counter)
                {
                    if (counter[i] % 2 = 0)
                            ++even;
                    else
                        ++odd;
                }
    }

    printf("Total of even number = %d\nTotal of odd number = %d\n Elements are counter[%d] = %d\n", even, odd, i, counter[i] );

}