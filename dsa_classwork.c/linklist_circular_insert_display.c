#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};

struct node*head=NULL;
struct node*tail=NULL;

//insert at the end
void insert(int value){
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    if(head==NULL){
        head=newnode;
        tail=newnode;
        newnode->next=head;
    }
    else{
        tail->next=newnode;
        tail=newnode;
        tail->next=head;
    }
}

//display list
void display(){
    struct node*temp=head;
    if(head==NULL){
        printf("list is empty");
    }
    else{
        printf("circular linklist elements are:\n");
        do{
            printf("%d->",temp->data);
            temp=temp->next;
        }while(temp!=head);
        printf("\n");
    }
}

int main(){
    insert(10);
    insert(22);
    insert(43);
    insert(65);
    display();

    return 0;
}