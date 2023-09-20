#include<stdio.h>
int main(){
    struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier;// S,A,B,C,D
    };
    struct pokemon pikachu;
    pikachu.attack=110;
    pikachu.speed=100;
    pikachu.hp=80;


    struct pokemon charizard;
    charizard.attack=130;
    charizard.hp=60;
    charizard.speed=80;
    charizard.tier="A";

}