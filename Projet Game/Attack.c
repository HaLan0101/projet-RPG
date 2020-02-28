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

void Attack(struct Player *p,struct Monster *m)
{
    int playerchoice,choiceMenu = 0, combatFin = 0;


	do
    {
        printf(" your choice \n\n");
        printf("1. Attack \n");
        printf("2. Object \n");
        printf("3. Run \n");
        scanf("%d",&playerchoice);
        switch(playerchoice)
        {
            case 1:
                printf("choix 1");
                if (m->pv>0)
                {
                    Attackplayer(p,m);
                    Attackmonster(p,m);
                }

                else if (m->pv<=0)
                {
                    printf("Win!!");
                    p->xp+=5;
                    if (p->xp=5)
                    {
                        p->force+=4;
                        p->pv+=5;
                    }
                    combatFin =1;
                }
                else if (p->pv<=0)
                {

                }
                break;
            case 2:
                 printf("choix 2");
                //Object();
                break;
            case 3:
                 printf("choix 3");
                //Run();
                break;
            default:
                printf("Please choose a number between 1 and 3 \n");
                break;
        }
    }
    while (choiceMenu != 3 && combatFin !=1);


}
void Attackplayer(struct Player *p,struct Monster *m)
{
    m->pv-=p->force;
}
void Attackmonster(struct Player *p,struct Monster *m)
{
    p->pv-=m->force;
}
