//algo to insert a new node at the start of the doubly linked list
#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node*prev;
    int data;
    struct node*next;
};

int main(){
    struct node*head;
    struct node*second;
    struct node*third;

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));

    head->data=12;
    second->data=13;
    third->data=15;

    head->next=second;
    second->next=third;
    third->next=NULL;

    head->prev=NULL;
    second->prev=head;
    third->prev=second;

    struct node*tem=head;
    printf("forward is:");
    while(tem!=NULL){
        printf("%d->",tem->data);
        tem=tem->next;
    }
    printf("\n");
    struct node*t=third;
    printf("backward is:");
    while(t!=NULL){
        printf("<-%d",t->data);
        t=t->prev;
    }
    printf("\n");

    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=43;
    newnode->next=NULL;
    newnode->prev=third;
    third->next=newnode;

    printf("\n");
    struct node*q=newnode;
    printf("backward is:");
    while(q!=NULL){
        printf("<-%d",q->data);
        q=q->prev;
    }
    printf("\n");

    return 0;
}
