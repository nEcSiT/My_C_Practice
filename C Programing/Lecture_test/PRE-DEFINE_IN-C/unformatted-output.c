#include <stdio.h>
#include <conio.h>

/**
 * main - entry into the code.
 * putchar - use to printout a character
 * putch - define in the library conio.h also use to print out a character
 * puts: this uses the stdio.h library, use to print out string on the console. 
*/

void main()
{
  /**
    char hannah;
    puts("Enter the character:");
    

  hannah = getchar();

    putchar(hannah);
    putchar('\n');
    puts("Exit code");
*/
    printf("Enter your name:");
    char hannah[100];
    gets(hannah);
    puts(hannah);
    getche();
}