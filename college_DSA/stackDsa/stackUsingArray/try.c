#include <stdio.h>
#include <stdlib.h>
typedef struct stack
{
    int size;
    int top;
    int *sp;

} stack;

int isEmpty(stack *arr)
{
    if (arr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(stack *arr)
{

    if (arr->top == arr->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// Push
void push(stack *arr, int num)
{
    for (int i = 0; i < num; i++)
    {
        printf("Enter data: ");
        int data;
        scanf("%d", &data);
        if (isFull(arr))
        {
            printf("You can't add %d bcz stack is full.\n", data);
            break;

        }

        else
        {
            arr->top++;
            arr->sp[arr->top] = data;
        }
    }
}

void peak(stack *arr)
{
    printf("Which element you want? ");
    int num, tp;
    scanf("%d", &num);
    tp = arr->top;
    if ((tp - num + 1) < 0 || (tp - num + 1) >= arr->size)
    {
        printf("Invalid position\n");
    }
    else
    {
        printf("%d\n", arr->sp[tp - num + 1]);
    }
}

// pop

void pop(stack *arr)
{
    if (isEmpty)
    {
        printf("%d pop \n", arr->sp[arr->top]);
        arr->top--;
    }
    else
    {
        printf("you can't pop \n");
    }
}
int main()
{
    stack *arr = (stack* )malloc(sizeof(stack));
    printf("Enter size of array: ");
    scanf("%d", &(arr->size));
    arr->top = -1;
    arr->sp = (int* )malloc((arr->size) * sizeof(int));

    int a = isEmpty(arr);
    int b = isFull(arr);
    printf("1) %d\n2) %d\n", a, b);
    int num;
    printf("Enter how many stack you want? : ");
    scanf("%d", &num);
    push(arr, num);
    a = isEmpty(arr);
    b = isFull(arr);
    printf("3) %d\n4) %d\n", a, b);
    printf("Enter pop number ");
    int popnum;
    scanf("%d",&popnum);
    if (popnum>arr->size)
    {
        printf("pop is not possible \n");
    }
    
    else{for (int i = 0; i < popnum; i++)
    {
        pop(arr);
    }}
    a = isEmpty(arr);
    b = isFull(arr);
    printf("5) %d\n6) %d\n", a, b);
    return 0;
}