#include<stdio.h>
#include<string.h>
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    }pokemon;


int main(){
    pokemon pikachu;

    pokemon* x=& pikachu;

    (*x).hp=60;
    printf("%d",pikachu.hp);
    
    x->attack =40;  //      (*x).something = x->something
    printf(" %d",pikachu.attack);


}