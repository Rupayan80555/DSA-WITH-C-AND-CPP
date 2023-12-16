#include<stdio.h>
#include<stdlib.h>

typedef struct stack
{
    int top;
    int size;
    int* sp;
}stack;

int isEmpty(stack* arr){
    if (arr->top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int isFull(stack* arr){
    if (arr->top>arr->size)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

void push(stack* arr){
    arr->top++;
    if (isFull(arr))
    {
        printf("You can't add data");
    }
    else
    {
        printf("Enter data: ");
        scanf("%d",&arr->sp[arr->top]);
    }
    
}

void traversal(stack* arr){
    int a=arr->top;
    while (a!=-1)
    {
        printf("%d ",arr->sp[a]);
        a--;
    }
    
}

int main()
{
    stack* arr=(stack* )malloc(sizeof(stack));
    printf("Enter the size: ");
    scanf("%d",&arr->size);
    arr->top=-1;
    arr->sp=(int* )malloc(arr->size*(sizeof(int)));
    for (int i = 0; i < arr->size; i++)
    {
        push(arr);
    }
    traversal(arr);
    
    return 0;
}