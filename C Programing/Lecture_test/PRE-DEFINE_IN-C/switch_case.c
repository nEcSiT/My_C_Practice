#include <stdio.h>
#include <conio.h>

/**
 * main - the main entry into the code
 * switch: use to start the switch command.
 * case: is use to measure the expression in the switch expression
 * break: is use to exit the code.
 * default: is use when the expression in the switch case do not match.
 
*/

void main()
{
    /**
     * PSEUDOCODE
     * create a var.
     * use scanf to receive input from the user
     * if the var is 80 equate to A
     * if the var is 70 ----------B
     * ------------- 60 ----------c
     * default should be  --------D
    */

   int val;

   printf("Enter score: ");
   scanf("%d", &val);

   switch (val)
   {
        case 80:
                printf("GRADE A");
            break;

        case 70:
                printf("GRADE B");
            break;

        case 60:
                printf("GRADE C");
            break;
        
        default:
                printf("GRADE D");
            break;
   }
   getche();
}