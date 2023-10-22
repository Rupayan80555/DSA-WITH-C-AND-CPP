#include<stdio.h>

int main()
{
    int arr[3]={2,4,5};
    int* p,*q;
    p=arr;
    q=p+5;
    printf("%d",(q-p));  
  

    return 0;
}