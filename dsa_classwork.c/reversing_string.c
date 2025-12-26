#include<stdio.h>
#include<string.h>
#define max 100

char stack[max];
int top = -1;

void push(char c){
   stack[++top] = c;
}

char pop(){
    return stack[top--];
}

int main(){
    char str[] = "ayush";
    int n = strlen(str);
    
    for(int i = 0;i<n;i++){
        push(str[i]);
    }
    
    printf("the revers is:");
    for(int i = 0;i<n;i++){
        printf("%c ",pop());
    }
    return 0;
}