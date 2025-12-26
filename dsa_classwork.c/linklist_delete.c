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

    head = (struct node*)malloc(sizeof(struct node));
    second =(struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    forth =(struct node*)malloc(sizeof(struct node));

    head->data=5;
    head->next=second;
    second->data=7;
    second->next =third;
    third->data=14;
    third->next=forth;
    forth->data=18;
    forth->next=NULL;

    //printing the elements of the list
    struct node*t=head;
    printf("linklist element is:\n");
    while(t!=NULL){
        printf("%d->",t->data);
        t=t->next;
    }
    printf("null");

    //deleteing a element from th list 
    struct node*del=second->next;
    second->next=del->next;
    free(del);

    //printing the final list
    struct node*temp=head;
    printf("\nlinklist after deleting element is:\n");
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("null");

    return 0;
}