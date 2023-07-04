#include <stdio.h>
#include <conio.h>

/**
 * main - entry into the program
 * if_else: if condition sets for true and else statement stands for false statement.
 * Return: void
*/

void main()
{
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if (age > 25 && age < 30)
    {
        printf("age is %d\n", age);
        printf("Lets go for coffee\n");
    }

    else
    {
        printf("Your age %d years is below the average\n", age);
        printf("Kindly go home\n");
    }

    printf("Out of if_else block\n");
    getche();
}