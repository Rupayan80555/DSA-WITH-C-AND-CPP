#include <stdio.h>

int main()
{
    int *ptr;
    *ptr = 5;
    ptr[1] = 95;

    
    printf("%d %d ",*ptr,ptr[0]);
    return 0;
}