#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head;
    struct node *second;
    // second=&head;
    head->data = 4;
    // second=(struct node*)&(struct node);
    // second=head->next;
    second=head->next;
    second->data=6;
    

    printf("%d", second->data);
    return 0;
}