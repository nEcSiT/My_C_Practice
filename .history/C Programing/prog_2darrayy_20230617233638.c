#include <stdio.h>

/**
 * main - entry into the code
 * 2d arrays with nested for loop
 * Return;
*/

void main()
{
    int array[3][3], sum[]={0,0,0};
    int i,j;

    printf("Enter the element three in a column: ");

    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            scanf("%d", &array[i][j]);
        }
        printf("\n");
    }

    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            sum[i] = sum[i]+array[j][i];
        }
    }

    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("%d ", &array[i][j]);
        }
        printf("\n");
    }

    for (j=0; j<3; j++)
    {
        printf("%d ", sum[j]);
    }
}