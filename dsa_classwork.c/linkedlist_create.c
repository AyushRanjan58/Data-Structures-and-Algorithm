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

head = (struct node*)malloc(sizeof(struct node));
second = (struct node*)malloc(sizeof(struct node));
third = (struct node*)malloc(sizeof(struct node));

head->data=8;
head->next=second;
second->data=6;
second->next=third;
third->data=4;
third->next=NULL;

//to print the above linklist the code is
struct node*temp=head;
printf("linklist elements is:\n");
while(temp!=NULL){
    printf("%d->",temp->data);
    temp=temp->next;
}
printf("null");
return 0;
}