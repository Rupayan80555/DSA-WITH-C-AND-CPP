#include <stdio.h>

int main()
{
    int arr[] = {5, 4, 10, 1, 6, 2};
    for (int i = 1; i < 6; i++)
    {
        int temp = arr[i], j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}