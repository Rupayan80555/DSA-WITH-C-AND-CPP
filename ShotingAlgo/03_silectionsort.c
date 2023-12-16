#include<stdio.h>

int main()
{
    int arr[]={7,4,10,8,3,1};
    for (int i = 0; i < 6-1; i++)
    {
        int min=i;
        for (int j = i+1; j < 6; j++)
        {
            if (arr[j]<arr[min])
            {
                min=j;
            }
            
        }
        if (min !=i)
        {
            int temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
        
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}