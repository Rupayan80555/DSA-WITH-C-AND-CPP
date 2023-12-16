#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void PrintDataOfLinkedList(struct node *ptr)
{
    int i = 1;
    while (ptr != NULL)
    {
        printf("Element %d is %d\n", i, ptr->data);
        ptr = ptr->next;
        i++;
    }
}

struct node *insertAtFirst(struct node *head, int data)
{
    struct node *ptr = (struct node* )malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

struct node* insertAtIndex(struct node* head,int data,int index){
    struct node*ptr=(struct node* )malloc(sizeof(struct node));
    struct node*p=head;
    int i=0;
    while (i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    head = (struct node* )malloc(sizeof(struct node));
    second = (struct node* )malloc(sizeof(struct node));
    third = (struct node* )malloc(sizeof(struct node));
    fourth = (struct node* )malloc(sizeof(struct node));

    // Link head to 1st node and assigning value to that
    head->data = 4;
    head->next = second;
    // Link 1st to 2nd node and assigning value to that
    second->data = 5;
    second->next = third;
    // Link 2nd to 3rd node and assigning value to that
    third->data = 6;
    third->next = fourth;
    // Link 3rd to 4th node and assigning value to that
    fourth->data = 7;
    fourth->next = NULL;

    PrintDataOfLinkedList(head);
    head = insertAtFirst(head, 55);
    printf("@@@@\n");
    PrintDataOfLinkedList(head);
    printf("####\n");
    head=insertAtIndex(head,58,1);
    PrintDataOfLinkedList(head);


    return 0;
}