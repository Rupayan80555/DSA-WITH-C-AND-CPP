#include<stdio.h>
int count=0;
void search(int arr[],int i,int j,int k){
    int mid=(i+j)/2;
    count++;
    if (arr[mid]==k)
    {
        printf("%d at index %d",arr[mid],mid);
    }
    else if (count==4)
    {
        printf("not found");
    }
    else
    {
        if (arr[mid]>k)
        {
            search(arr,i,mid-1,k);
        }
        else
        {
            search(arr,mid+1,j,k);
        }
        
    }
    
    
}
int main()
{
    int arr[]={1,2,3,4,5,6,77,88,100};
    
    search(arr,0,9,100);
    printf("\n%d",count);

    return 0;
}