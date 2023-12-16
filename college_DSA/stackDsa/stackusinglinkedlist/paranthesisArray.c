#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct stack
{
    int top;
    int size;
    int* sp;
} stack;

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

int isEmpty(stack* arr){
    if (arr->top>arr->size)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int push(stack* arr,char a){
    if (isFull(arr))
    {
        return arr->top;
    }
    else
    {
        arr->top++;
        arr->sp[arr->top]=a;
    }
    
}

void traversal(stack* arr){
    int a= arr->top;
    while (a!=-1)
    {
        printf("%d ",arr->sp[a]);
        a--;
    }
    
}
int main()
{
    stack* arr=(stack* )malloc(sizeof(stack));
    arr->top=-1;
    char ch[]="9+{8*9+(10)}";
    arr->size= strlen(ch);
    

    return 0;
}