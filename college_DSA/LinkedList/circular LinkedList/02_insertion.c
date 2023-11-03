#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node* insertAtFirst(struct node* head,int data){
    struct node* ptr=(struct node* )malloc(sizeof(struct node));
    struct node* p=head->next;
    ptr->data=data;
    while (p->next!=head)
    {
        p=p->next;
    }
    // After completing the loop p stands at the lat node so:--
    p->next=ptr;
    ptr->next=head;

}

void printElm(struct node *ptr)
{
    struct node *head = ptr;
    printf("%d->", ptr->data);
    ptr = ptr->next;
    // while (ptr != head)
    // {
    //     printf("%d->",ptr->data);
    //     ptr=ptr->next;
    // }
    // printf("Head\n");

    // or

    do
    {
        printf("%d->",ptr->data);
        ptr=ptr->next;
    } while (ptr!=head);
    printf("Head\n");
    
}

int main()
{
    struct node *head =(struct node* ) malloc(sizeof(struct node));
    struct node *second =(struct node* ) malloc(sizeof(struct node));
    struct node *third =(struct node* ) malloc(sizeof(struct node));
    struct node *fourth =(struct node* ) malloc(sizeof(struct node));

    head->data = 4;
    head->next = second;
    second->data = 3;
    second->next = third;
    third->data = 6;
    third->next = fourth;
    fourth->data = 1;
    fourth->next = head;

    printf("The existing Doubly LinkedList: ");
    printElm(head);
    printf("After inserting element at 1st position of that circular LinkedList: ");
    head=insertAtFirst(head,44);
    printElm(head);


    return 0;
}