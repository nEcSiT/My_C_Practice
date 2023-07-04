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
    int num1[3][5], num2[3][4], sum[3][3] = {0}, i, j;

    printf("Enter first matrix: ");
    
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            scanf("%d", &num1[i][j]);
        }
        printf("\n");
    }