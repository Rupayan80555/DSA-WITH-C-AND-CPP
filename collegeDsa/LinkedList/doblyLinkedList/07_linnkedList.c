#include<stdio.h>
#include<stdlib.h>

// Creating Structure

typedef struct node
{
    int data;
    struct node* next;
}node;

// Creating nodes
node* creat(int num){
    node* head=NULL;
    node* temp;
    node* new;
    for (int i = 0; i < num; i++)
    {
        new=(node* )malloc(sizeof(node));
        printf("Enter data of %d node : ",i+1);
        scanf("%d",&new->data);
        new->next=NULL;
        if (head==NULL)
        {
            head=new;
        }
        else{
            temp=head;
            while (temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=new;
        }
        
    }
    return head;

}

// printing the LinkedList

void print(node* head){
    while (head!=NULL)
    {
        printf("%d->",head->data);
        head=head->next;
    }
    printf("NULL");
}
int main(){
    node* head;
    printf("Enter how many nodes do you want? : ");
    int num;
    scanf("%d",&num);
    head=creat(num);
    printf("printing the linkedList:- ");
    print(head);
}