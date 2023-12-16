#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*prev;
    struct node* next;
};

void printLinkedList(struct node* ptr){
    while (ptr->next!=NULL)
    {
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL\n");

    while (ptr->prev!=NULL)
    {
        printf("%d->",ptr->data);
        ptr=ptr->prev;
    }
    printf("NULL\n");
}

int main()
{
    struct node* head=(struct node* )malloc(sizeof(struct node));
    struct node* second=(struct node* )malloc(sizeof(struct node));
    struct node* third=(struct node* )malloc(sizeof(struct node));
    struct node* fourth=(struct node* )malloc(sizeof(struct node));

    
    head->prev=NULL;
    head->data=23;
    head->next=second;

    second->prev=head;
    second->data=34;
    second->next=third;

    third->prev=second;
    third->data=56;
    third->next=fourth;

    fourth->prev=third;
    fourth->data=52;
    fourth->next=NULL;

    printf("The existing LinkedList: ");
    printLinkedList(head);

    return 0;
}