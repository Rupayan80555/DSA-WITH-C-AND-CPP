#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;

// Creating nodes
node *createNode(int num)
{
    node *head = NULL;
    node *temp;
    for (int i = 0; i < num; i++)
    {
        node *new = (node *)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &(new->data));
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

// delete Node

node *delete(node *head, int num)
{
    printf("Enter position: ");
    int po;
    scanf("%d", &po);
    node *p = head;
    node *q = head;

    if (po >= num-1)
    {
        printf("You entered wrong position.So the existing LinkedList is: ");
        return head;
    }
    else if (po == 0)
    {
        p = p->next;
        while (q->next != head)
        {
            q = q->next;
        }
        q->next = p;
        free(head);
        return p;
    }
    else
    {
        p = head;
        node *d = p->next;
        int i=1;
        while (i<po&&d->next!=head)
        {
            p=p->next;
            d=d->next;
            i++;
        }
        p->next=d->next;

        free(d);
        return head;
    }
}



// print LinkedList
void printNodes(node *head)
{
    node *p = head;
    while (p->next != head)
    {
        printf("%d->", p->data);
        p = p->next;
    }
    printf("%d->Head\n", p->data);
}
int main()
{
    node *head;
    printf("How many nodes do you want: ");
    int num;
    scanf("%d", &num);
    head = createNode(num);
    printf("The existing LinkedList: ");
    printNodes(head);
    head = delete (head, num);
    printNodes(head);

    return 0;
}