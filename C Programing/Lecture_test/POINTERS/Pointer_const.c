#include <stdio.h>
 /**
  * main - entry into the code
  * checking the const key word and its function
  * Return 0
 */
void main()
{
    /*const int a = -11;
    const int *c = 9&a;
    
    //*c = 12;

    printf("%d  %d\n", a, *c);
    */

   char str[] = "Welcome to jenny's lectures";
   char *ptr = str;
   printf("%c\n", *ptr);
   printf("%c\n", *(ptr++ +1));
   printf("%c\n", *((ptr-- +5)-1)+3);
   printf("%c\n", *(++ptr + 10)-32);
   printf("%c %c %c \n", *ptr, *++ptr, *--ptr);
}