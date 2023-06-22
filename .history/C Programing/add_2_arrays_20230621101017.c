#include <stdio.h>

/**
 * maint - entry into the code
 * This program is for adding two arrays and storing the answer in another array
 * 2darray 
 * for loop
 * return
*/

void main()
{
    int num1[3][3], num2[3][3], sum[3][3], i, j;

    printf("Enter first matrix: ");
    
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            scanf("%d", &num1[i][j]);
        }
        printf("\n");
    }

    printf("Enter second matrix: ");
    
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            scanf("%d", &num2[i][j]);
        }
        printf("\n");
    }

    printf("Printing first matrix\n\n");
    
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("%d  ", num1[i][j]);
        }
        printf("\n");
    }

    printf("Printing second matrix\n\n");
    
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("%d  ", num2[i][j]);
        }
        printf("\n");
    }

    printf("Printing summed arrays 1&2 matrices\n\n");
    
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            sum[i][j] = num1[i][j] - num2[i][j];
            printf("%d  ", sum[i][j]);
        }
        printf("\n");
    }
}