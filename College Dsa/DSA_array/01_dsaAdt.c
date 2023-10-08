#include <stdio.h>
#include <stdlib.h>
typedef struct myArray
{
    int totalSize;
    int usedSize; // It is now a abstract datatype(ADT)
    int *ptr;
} arr;

void creatArray(arr *a) //, int tSize, int uSize
{
    // (*a).totalSize = tSize;
    // (*a).usedSize = uSize;
    // (*a).ptr =(int*) malloc(tSize*sizeof(int));

    // ############  This two code is identical  ############
    printf("Enter total size of the array:");
    int tSize,uSize;
    scanf("%d",&tSize);
    printf("Enter number of elements used: ");

    scanf("%d",&uSize);
    a->totalSize = tSize;
    a->usedSize = uSize;
    a->ptr = (int *)malloc(tSize * sizeof(int));

    if (a->ptr == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
}

void setArray(arr *a)
{
    int n;
    for (int i = 0; i < a->usedSize; i++)
    {
        printf("Enter %d element: ", i + 1);
        scanf("%d", &n);
        (a->ptr)[i] = n;
    }
}

void showArray(arr *a)
{
    for (int i = 0; i < a->usedSize; i++)
    {
        printf("The %d element is: %d\n", (i + 1), (a->ptr)[i]);
    }
}

int main()
{
    arr marks;
    creatArray(&marks);
    printf("we are running setval now \n\n");
    setArray(&marks);
    printf("we are running show val now \n\n");
    showArray(&marks);

     free(marks.ptr);
    return 0;
}