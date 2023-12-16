#include<stdio.h>

int main()
{
    int* p;
    int a[5]={1,8,3,4,5},i=0;
    p=a;
    while (i<5)
    {
        printf("%d",*p);
        p++;
        i++;
    }
    printf("\n%p",a);
    printf("\n%d",p[4]);
    return 0;
}