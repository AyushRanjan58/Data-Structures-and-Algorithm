//Write a program that takes two integers as input from the user and swaps their values using call by value. Display the values of the numbers 
//before and after swapping. 

#include<stdio.h>
void changename(int p ,int q){
    int x = p;
    p =q;
    q = x;
    printf("entered value of a:%d\n",p);
    printf("enteredc value of b:%d\n",q);

}

int main(){
    int a;
    int b;
    printf("enter the value of a and b:");
    scanf("%d%d",&a,&b);
    printf("the entered value of a:%d\n",a);
    printf("the entered value of b:%d\n",b);
    changename(a,b);
    return 0;
}