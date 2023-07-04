#include <stdio.h>

/**
 * main - entry into the code
 * Topic: Summing of two arrays and storing in a third array.
 * Arrays
 * While loop
 * For loop
 * Return;
*/
void main()
{
int arrayA[5], arrayB[5], arrayC[5];
int i, j=0, k=0, l=0;

printf("WELCOME:)\n\n\nEnter first 5 numbers: ");

while (j<5)
    {
        scanf("%d", &arrayA[j]);
        j++;
    }

printf("Enter second 5 numbers: ");

    for (i=0; i<5; i++)
    {
        scanf("%d", &arrayB[i]); 
    }

    for (i=0; i<5; i++)
    {
        while (l<5)
        {
            printf("arrayA index [%d] is %d\n", l, arrayA[l]);
            l++;
        }
        printf("arrayB index [%d] is %d\n", i, arrayB[i]);
    }

    for (i=0; i<5; i++)
    {
        while (k<5)
        {
            arrayC[k] = arrayA[k] + arrayB[k];
            k++;
        }
        printf("Sum of arrayA[%d] + arrayB[%d] = arrayC[%d]\n", arrayA[i], arrayB[i], arrayC[i]);
    }
}