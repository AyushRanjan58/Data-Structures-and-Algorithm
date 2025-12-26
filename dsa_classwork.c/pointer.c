#include <stdio.h>
int main() {
    int a = 10;
     // declare pointer

        // store address of a in p
    int *p = &a;
    p = &a;
    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", &a);
    printf("value p stores: %d\n", *p);
    printf("Address of p: %p\n", p);
    return 0;
}
