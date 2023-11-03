#include<stdio.h>
#include<string.h>

int main()
{
    char str[40];
    // scanf("%[^\n]s",str);
    gets(str);
    puts("Your output is");
    puts(str);
    
    return 0;
}