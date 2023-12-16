#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Creating stack Structure
typedef struct stack
{
    int top;
    int size;
    int *array;
} stack;

// checking Stack status

const char* isEmpty(stack *ptr)
{
    if (ptr->top == -1)
    {
        return "Stack is Empty ";
    }
    else
    {
        return "Stack is not Empty ";
    }
}
char* isFull(stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return "Stack is full";
    }
    else
    {
        return "Stack is not Full ";
    }
}

// push Operation

void push(stack *ptr, int num)
{
    for (int i = 0; i < num; i++)
    {
        int data;
        printf("Enter Data : ");
        scanf("%d",&data);
        if (isFull(ptr)=="Stack is full")
        {
            printf("Stack overflow, you can't add data from %d\n", data);
            ptr->top--;
            break;
        }
        else
        {
            ptr->top++;
            ptr->array[ptr->top]=data;
        }
        
    }
    // printf("The Last added element in Stack is %d \n",ptr->array[ptr->top]);
}

int peek(stack* ptr,int i){
    int arrInd=ptr->top-i+1;
    if(arrInd<0){
        printf("You Entered Invalid statement\n ");
        return -1;
    }
    else
    {
        return ptr->array[arrInd];
    }
    
}
int main()
{
    stack* ptr= (stack* )malloc(sizeof(stack));
    printf("How many elements you want to add in stack ? : ");
    scanf("%d",&(ptr->size));
    ptr->top=-1;
    ptr->array=(int* )malloc(ptr->size * sizeof(int));
    int num;

    const char* strE=isEmpty(ptr);
    const char* strF=isFull(ptr);
    puts(strE);
    puts(strF);

    printf("How many times you want to do Stack operation? ");
    scanf("%d",&num);
    push(ptr,num);

    const char* strE1=isEmpty(ptr);
    const char* strF1=isFull(ptr);
    puts(strE1);
    puts(strF1);

    // Peak operation
    for (int j = 1; j <= ptr->top+1; j++)
    {
        printf("The value at index %d is %d\n",j,peek(ptr,j));
    }
    
    return 0;
}


