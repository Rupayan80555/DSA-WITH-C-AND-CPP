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

int indInsertion(int arr[], int size, int elem, int cap, int ind)
{
    if (size > cap)
    {
        return printf("You can't Insert !!!");
    }
    else
    {
        for (int i = size - 1; i >= ind; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[ind] = elem;
    }
}
int main()
{
    int array[100] = {4, 52, 86, 20, 455};
    int size = 5, element, index;

    printf("The existing array is : ");

    display(array, size);

    printf("Enter the element which you want to insert: ");
    scanf("%d", &element);
    printf("Enter the Index where you want to insert the Element: ");
    scanf("%d", &index);
    indInsertion(array, size, element, 100, index);
    size += 1;
    printf("\nThe new array is : ");
    display(array, size);

    return 0;
}