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
    pokemon pikachu={60,70,100,'A',"Pikachu"};

    printf("%d",pikachu.hp);
          
    printf(" %d",pikachu.attack);


}