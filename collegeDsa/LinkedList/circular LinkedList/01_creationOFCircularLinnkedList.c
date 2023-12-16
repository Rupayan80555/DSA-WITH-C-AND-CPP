#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void printElm(struct node *ptr)
{
    struct node *head = ptr;
    
    // printf("%d->", ptr->data);
    // ptr = ptr->next;
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
    struct node *head = malloc(sizeof(struct node));
    struct node *second = malloc(sizeof(struct node));
    struct node *third = malloc(sizeof(struct node));
    struct node *fourth = malloc(sizeof(struct node));

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
    return 0;
}