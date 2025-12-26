#include<stdio.h>
#define n 5
int queue[n];
int front = -1;
int rear = -1; 

void enqueue(int item){
    if(rear==n-1){
        printf("the queue is overflow");
        return;
    }
    else{
        if(front==-1){
            front=rear=0;
        }
        else{
            rear = rear+1; 
        }
        queue[rear]=item;
    }
    return;
}

void dequeue(){
    int item;
    if(front==-1){
        printf("the queue is empty");
        return;
    }
    if(front==rear){
        front=rear=-1;
    }
    else{
        front=front+1;
        item=queue[front];
    }
}

void display(){
    if(front==-1){
        printf("the queue is empty");
        return;
    }
    printf("\nqueue elements:");
    for(int i=front;i<=rear;i++){
        printf("%d ",queue[i]);
    }
}

int main(){
    enqueue(20);
    enqueue(40);
    enqueue(60);
    enqueue(232);
    display();
    dequeue();
    display();
    return 0;
}