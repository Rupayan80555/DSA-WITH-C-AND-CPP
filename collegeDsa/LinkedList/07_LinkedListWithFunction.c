#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;

//  CREATING LINKED list

node* creatNode(int data)
{
    node* head = NULL;
    node* temp = NULL;
    node* p = NULL;
    for (int i = 0; i < data; i++)
    {
        temp = (node* ) malloc(sizeof(node));
        printf("Enter data of node Number %d : ",i+1);
        scanf("%d", & (temp->data));
        temp->next = NULL;

        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            p = head;
            while (p->next != NULL)
            {
                p = p->next;
            }
            p->next = temp;
        }
    }
    return head;
}

// Printing The Liked List

void printLinkedList(node *head)
{
    while (head != NULL)
    {
        printf("%d->", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main()
{
    node *head;
    printf("How many Nodes you want to create ? : ");
    int i;
    scanf("%d", &i);
    head = creatNode(i);
    printf("The existing LinkedList is: ");
    printLinkedList(head);

    return 0;
}