#include <stdio.h>

int main() {
   int i=1,n=1;
   while(i<=3){
    int j=3;
       while(j>0){
        
           printf("%d",n);
           n++;
           j--;
       }

       printf("\n");
        i=i+1;

   }

    // for(i=1;i<=3;i++){
    //     for(int j=3;j>0;j--){
    //         printf("%d",j);
    //     }
    //     printf("\n");
    // }
    return 0;
}