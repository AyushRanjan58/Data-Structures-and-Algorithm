#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};
struct node*front=NULL;
struct node*rear=NULL;

void enqueue(int item){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=item;
    newnode->next=NULL;
    if(front==NULL){
        front=rear=newnode;
    }
    else{
        rear->next=newnode;
        rear=newnode;
    }
    return;
}

void dequeue(){
    int value;
    if(front==NULL){
        printf("the queue is empty");
    }
    struct node*temp=front;
    value=temp->data;
    if(front==rear){
        front=rear=NULL;
    }
    else{
        front=front->next;
    }
    free(temp);
    return;
}

void display(){
    if(front==NULL){
        printf("the queue is empty");
    }
    struct node*temp=front;
    printf("the queue is:");
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int main(){
    enqueue(10);
    enqueue(30);
    enqueue(50);
    display();
    dequeue();
    display();
    return 0;
}