#include<stdio.h>
#include<string.h>
struct structureArray
{
    char name[20];
    int rollNum;
    float age;
};

int main()
{
    int i;
    printf("How many students data you want to store? : ");
    scanf("%d",&i);
    struct structureArray s[i];
    for (int j = 0; j < i; j++)
    {
        printf(" %d) Enter the name of the student : ",j+1);
        scanf("%s",(s[j].name));
        printf(" %d) Enter the roll number of the student : ",j+1);
        scanf("%d",&(s[j].rollNum));
        printf(" %d) Enter the age of the student : ",j+1);
        scanf("%f",&(s[j].age));
        printf("\n");
    }
    for (int j = 0; j < i; j++)
    {
        printf("%d",j+1);
        printf("  The name of the student : ");
        printf("%s\n",(s[j].name));
        printf("  Enter the roll number of the student : ");
        printf("%d\n",(s[j].rollNum));
        printf("  Enter the age of the student : ");
        printf("%f\n",(s[j].age));
    }
    
    return 0;
}