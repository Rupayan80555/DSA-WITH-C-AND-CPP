#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void linkedListTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d", ptr->data);
        ptr = ptr->link;
    }
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    // Link 1st and 2nd node
    head->data = 7;
    head->link = second;
    // Link 2nd and 3rd node
    second->data = 11;
    second->link = third;
    // Link 3rd and 4th node
    third->data = 17;
    third->link = NULL;

    linkedListTraversal(head);

    return 0;
}
