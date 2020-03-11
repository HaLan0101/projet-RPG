#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Structure.h"

int Attack(struct Player *p,struct Monster *m)
{
    srand(time(NULL));
    int playerchoice = 0, combatFin = 0;


	do
    {

        if (m->pv>0 && p->pv>0)
        {
            printf(" your choice \n\n");
            printf("1. Attack \n");
            printf("2. Object \n");
            printf("3. Run \n");
            scanf("%d",&playerchoice);
            switch(playerchoice)
            {
                case 1:
                    printf("choix 1\n");
                    Attackplayer(p,m);
                    if(m->pv>0)
                    {
                        Attackmonster(p,m);
                    }
                    break;
                case 2:
                    printf("choix 2\n");
                    //Object();
                    break;
                case 3:
                    printf("choix 3\n");
                    adventure();
                    break;
                default:
                    printf("Please choose a number between 1 and 3 \n");
                    break;
            }
        }
        else if (p->pv<=0)
        {
            printf("Le joueur est mort!!!");
            combatFin = -1;
            menu();
        }
        else if (m->pv<=0)
        {
            printf("WIN!!!");
            if (m->pv<=0)
            {
                p->xp += m->xp;
                experience(p);
            }
            combatFin = 1;

        }
    }
    while (playerchoice != 3 && combatFin ==0);

return combatFin;
}
void Attackplayer(struct Player *p,struct Monster *m)
{
    int dgt=0,crit = critique(),pvbase=m->pv;
    switch(crit)
    {
        case 1:
            printf("\n\n Attack normal player\n\n");
            dgt = degatReduit(m->defense,p->force);
            m->pv-=dgt;
            break;
        case 2:
            printf("\n\n Double attack player\n\n");
            dgt =degatReduit(m->defense,2*(p->force));
            m->pv-=dgt;
            break;
        case 0:
            printf("\n\n Miss attack player\n\n");
            m->pv-=0;
            break;
}
printf("le monstre avait:%d PV\nLe joueur a fait: %d degats \nIl reste au monstre: %d HP\n\n",pvbase,dgt,m->pv);
}
void Attackmonster(struct Player *p,struct Monster *m)
{
    int crit = critique(), dgt=0, pvbase=p->pv;
    switch(crit)
    {
        case 1:
            printf("\n\n Attack normal monster\n\n");
            dgt = degatReduit(p->defense,m->force);
            p->pv-=dgt;
            break;
        case 2:
            printf("\n\n Double attack monster\n\n");
            dgt =degatReduit(p->defense,2*(m->force));
            p->pv-=dgt;
            break;
        case 0:
            printf("\n\n Miss attack monster\n\n");
            p->pv-=0;
            break;
    }
printf("le joueur avait:%d PV\nLe monstre a fait: %d degats \nIl reste au joueur: %d HP\n\n",pvbase,dgt,p->pv);
}

// retourne si critique ou échec:
// 1 normal
// 2 critique
// 0 echec
int critique(){
	int attackmystery=((rand()%100));
	printf("\n\nRandom number 10 to 100:%d\n\n",attackmystery);
	if (attackmystery<=30)
    {
        return 0;
    }
    else if (attackmystery>30 && attackmystery<=60)
    {
        return 1;
    }
    else if (attackmystery>60)
    {
        return 2;
    }

return 1;
}

int degatReduit(int defense, int attack){
    int resultat = attack - defense;
    printf("\n\n Degat de base: %d , defense: %d , degat reduit: %d \n\n",attack,defense,attack -defense);
    if(resultat<0)
        return 0;
return resultat;
}
