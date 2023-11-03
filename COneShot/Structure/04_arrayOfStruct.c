#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[50];
    }pokemon;

    pokemon arr[10];

    arr[0].attack=50;
    arr[0].hp=100;
    arr[0].tier='a';
    arr[0].speed=200;
    strcpy(arr[0].name,"Pikachu");

    arr[1].attack=150;
    arr[1].hp=120;
    arr[1].tier='A';
    arr[1].speed=400;
    strcpy(arr[1].name,"Kotas");

    arr[2].attack=20;
    arr[2].hp=190;
    arr[2].tier='B';
    arr[2].speed=300;
    strcpy(arr[2].name,"Mos");

    for (int i=0;i<3;i++){
        printf("The Structure of %d pokemon is:\n\n",(i+1));
        printf("  Name:- %s,\n",arr[i].name);
        printf("    attack :- %d,\n",arr[i].attack);
        printf("    hp:- %d,\n",arr[i].hp);
        printf("    speed:- %d,\n",arr[i].speed);
        printf("    tier:- %c . \n\n",arr[i].tier);
    }
}