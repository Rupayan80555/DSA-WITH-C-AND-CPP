#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node
{
    char data;
    struct node* next;
}node;

int isEmpty(node* top){
    if (top==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int isFull(){
    node* top=(node* )malloc(sizeof(node));
    if (top==NULL)
    {
        return 1;
    }
    else
    {
        free(top);
        return 0;
    }
    
}

node* push(node* top,char a){
    if (isFull())
    {
        return top;
    }
    else
    {
        node* sp=(node* )malloc(sizeof(node));
        sp->data=a;
        sp->next=top;
        top=sp;
    }
    
}

node* pop(node* top){
    if (isEmpty(top))
    {
        return top;
    }
    else
    {
        node* sp=top->next;
        free(top);
        top=sp;
    }
    
}

int parenthesesCheck(char* ch,int len){
    node* top=NULL;
    int f=0;
    int s=0;
    for (int i = 0; i < len; i++)
    {
        char a=ch[i];
        if (a=='('||a=='['||a=='{')
        {
            top=push(top,a);
            f++;
        }
        else if (a==')'||a==']'||a=='}')
        {
            top=pop(top);
            s++;
        }
        
        
    }
    
    if (isEmpty(top)==1&&f==s)
    {
        return 1;
    }
    else{
        return 0;
    }

}

int main()
{
    char ch[]="[9+(8){]}";
    int a=parenthesesCheck(ch,strlen(ch));
    if (a)
    {
        puts("matched");
    }
    else
    {
        puts(" not matched");
    }
    
    return 0;
}