#include<stdio.h>
#define SIZE 5
int queue[SIZE];
int front = -1,rear= -1;

void enqueue(int value){
    if(rear == SIZE-1){
        printf("overflow condition for %d\n",value);
    }
    else{
        if(front == -1)
        front = 0;
    rear++;
        queue[rear] = value;
        printf("the inserted value is: %d\n", value);
        
    }
}

void display(){
    if(front == -1){
        printf("the queue is empty");
    }
    else{
        printf("the queue elements are\n");
        for(int i = front;i<=rear;i++){
            printf("%d",queue[i]);
            printf("\n");
        }
    }
    printf("thank you (:(");
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(50);
    enqueue(60);
    enqueue(80);
    enqueue(100);
    enqueue(4);
    display();
}