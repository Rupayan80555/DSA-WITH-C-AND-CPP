#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;

// create nodes
node *createNode(int num)
{
    node *head = NULL;
    node *new;
    node *temp;
    for (int i = 0; i < num; i++)
    {
        new = (node *)malloc(sizeof(node));
        printf("Enter data: ");
        scanf("%d", &(new->data));
        new->next = NULL;
        if (head == NULL)
        {
            head = new;
            new->next = head;
        }
        else
        {
            temp = head;
            while (temp->next != head)
            {
                temp = temp->next;
            }
            temp->next = new;
            new->next = head;
        }
    }
    return head;
}

// Insertion at any position

node *insertion(node *head, int data, int index)
{
    node *p = head;
    node *q = head;
    node *r = head->next;
    int max = 1;
    node *newNode = (node *)malloc(sizeof(node));
    newNode->data = data;
    while (p->next != head)
    {
        max++;
        p = p->next;
    }

    if (index == 0)
    {
        
        newNode->next = head;
        p->next = newNode;
        return newNode;
    }
    else if (index > max || index < 0)
    {
        printf("This Position is not valid. So there is no change\n");
        return head;
    }
    else
    {
        for (int i = 1; i < index; i++)
        {
            q=q->next;
            r=r->next;
        }
        
        newNode->next=r;
        q->next=newNode;
        return head;
    }
}

// print LinkedList

void printLinked(node *head)
{
    node *p = head;
    while (p->next != head)
    {
        printf("%d->", p->data);
        p = p->next;
    }
    printf("%d->head", p->data);
}

int main()
{
    node *head;
    printf("Enter the number of nodes: ");
    int num;
    scanf("%d", &num);
    head = createNode(num);
    printLinked(head);
    int po, data;
    printf("\nEnter position: ");
    scanf("%d", &po);
    printf("Enter data: ");
    scanf("%d", &data);
    head = insertion(head, data, po);
    printLinked(head);

    return 0;
}