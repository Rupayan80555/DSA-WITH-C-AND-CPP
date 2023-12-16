#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    char data;
    struct node *next;
} node;

int isEmpty(node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull()
{
    node *top = (node *)malloc(sizeof(node));
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        free(top);
        return 0;
    }
}

node *push(node *top, char a)
{
    if (isFull())
    {
        return top;
    }
    else
    {
        node *sp = (node *)malloc(sizeof(node));
        sp->data = a;
        sp->next = top;
        top = sp;
    }
}

char pop(node **top)
{
    if (isEmpty(*top))
    {
        return '\0';
    }
    else
    {
        char a = (*top)->data;
        node *sp = (*top)->next;
        free(*top);
        (*top) = sp;
        return a;
    }
}

int match(char a, char b)
{
    if (a == '{' && b == '}')
    {
        return 1;
    }
    else if (a == '[' && b == ']')
    {
        return 1;
    }
    else if (a == '(' && b == ')')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int parenthesesCheck(char *ch, int len)
{
    node *top = NULL;

    char ag;
    for (int i = 0; i < len; i++)
    {
        char a = ch[i];
        if (a == '(' || a == '[' || a == '{')
        {
            top = push(top, a);
        }
        else if (a == ')' || a == ']' || a == '}')
        {
            ag = pop(&top);
            if (!match(ag, a))
            {
                return 0;
            }
        }
    }

    if (isEmpty(top) == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char ch[] = "[9+(8)]";
    int a = parenthesesCheck(ch, strlen(ch));
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