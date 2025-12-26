#include<stdio.h>
int main()
{
    int a =5;
    int b = 10;
    printf("%d",a,b);
    int c = b;
    int d = a;
    int a = c;
    int b = d;
    printf("%d",a,b);
    return 0;
}