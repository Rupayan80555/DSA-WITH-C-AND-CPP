#include <stdio.h>
int main()
{
    int arr[5] = {15,16,6,8,5};

    // printing unsorted array
    printf("The unsorted array is:-");
    for (int i = 0; i <5 ; i++)
    {
        printf(" %d", arr[i]);
    }
    printf("\n");

    // sorting

    int b = 0;
    while (b < 5)
    {
        int flag = 0;

        for (int i = 0; i < 4-b; i++)
        {
            int j;
            if (b==4)
            {
                break;
            }
            
            if (arr[i] > arr[i + 1])
            {
                j = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = j;
                flag = 1;
            }
        }
        b++;

        if (flag == 0)
        {
            break;
        }
    }
    printf("The sorted array is:-");

    for (int i = 0; i < 5; i++)
    {
        printf(" %d", arr[i]);
    }

    return 0;
}