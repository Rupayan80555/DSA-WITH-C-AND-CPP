//  Elements are stored in continuous memory location


#include<string.h>
#include<stdio.h>
int main(){
    struct book
    {
        char author[50];
        float price;
        int pages;
    } King, Dev, Rupayan;

    strcpy(King.author,"Rupayan Nandi");  // direct string input dite parbo na tai ei strcpy function use korte hobe.
    King.price=999.0;
    King.pages=240;
    printf("%f %d %s",King.price,King.pages,King.author);
    
}