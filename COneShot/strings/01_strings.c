#include <stdio.h>
#include <string.h>

int main()
{
    // int a=48;
    // printf("%c,%d",a,a);

    char arr[6] = {'a', 't', 'l', 'a', 's', '\0'};
    int i = '\0'; // # '\0' er ASCII value 0.
    while (arr[i] != '\0')
    {
        printf("%c", arr[i]);
        i++;
    }
    printf("\n");
    int j = 0;
    char b[] = "atlas";
    while (b[j] != '\0')
    {
        printf("%c", b[j]);
        j++;
    }
    printf("\n");

    char name[19] = "hello i am Rupayan"; // string format e all time compiler '\0' add kore dei eta 2to character count hoi mane \ alada count hoi ar 0 alada count hoi.

    printf("\nThe size of above string is %d\n", sizeof(name));
    printf("\n");

    int k = 0;

    while (k < sizeof(name))
    {
        printf("%c", name[k]);
        k++;
    }
    printf("\n");
    char str[] = "Hello, mySelf Rupayan";
    printf("%s", str);
    return 0;
}