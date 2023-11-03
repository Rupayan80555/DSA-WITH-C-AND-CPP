#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};


struct node* deleteFirst(struct node* head){
    struct node* p;
    struct node* q=head;
    int i=0;
    p=head->next;
    free(q);
    return p;
    
}
struct node* deleteAtIndex(struct node* head,int index){
    struct node* p=head;
    struct node* q=head->next;
    int i=0;
    for(i=0;i<index-1;i++)
    {
    p=p->next;
    p=q->next;
    }
    p->next=q->next;
    free(q);
    return p;
    
}

void printNode(struct node* ptr){
    while (ptr!=NULL)
    {
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
    printf("NUll\n");
}

int main()
{
    struct node* head=malloc(sizeof(struct node));
    struct node* second=malloc(sizeof(struct node));
    struct node* third=malloc(sizeof(struct node));
    struct node* fourth=malloc(sizeof(struct node));

    head->data=4;
    head->next=second;
    second->data=3;
    second->next=third;
    third->data=8;
    third->next=fourth;
    fourth->data=1;
    fourth->next=NULL;

    printf("The existing LinkedList: ");
    printNode(head);

    printf("LinkedList after deletion: ");
    // head=deleteFirst(head);//Delete at first position.

    head=deleteAtIndex(head,2);//Delete at given Index position.
    printNode(head);

    return 0;
}