#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};

struct node* insertAtEnd (struct node* head,int data){
    struct node* ptr =(struct node*)malloc(sizeof(struct node));
    ptr->data=data;

    struct node* p =head;

    while (p->next!=NULL)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
  
}

struct node* insertAfterNode(struct node* head,struct node*prev,int data){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=prev->next;
    prev->next=ptr;
}

void printElement(struct node* ptr){
    while (ptr!= NULL)
    {
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL\n");
}

int main()
{
    struct node* head=(struct node*)malloc(sizeof(struct node));
    struct node* second=(struct node*)malloc(sizeof(struct node));
    struct node* third=(struct node*)malloc(sizeof(struct node));
    struct node* fourth=(struct node*)malloc(sizeof(struct node));

// Linking head to 1st node  
    head->data=4;
    head->next=second;

// Linking head to 1st node  
    second->data=5;
    second->next=third;

// Linking head to 1st node  
    third->data=6;
    third->next=fourth;

// Linking head to 1st node  
    fourth->data=7;
    fourth->next=NULL;

    printf("Printing the LinkedLIst: ");
    printElement(head);

    printf("Printing the updated LinkedLIst: ");
    // insertAtEnd(head,100);
    insertAfterNode(head,fourth,45);
    printElement(head);

    return 0;
}