#include<stdio.h>
void fun(int p){
    p=5;
}
int main(){
    int a = 4;
    printf("%d\n",a);
    fun(&a);
    printf("%d\n",a);
    return 0;
}