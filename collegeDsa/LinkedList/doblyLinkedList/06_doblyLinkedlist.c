#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node* next;
    struct node* prev;

}node;
// create node
node* create(int num){
    node* head=NULL;
    node* new;
    node* temp;
    for (int i = 0; i < num; i++)
    {
        new=(node* )malloc(sizeof(struct node));
        printf("Enter %d nodes data: ");
        scanf("%d",(new->data));
        new->next=NULL;
        new->prev=NULL;
    }
    
}

int main()
{
    
    return 0;
}