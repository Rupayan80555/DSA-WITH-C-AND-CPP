//  It is like as structure but at a time only one member can be used at a time. Mane je kono ekta element euse korte parbo ar je element er storage besi hobe setai union er size hobe. Ar sob jaigai oi value tai over right hoye jabe


#include<stdio.h>
#include<string.h>
    typedef union pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    }pokemon;


int main(){
    pokemon pikachu;
    pikachu.hp=60;
    pikachu.attack=70;
    pikachu.speed=100;
    pikachu.tier='A';
    strcpy(pikachu.name,"Pikachu");

    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    printf("%c\n",pikachu.tier);
    printf("%s\n",pikachu.name);
}