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
int main()
{
    int arr[]={1,3,58,56,4,3,25,5,4,5463,56,34};
    int size =sizeof(arr)/sizeof(int);
    int element=9999;
    int searchIndex=linearSearch(arr,size,element);
    printf("The element %d was found at Index %d \n", element,searchIndex);
    return 0;
}