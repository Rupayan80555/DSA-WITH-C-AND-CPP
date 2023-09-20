#include<stdio.h>
#include<string.h>
int main(){
    typedef struct Student{
        char name[20];
        int class;
        char Section[1];

    }Student;
    // Student a,b,c;
    // strcpy(a.name,"Dev");
    // a.class=4;
    // a.Section='A';

    // b=a;
    // c=a;
    // strcpy(b.name,"Raj");
    // strcpy(c.name,"Rup");
    
    // printf("%s",a.name);
    // printf("%s",b.name);
    // printf("%s",c.name);

    Student ClassRoom[20];

    for (int i=0;i<1;i++){
        printf("give me details of one Student :- \n");
        printf("Name => ");
        scanf("%s",ClassRoom[i].name);
        printf("\n Section => ");
        scanf("%s",ClassRoom[i].Section);
        printf("\n class => ");
        scanf("%d",&ClassRoom[i].class);
    }
    for(int j=1;j<20;j++){
        ClassRoom[j].class=ClassRoom[0].class;
        // ClassRoom[j].Section=ClassRoom[0].Section;
        // ClassRoom[j].name=ClassRoom[0].name;
    }
    printf("changed name => ");

    scanf("%s",ClassRoom[15].name);
    printf("@%s ",ClassRoom[0].name);
    printf(" # %s",ClassRoom[15].name);
    printf(" $ %s",ClassRoom[0].Section);
    printf(" $ %d",ClassRoom[15].class);
}