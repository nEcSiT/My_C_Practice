#include <stdio.h>

/**
 * Pointers - they carry the address of another variable.
 * (*) - indirection or dereference operator.
 * (&) - address of operator or reference operator 
 * Declaration
 * Initialization
 * Accessing of Pointers
*/

void main()
{
    int name = 20, book = 12, c;
    int * ptr, * ptr1;

    ptr = &name;
    ptr1 = &book;
    *ptr = *ptr1;

    printf("Value of Book is %d\n", *ptr1);

    c = *ptr;
    *ptr1 = 100;

    printf("Value of name is %d\n", name);
    printf("Value of name is %d\n", *ptr);
    printf("Value of Book is %d\n", book);
    printf("Value of Book is %d\n", *ptr);
    printf("Value of c is %d\n", c);
    printf("Address of name is %x\n", ptr);
    printf("Address of name is %x\n", &name);
    printf("Address of book is %x\n", ptr1);
    printf("Address of book is %x\n", &book);


}