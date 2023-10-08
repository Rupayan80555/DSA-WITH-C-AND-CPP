#include<stdio.h>
int linearSearch(int arr[],int size,int element){
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==element)
        {
            return i;  
        }
        
    }
    return -1;
    
}
int binarySearch(int arr[],int size,int element){
    int low,mid,high;
    low=0;
    high=size-1;
    while (low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==element){
            return mid;
        }
        if(arr[mid]<element){
            return mid+1;
        }
        else
        {
            high=mid-1;
        }
        
    }
    
    return -1;
}
int main()
{
    int arr[]={1,3,5,56,64,73,125,225,234,463,556,634};
    int size =sizeof(arr)/sizeof(int);
    int element=56;
    int searchIndex=binarySearch(arr,size,element);
    printf("The element %d was found at Index %d \n", element,searchIndex);
    return 0;
}