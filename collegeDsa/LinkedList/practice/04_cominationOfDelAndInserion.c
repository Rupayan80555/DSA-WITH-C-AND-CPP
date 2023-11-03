#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;

//
node *createNode(int num)
{
    node *head = NULL;
    node *new;
    node *temp;
    for (int i = 0; i < num; i++)
    {
        new = (node *)malloc(sizeof(node));
        printf("Enter data of %d node : ", i + 1);
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
            new->next = head;

            temp->next = new;
        }
    }
    return head;
}
// insertion
node *insertion(node *head, int num)
{
    node *new = (node *)malloc(sizeof(node));
    printf("Enter position: ");
    int po;
    scanf("%d", &po);
    po = po - 1;
    printf("Enter data: ");
    scanf("%d", &(new->data));
    node *p = head;
    node *q = p->next;
    if (po == 0)
    {
        new->next = head;
        while (p->next != head)
        {
            p = p->next;
        }
        p->next = new;
        return new;
    }
    else if (po > num)
    {
        printf("You Entered Wrong position, so the existing LinkedList: ");
        return head;
    }

    else
    {
        p = head;
        for (int i = 0; i < po; i++)
        {
            q = q->next;
            p = p->next;
        }
        p->next = new;
        new->next = q;
        return head;
    }
}

// deletion
node *delete(node *head, int num)
{
    node *p = head;
    node *d = head;
    node *q = p->next;
    printf("Enter position: ");
    int po;
    scanf("%d", &po);
    po--;
    if (po == 0)
    {
        p = q;
        while (d->next != head)
        {
            d = d->next;
        }
        d->next = p;
        printf("After removing %d from %d node the LinkedList is: ", head->data, po + 1);
        free(head);
        return p;
    }
    else if (po > num + 1)
    {
        printf("You entered wrong position,so the existing LinkedList is: ");
        return head;
    }
    else
    {
        p = head;
        q = head->next;

        for (int i = 1; i < po && q->next != head; i++)
        {
            p = p->next;
            q = q->next;
        }
        printf("After removing %d from %d node the LinkedList is: ", q->data, po + 1);
        p->next = q->next;
        free(q);
        return head;
    }
}

// print LinkedList
void printLinkedList(node *head)
{
    node *p = head;
    // while (p->next!=head)
    // {
    //     printf("%d->",p->data);
    //     p=p->next;
    // }
    // printf("%d->Head\n",p->data);

    do
    {
        printf("%d->", p->data);
        p = p->next;
    } while (p != head);
    printf("Head\n");
}

int main()
{
    node *head;
    printf("How many nodes do you want? : ");
    int num;
    scanf("%d", &num);
    head = createNode(num);
    printLinkedList(head);
    head = insertion(head, num);
    printLinkedList(head);
    head = delete (head, num);
    printLinkedList(head);
    return 0;
}