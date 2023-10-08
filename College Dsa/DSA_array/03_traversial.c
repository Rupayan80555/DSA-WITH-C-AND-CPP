#include<stdio.h>
void display(int ar[],int a){
    for (int i = 0; i <= a; i++)
    {
        printf("%d ",ar[i]);
    }
    
}
int main()
{
    int array[10]={1,2,3,4,5};
    display(array,3);
    return 0;
}