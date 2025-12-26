//Write a program to demonstrate the use of the & (address of) and *(value at address) operators.
#include <stdio.h>

int main() {
    int a = 20;     // a normal integer
    int *p;         // declare a pointer

    p = &a;         // p now stores the address of a

    printf("The value of a is: %d\n", a);        // direct access
    printf("The address of a is: %p\n", &a);     // using &
    printf("The value of a using pointer is: %d\n", *p); // using *
    printf("The address stored in p is: %p\n", p);       // same as &a

    return 0;
}
