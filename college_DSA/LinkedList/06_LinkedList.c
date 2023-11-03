#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
// void setElement(int data)

// void printElement(struct node *head)
// {
//     while (head != 0)
//     {
//         printf("%d->", head->data);
//         head = head->next;
//     }
//     printf("NULL");
// }

int main()
{
    // int num;
    // printf("Enter how many nodes you want to create: ");
    // scanf("%d", num);

    printf("Do you want to continue the creation of LinkedList?(0,1) ");
    int choice;
    scanf("%d", &choice);

    struct node *head, *newNode, *temp;
    head = 0;

    while (choice == 1)
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &newNode->data);
        newNode->next = 0;
        head = newNode;
        if (head == 0)
        {
            head = temp = newNode;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
        printf("Do you want to continue the creation of LinkedList?(0,1)");
        
        scanf("%d", &choice);
        
        
    }
    temp=head;
    while (temp!=0)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
    // printElement(head);

    return 0;
}