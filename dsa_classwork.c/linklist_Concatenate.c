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

    struct node*one;
    struct node*two;
    struct node*three;
    struct node*four;

    head = (struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    forth=(struct node*)malloc(sizeof(struct node));

    one=(struct node*)malloc(sizeof(struct node));
    two=(struct node*)malloc(sizeof(struct node));
    three=(struct node*)malloc(sizeof(struct node));
    four=(struct node*)malloc(sizeof(struct node));

    head->data=3;
    head->next=second;
    second->data=7;
    second->next=third;
    third->data=18;
    third->next=forth;
    forth->data=24;
    forth->next=NULL;

    one->data=33;
    one->next=two;
    two->data=77;
    two->next=three;
    three->data=188;
    three->next=four;
    four->data=244;
    four->next=NULL;

    struct node*temp=head;
    printf("linklist of elements of list one is:\n");
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("null");

    struct node*t=one;
    printf("\nlinklist of elements of list two is:\n");
    while(t!=NULL){
        printf("%d->",t->data);
        t=t->next;
    }
    printf("null");

    //CONCATENATION
    struct node *ptr=head;
    while(ptr->next!=NULL){
         ptr=ptr->next;
    }
    ptr->next=one;

    struct node*p=head;
    printf("\nlinklist of elements of list combined is:\n");
    while(p!=NULL){
        printf("%d->",p->data);
        p=p->next;
    }
    printf("null");

    return 0;
}

