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
/**
 * unsigned int a = 10;
unsigned int b = 6;
printf("line 1 - value of bitwise & is %d\n", a & b);
printf("line 2 - value of bitwise | is %d\n", a | b);
printf("line 3 - value of bitwise ^ is %d\n", a ^ b);

printf("line 4 - value of bitwise and logical value is %d\n", a & b && b + 1 || 0 && b++);
printf("line 5 - the updated value of b  is %d\n", b)
*/

// BITWISE RIGHT SHIFT
unsigned int a = 10;
unsigned int b;
b = a >> 2;

printf("line 1 - value of bitwise left shift is %d\n", b); 
}