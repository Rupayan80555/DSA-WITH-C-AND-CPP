#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node* prev;
    struct node* next;
}node;
// Create Node
node* create(int num){
    node* head= NULL;
    node* new;
    node* temp;
    for (int i = 0; i < num; i++)
    {
        new =(node* )malloc(sizeof(node));
        printf("Enter data : ");
        scanf("%d",&(new->data));
        new->prev=NULL;
        new->next=NULL;
        if (head==NULL)
        {
            head=new;
        }
        else
        {
            temp=head;
            while (temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=new;
            new->prev=temp;
        }
        
        
    }
    return head;
    
}

// Insertion
node* insertion(node* head,int num){
    node* p=head;
    node* new=(node* )malloc(sizeof(node));
    node* q=p->next;
    printf("Enter data: ");
    scanf("%d",&(new->data));
    new->next=NULL;
    new->prev=NULL;
    int po;
    printf("Enter position : ");
    scanf("%d",&po);
    if (po==1)
    {
        new->next=head;
        return new;
        
    }
    else if (po>num||po<=0)
    {
        printf("you Entered wrong position ,so the unchanged linkedList is:- ");
        return head;
    }
    else
    {
        p=head;
        q=p->next;
        for (int i = 1; i < po && q != NULL; i++)
        {
            if (i==1)
            {
                continue;
            }
            
            p=p->next;
            q=q->next;
        }
        new->next=q;
        if (q!=NULL)
        {
            q->prev=new;
        }
        new->prev=p;
        p->next=new;
        
        return head;
        
    }
    
    
}

// print 
void nodePrint(node* head){
    node* p= head;
    while (p->next!=NULL)
    {
        printf("%d->",p->data);
        p=p->next;
    }
    printf("%d->NULL\n",p->data);
    while (p!=head)
    {
        printf("%d->",p->data);
        p=p->prev;
    }
    printf("%d\n",head->data);
     return;
}
int main()
{
    node* head;
    int num;
    printf("How many nodes do you want? : ");
    scanf("%d",&num);
    head=create(num);
    nodePrint(head);
    head=insertion(head,num);
    nodePrint(head);
    
    return 0;
}