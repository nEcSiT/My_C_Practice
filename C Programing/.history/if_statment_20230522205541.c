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
    scanf("%d", &a);

    if (a){
        printf("Inside the the control statement\n");
        printf("%d\n", a);
    }
        printf("Outside the control statement\n");

getche();
}