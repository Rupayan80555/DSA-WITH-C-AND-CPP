// #include<stdio.h>
// int swap(int a,int b,int c){
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;
//     if (c==0)
//     {
//         return a;
//     }
//     else
//     {
//         return b;
//     }
    
// }
// int main()
// {
//     int x=4,y=5,z=0,p,q;
//     printf("%d %d\n",x,y);

//     p=swap(x,y,z);
//     z++;
//     q=swap(x,y,z);
//     x=p;
//     y=q;
//     printf("%d %d",x,y);
//     return 0;
// }

#include<stdio.h>
void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("%d %d",a,b);
}
int main()
{
    int x=4,y=5;
    printf("%d %d\n",x,y);
    swap(x,y);   
    return 0;
}