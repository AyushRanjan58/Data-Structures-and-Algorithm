#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};
int main(){
    struct node*head;
    struct node*second;
    struct node*third;
    struct node*forth;

    head =(struct node*)malloc(sizeof(struct node));
    second =(struct node*)malloc(sizeof(struct node));
    third =(struct node*)malloc(sizeof(struct node));
    forth =(struct node*)malloc(sizeof(struct node));

    head->data=1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=forth;
    forth->data=4;
    forth->next=NULL;

    struct node*temp=head;
    printf("linklist elements is:\n");
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp = temp->next;
    }
    printf("NULL");

    //to insert a new element in the middel of the list 
    struct node*newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=8;
    newnode->next=second->next;
    second->next=newnode;

     struct node*t=head;
    printf("\nlinklist after insertion of elements is:\n");
    while(t!=NULL){
        printf("%d->",t->data);
        t = t->next;
    }
    printf("NULL");

}