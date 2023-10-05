#include <stdio.h>
#include <stdlib.h>

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int indDeletion(int arr[], int size, int cap, int ind)
{
    if (size > cap)
    {
        return printf("You can't Insert !!!");
    }
    else
    {
        for (int i = ind; i < size-1; i++)
        {
            arr[i] = arr[i+1];
        }
        
    }
}
int main()
{
    int array[100] = {4, 52, 86, 20, 455};
    int size = 5, index;

    printf("The existing array is : ");

    display(array, size);

    
    printf("Enter the Index where you want to delete the Element: ");
    scanf("%d", &index);
    indDeletion(array, size,  100, index);
    size -= 1;
    printf("\nThe new array is : ");
    display(array, size);

    return 0;
}