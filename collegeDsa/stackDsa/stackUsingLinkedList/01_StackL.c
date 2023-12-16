#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *create(int num)
{
    struct node *head = NULL;
    struct node *new;
    struct node *temp;
    for (int i = 0; i < num; i++)
    {
        new = (struct node *)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &(new->data));
        new->next = NULL;
        if (head == NULL)
        {
            head = new;
        }
        else
        {
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = new;
        }
    }

    return head;
}

int isEmpty(struct node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct node *top)
{
    struct node* p=(struct node* )malloc(sizeof(struct node));
    if (p==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
struct node *push(struct node *top, int x)
{
    if (isFull(top))
    {
        printf("Stack Overflow\n");
    }
    else
    {
        struct node* n=(struct node* )malloc(sizeof(struct node));
        n->data=x;
        n->next=top;
        top= n;
        return top;
    }
    
    
}

int pop(struct node** top)
{
    if (isFull( *top))
    {
        printf("Stack UnderFlow\n");
    }
    else
    {
        struct node* n=*top;
        *top=( *top)->next;
        int x=n->data;
        free(n);
        
        return x;
    }
    
    
}

void linkedListTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct node* top=NULL;
    top=push(top,87);
    top=push(top,7);
    top=push(top,8);
    int x=pop(&top);
    linkedListTraversal(top);
    printf("\n %d",x);
    // int num;
    // struct node *head;
    // printf("How many nodes : ");
    // scanf("%d", &num);
    // head = create(num);
    // printf(" %d", head->data);
    // return 0;
}