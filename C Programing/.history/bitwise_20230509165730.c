#include <stdio.h>

/**
 * main - main entry point
 * Topic: Bitwise operator
 * Return: 0
*/
int main(void)
{

    //BITWISE AND
/**
 * unsigned int a = 15;
unsigned int b = 20;
int c = 0;
c = a & b;
printf("line 1 - value of c is %d\n", c);
*/

//BITWISE OR.
/**
 * unsigned int a = 50;
unsigned int b = 5;
int c = 0;
c = a | b;
printf("line 1 - value of c is %d\n", c);
*/

//BITWISE XOR
/**
 * unsigned int a = 5;
unsigned int b = 7;
int c = 0;
c = a ^ b;
printf("line 1 - value of c is %d\n", c);
*/

//TASK 
unsigned int a = 10;
unsigned int b = 6;
printf("line 1 - value of bitwise & is %d\n", a & b);
printf("line 2 - value of bitwise | is %d\n", a | b);
printf("line 3 - value of bitwise ^ is %d\n", a ^ b);

printf("line 4 - value of bitwise and logical value is %d\n", a & b && b + 1 || 0);
}