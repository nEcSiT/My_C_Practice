#include <stdio.h>

/**
 * main - entry into the code
 * arrays
 * loops
 * adding arrays
 * columns and rows
*/

void main()
{
    int arr[3][3],i,j,sumR,sumC[3];
    printf("Enter 3 element per tab:)");

    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

printf("Printing sum of rows\n");

    for (i=0; i<3; i++)
    {
        sumR=0;
        for (j=0; j<3; j++)
        {
            printf("%d\t", arr[i][j]);
            sumR = sumR + arr[i][j];
        }
        printf("=\t%d\n", sumR);
        printf("\n");
    }

printf("Printing sum of columns\n");

    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            sumC[i]= sumC[i] + arr[j][i];
        }
      
        sumC[i]=0;
        printf("\n\n");
    }

    for (i=0; i<3; i++)
    {
        printf("%d\t", arr[i][j]);
        printf("%d\t", sumC[i]);
    }
return;
}