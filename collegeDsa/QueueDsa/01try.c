#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node* next;
    struct node* fnext;
    struct node* rnext;
}node;

node* create(node* queue,int num){
    queue->fnext=queue->rnext=NULL;
    
    for (int i = 0; i < num; i++)
    {
        node* new=(node*)malloc(sizeof(node));
        printf("Enter data: ");
        scanf("%d",&new->data);
        new->next=NULL;
        if (queue->fnext==NULL)
        {
            queue->fnext=queue->rnext=new;
        }
        else
        {
            while (queue->rnext->next!=NULL)
            {
                queue->rnext=queue->rnext->next;

            }
            queue->rnext->next=new;
            queue->rnext=new;
        }
        
    }
    return queue;
}

void print(node* queue){
    node* temp=queue->fnext;

        while (temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
}

void free_memory(node* queue) {
    node* temp = queue->fnext;
    while (temp != NULL) {
        node* next = temp->next;
        free(temp);
        temp = next;
    }
    free(queue);
}

int main()
{
    node* queue = (node*)malloc(sizeof(node));
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    queue=create(queue,num);
    print(queue);
    free_memory(queue);
    return 0;
}