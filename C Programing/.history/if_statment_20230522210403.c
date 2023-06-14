#include <stdio.h>
#include <conio.h>

/**
 * main - entry point
 * if statement: Use to control a single output of a program
 * return:;
*/

void main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age > 20){
        printf("You are %d years old\n", age);
        printf("You are welcome into the coffee shop.\nWhat flavour can I offer you?\n");
    }
        printf("Sorry you are not qualified to take in caffein\n");

getche();
}