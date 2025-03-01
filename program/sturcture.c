#include<stdio.h>
int main(){
    struct pokemon{
        int hp;
        int speed;
        int attact;
        char tier;
    };

struct pokemon pikachu;
pikachu.attact=60;
pikachu.hp=50;
pikachu.speed=100;
pikachu.tier='A';
struct pokemon charizad;
charizad.attact=130;
charizad.hp=80;
charizad.speed=100;
charizad.tier='A';
printf("%c",pikachu.tier);
return 0;
}






