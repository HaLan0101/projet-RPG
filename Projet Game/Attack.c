#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "personnage.h"
/*void attack()
{
	MAX=10,
	MIN=0;
	int attackmystery;
	srand(time(NULL));
	attackmystery=(rand());
	while (attackmystery>MIN && attackmystery<MAX)
	{
		if (attackmystery == 7 || attackmystery == 9 )
		{
			printf("Double attack");
		}
		else if (attackmystery == 0 || attackmystery == 10)
		{
			printf("Miss attack");
		}
		else
		{
			printf("normal");
		}
	}
	return 0;
}
*/

int Attack(struct Player *p,struct Monster *m)
{
    srand(time(NULL));
    int playerchoice,choiceMenu = 0, combatFin = 0;


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
                                Attackplayer(p,m);
                                Attackmonster(p,m);
                            printf("choix 1\n");

                            break;
                        case 2:
                            printf("choix 2\n");
                            //Object();
                            break;
                        case 3:
                            printf("choix 3\n");
                            //Run();
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

                }
                else if (m->pv<=0)
                {
                    printf("WIN!!!");
                    combatFin = 1
                    p->xp+=5;

                }




    }
    while (choiceMenu != 3 && combatFin ==0);

return combatFin;
}
void Attackplayer(struct Player *p,struct Monster *m)
{
    int dgt=0,crit = critique(),pvbase=m->pv;
    switch(crit)
    {
        case 1:
            printf("attack normal player\n");
            dgt = degatReduit(m->defense,p->force);
            m->pv-=dgt;

             break;
        case 2:
            printf("double attack player\n");
            dgt =degatReduit(m->defense,2*(p->force));
            m->pv-=dgt;

             break;
        case 0:
            printf("miss attack player\n");
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
            printf("attack normal Monster\n");
            dgt = degatReduit(p->defense,m->force);
             p->pv-=dgt;

             break;
        case 2:
            printf("double attack Monster\n");
            dgt =degatReduit(p->defense,2*(m->force));
             p->pv-=dgt;

             break;
        case 0:
            printf("miss attack Monster\n");
             p->pv-=0;
             break;
    }
printf("le joueur avait:%d PV\nLe monstre a fait: %d degats \nIl reste au joueur: %d HP\n\n",pvbase,dgt,p->pv);
}

int critique(){
	int attackmystery=((rand()%100));
	printf("random number 10 to 100:%d\n",attackmystery);
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
    printf("Degat de base: %d , defense: %d , degat reduit: %d \n",attack,defense,attack -resultat);
    if(resultat<0)
        return 0;
    return resultat;
}
