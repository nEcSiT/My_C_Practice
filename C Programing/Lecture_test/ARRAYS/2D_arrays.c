#include <stdio.h>
/**
 * main - main entry into the code
 * arrays 
 * nested loops
 * Return:0
*/

void main()
{
    //int mark[3][5];
    int i, j;
/*
printf("Enter the next 15 elements of the array: ");

    for (i=0; i<3; i++)
    {
        for (j=0; j<5; j++)
        {
            scanf("%d", &mark[i][j]);
        }
        printf("\n");
    }

    for (i=0; i<3; i++)
    {
        for (j=0; j<5; j++)
        {
            printf("%d ,", mark[i][j]);
        }
         printf("\n");
    }
*/
    int try[][6]=
    {
        {1,2,3,4},
        {4,3,9},
        {8,9}
    };

    for (i=0; i<3; i++)
    {
        for (j=0; j<6; j++)
        {
            printf("%d ", try[i][j]);
        }
         printf("\n");
    }
}