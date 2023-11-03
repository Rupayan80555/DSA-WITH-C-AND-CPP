#include<stdio.h>
#include<string.h>
int main(){
    typedef struct Cricketers
    {
        char name[15];
        int age;
        float avg;
        int highestRun;

    }Cricketers;
     
    Cricketers arr[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Give Input of %d Cricketer's :- \n\n",(i+1));
        printf("  Name:= ");
        scanf("%s",arr[i].name);
        printf("  Age:= ");
        scanf("%d",&arr[i].age);
        printf("  Avg:= ");
        scanf("%f",&arr[i].avg);
        printf("  HighestRun := ");
        scanf("%d",&arr[i].highestRun);
        printf("\n\n");
    }

    printf("\n\n ************* The answer ************* \n\n\n\n");

    for (int j = 0; j < 3; j++)
    {
        printf("The details of %d Cricketer :- \n\n",(j+1));
        printf("  Name:= %s\n",arr[j].name);
       
        printf("  Age:= %d\n",arr[j].age);
        
        printf("  Avg:= %f\n",arr[j].avg);
        
        printf("  HighestRun := %d\n\n",arr[j].highestRun);
        
    }
    
}