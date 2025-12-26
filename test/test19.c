#include <stdio.h>

int main() {
    int x = 10;       // normal variable
    int *p;           // pointer declaration
    p = &x;           // store address of x in pointer p

    printf("Value of x: %d\n", x);        // 10
    printf("Address of x: %p\n", &x);     // memory address of x
    printf("Pointer p holds: %p\n", p);   // same address as &x
    printf("Value at address p: %d\n", *p); // 10 (dereferencing)

    return 0;
}