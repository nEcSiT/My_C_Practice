#include <stdio.h>
#include <conio.h>

/**
 * main - void entry point no datatype
 * Print the age eligibility to go for coffee
 * return: ;
*/

void main()
{
    int age;
    printf("Please enter your age: ");
    scanf("%d", &age);

        if (age > 20 && age < 30 )
            {
                printf("Your age is %d.\n", age);
                printf("You can go for coffee with me\n");
            }
        if (age < 15)
            printf("It's time to go home");
     getche();
     return;   
}