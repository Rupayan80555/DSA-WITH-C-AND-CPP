#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node* create(struct node* head, int num)
{
    struct node *newNode;
    struct node *temp;
    int i = 0;

    while (i < num)
    {
        newNode = (struct node * )malloc(sizeof(struct node));
        printf("Enter your data : ");
        scanf("%d", &(newNode->data));
        newNode->prev = NULL;
        newNode->next = NULL;
        if (head == NULL)
        {
            head = temp = newNode;
        }
        else
        {
            while (temp->next != NULL)
            {
                temp = temp->next;
            }

            temp->next = newNode;
            newNode->prev = temp;
            temp=newNode;
        }
        i++;
    }
    return head;
}

void displayList(struct node *head)
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

int main()
{
    struct node *head;
    head = NULL;
    int num;
    printf("How many nodes do you want? : ");
    scanf("%d", &num);
    head = create(head, num);
    printf("The existing LinkedList is : ");
    displayList(head);

    struct node *current = head;
    while (current != NULL) {
        struct node *next = current->next;
        free(current);
        current = next;
    }
    return 0;
}