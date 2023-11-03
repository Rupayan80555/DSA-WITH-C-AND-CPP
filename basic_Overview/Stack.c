// Demonstration of Stack - Using Array

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

// Skeleton for Stack

struct Stack{
    int top;
    unsigned size;
    int* arr;
};

// to create Stack

struct Stack* create(unsigned size)
{
    struct Stack* Stack =(struct Stack*)malloc(sizeof(struct Stack));
    Stack-> size=size;
    Stack-> top =-1;
    Stack ->arr=(int*)malloc(Stack ->size * sizeof(int));
    return Stack;
};

// Stack is full when top is equal to the last index

int isFull(struct Stack* Stack){
    return Stack->top==Stack->size-1;
}

//  Empty when top is -1

int isEmpty(struct Stack* Stack){
    return Stack-> top==-1;
}

//  to add an item to stack

void push(struct Stack*Stack,int item){
    if(isFull(Stack)) 
    return;
    Stack-> arr[++Stack->top]=item;
}

// to remove an item to stack

int pop(struct Stack* Stack){
    if(isEmpty(Stack))
    return -1;
    return Stack ->arr[Stack->top--];

}

// to get the top element 
int peek(struct Stack* Stack){
    if(isEmpty(Stack))
    return INT_MIN;
    return Stack -> arr[Stack->top];
}

int main(){
    struct Stack* Stack =create(100);
    push(Stack,10);
    push(Stack,20);
    push(Stack,20);
    printf("%d popped\n",pop(Stack));
    printf("%d popped\n",pop(Stack));
    (isEmpty(Stack)==-1)?printf("empty"):printf("not Empty");
    return 0;

}