#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter The value of n ");
    scanf("%d",&n);
    int* ptr =  (int*) malloc(n*sizeof(int));
    int* p=ptr;
    printf("Enter the values ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&(*ptr));
        ptr++;
    }
    int* t=p;
    printf("The value is ");
    for (int i = 0; i < n; i++)
    {
        printf("%d,",(*p));
        p++;
    }
    
    return 0;
    free(ptr);
}