#include<stdio.h>
#define SIZE 5
    int stack[SIZE];
    int top = -1;
void push(int value){
    if(top==SIZE-1){
        printf("the stack is overflow");
    }
    else{
        top++;
        stack[top]=value;
        printf("pushed(%d)\n",value);
    }
}

void pop(){
    if(top==-1){
       printf("the stack is underflow");
    }
    else{
        printf("pop(%d)\n",stack[top]);
    }
}

void display(){
    if(top==-1){
        printf("the stack is empty");
    }
    else{
        printf("the stack is:");
        for(int i=0;i<=top;i++){
            printf("%d\n",stack[i]);
        }
    }
}

int main(){
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    push(70);
    pop();
    display();
    
    return 0;
}