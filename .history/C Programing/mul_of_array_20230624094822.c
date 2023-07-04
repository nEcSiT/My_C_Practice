#include <stdio.h>

/**
 * maint - entry into the code
 * This program is for multiplying  two arrays and storing the answer in another array
 * 2darray 
 * for loop
 * return
*/

void main()
{
    int num1[2][3], num2[3][4], num3[2][4], sum, i, j, k;

    printf("Enter first matrix: ");
    
    for (i=0; i<2; i++)
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
        for (j=0; j<4; j++)
        {
            scanf("%d", &num2[i][j]);
        }
        printf("\n");
    }
    
    for (i=0; i<2; i++)
    {
        for (j=0; j<3; j++)
        sum = 0;
        {
           for (k=0; k<4; k++)
            {
                sum = sum + num1[i][k] * num2[k][j];
                num3[i][j] = sum; 
            }
        }
        printf("\n");
    }

    printf("Print first matrix: ");
    
    for (i=0; i<2; i++)
    {
        for (j=0; j<3; j++)
        {
            scanf("%d ", num1[i][j]);
        }
        printf("\n");
    }

    printf("Print second matrix: ");
    
    for (i=0; i<3; i++)
    {
        for (j=0; j<4; j++)
        {
            scanf("%d ", num2[i][j]);
        }
        printf("\n");
    }

    printf("Print multiply matrix: ");
    
    for (i=0; i<2; i++)
    {
        for (j=0; j<4; j++)
        {
            scanf("%d ", num3[i][j]);
        }
        printf("\n");
    }
}