#include<stdio.h>
int main(){
    int x = 45;
    int *ptr;
    ptr = &x;

    printf("%d\n",x);
    printf("%d\n",*ptr);
    printf("%d\n",ptr);
    printf("%d\n",&x);
    return 0;
}