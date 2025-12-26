#include<stdio.h>
#define n 5
int stack[n];
int top = -1;

void push(int item){
    if(top == n-1){
        printf("the stack is overflow\n");
        return;
    }
    
    top = top +1;
    stack[top]=item;

    return;
}

int pop(){
    int item;
    if(top==-1){
        printf("the stack is underflow\n");
        return -1;
    }

    top = top - 1;
    item = stack[top];

    return item;
}

void peek(){
    if(top==-1){
        printf("stack is empty\n");
        return;
    }
    printf("\nelements are:");
    for(int i = 0;i<=top;i++){
        printf("%d ",stack[i]);
    }
}

int main(){
     push(10);
     push(20);
     push(30);
     push(40);
     push(50);

     peek();

     pop();

     peek();

    return 0;

}