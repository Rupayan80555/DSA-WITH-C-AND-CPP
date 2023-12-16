#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *sp;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *ptr, int data)
{

    for (int i = 0; i < data; i++)
    {
        int num;
        printf("Enter Data: ");
        scanf("%d", &num);

        if (isFull(ptr))
        {
            printf("Stack overflow !, you can't use push operation from %d\n", num);
            return;
        }
        else
        {
            ptr->top++;
            ptr->sp[ptr->top] = num;
        }
    }
}

void pop(struct stack *ptr, int data)
{

    for (int i = 0; i < data; i++)
    {
        if (isEmpty(ptr))
        {
            printf("Stack is empty !\n");
            return;
        }
        else
        {
            int val = ptr->sp[ptr->top];
            printf("%d ", val);
            ptr->top-- ;
        }
        printf("\n");
    }
}

int main()
{
    int num, data;
    struct stack *ptr = (struct stack *)malloc(sizeof(struct stack));
    ptr->top = -1;
    printf("Enter how many stack you want to create : ");
    scanf("%d", &(ptr->size));

    ptr->sp = (int *)malloc(ptr->size * sizeof(int));
    int a = isEmpty(ptr);
    int b = isFull(ptr);
    printf("before any operation the stack is empty: %d\n", a);
    printf("before any operation the stack is full: %d\n", b);

    printf("How many times you want to use push operation : ");
    scanf("%d", &num);
    push(ptr, num);

    a = isEmpty(ptr);
    b = isFull(ptr);
    printf("after push operation the stack is empty: %d\n", a);
    printf("after push operation the stack is full: %d\n", b);

    printf("How many times you want to use pop operation : ");
    scanf("%d", &data);
    pop(ptr, data);
    a = isEmpty(ptr);
    b = isFull(ptr);

    printf("after pop operation the stack is empty: %d\n", a);
    printf("after pop operation the stack is full: %d\n", b);



    free(ptr->sp);
    free(ptr);
    return 0;
}