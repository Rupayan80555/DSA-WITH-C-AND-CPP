#include <stdio.h>
#include <stdlib.h>

typedef struct stack
{
    int data;
    struct stack *next;
} stack;

int isEmpty(stack *top)
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
int isFull()
{
    stack *p = (stack *)malloc(sizeof(stack));
    if (p == NULL)
    {
        free(p);
        return 1;
    }
    else
    {
        free(p);
        return 0;
    }
}

void traversal(stack *ptr)
{
    while (ptr != NULL)
    {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

stack* push(stack* top, int x)
{
    for(int i=0;i<x;i++){
        if (isFull())
        {
            printf("Stack Overflow! ");
            return top;
        }
        else
        {
            stack *n = (stack* )malloc(sizeof(stack));
            printf("Enter data: ");
            scanf("%d",&(n->data));
            n->next = top;
            top = n;
        }
    }
    return top;
}
stack *pop(stack *top)
{
    stack *p = top;
    if (isEmpty(top))
    {
        printf("Stack underflow! \n");
        return top;
    }
    else
    {
        top = top->next;
        printf("%d poped\n", p->data);
        free(p);
        return top;
    }
}

void peak(stack* top, int num){
    for (int i = 1; i < num && top!=NULL; i++)
    {
        top=top->next;
    }
    if (top != NULL)
    {
        printf("%d peeked\n",top->data);  
    }
    

    
}

int main()
{
    stack *top = NULL;
    int n;
    printf("How many time you want to do top operation: ");
    scanf("%d",&n);
    top = push(top, n);
    traversal(top);
    top = pop(top);
    traversal(top);
    peak(top,1);
    traversal(top);
    return 0;
}