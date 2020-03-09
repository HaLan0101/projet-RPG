#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Structure.h"


void experience(struct Player* player)
{
    // TODO gagner xp
    if (player->niveau == 1 && player->xp>=4)
    {
        player->niveau+=1;
        printf("Congratulation, your lv is %d now", player->niveau);
        player->defense+=1;
        player->force+=2;
        player->pv+=15;
        printf("votre defense mtn: %d, votre force mtn: %d, votre HP  mtn: %d", player->defense,player->force,player->pv);
    }
    if (player->niveau == 2 && player->xp>=9)
    {
        printf("Congratulation, your lv is 3 now");
        player->defense+=2;
        player->force+=4;
        player->pv+=25;
        printf("votre defense mtn: %d, votre force mtn: %d, votre HP  mtn: %d", player->defense,player->force,player->pv);
    }
    if (player->niveau == 3 && player->xp>=16)
    {
        printf("Congratulation, your lv is 4 now");
        player->defense+=3;
        player->force+=6;
        player->pv+=35;
        printf("votre defense mtn: %d, votre force mtn: %d, votre HP  mtn: %d", player->defense,player->force,player->pv);
    }
    if (player->niveau == 4 && player->xp>=25)
    {
        printf("Congratulation, your lv is 5 now");
        player->defense+=4;
        player->force+=9;
        player->pv+=70;
        printf("votre defense mtn: %d, votre force mtn: %d, votre HP  mtn: %d", player->defense,player->force,player->pv);
    }
    if (player->niveau == 5 && player->xp>=36)
    {
        printf("Congratulation, your lv is 6 now");
        player->defense+=5;
        player->force+=14;
        player->pv+=100;
        printf("votre defense mtn: %d, votre force mtn: %d, votre HP  mtn: %d", player->defense,player->force,player->pv);
    }
}


