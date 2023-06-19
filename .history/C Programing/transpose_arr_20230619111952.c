#include <stdio.h>

/**
 * main - entry into the code
 * 2d array
 * for loop
 * 
 * the program transpose the matrix of the array
*/

void main()
{
    int array[3][2],i,j;

    printf("Enter the element 2 in a column: ");

    for (i=0; i<3; i++)
    {
        for (j=0; j<2; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }

    printf("Printing the matrix of the 2D array:)\n\n");

    for (i=0; i<3; i++)
    {
        for (j=0; j<2; j++)
        {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }

    printf("Printing the transposed matrix of the 2D array:)\n\n");

    for (i=0; i<2; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("%d\t", array[j][i]);
        }
        printf("\n");
    }
}
