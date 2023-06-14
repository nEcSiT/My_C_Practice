#include <stdio.h>
#include <conio.h>

/**
 * main - entry point
 * if statement: Use to control a single output of a program
 * return:;
*/

void main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d\n", &a);

    if(a)
        printf("Inside the the control statement\n");
        printf("Outside th3e control statement\n");
        getche();
}