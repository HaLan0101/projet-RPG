#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "Structure.h"
#include "Deplacement.h"
#include "Loading.h"
void menu(struct Player* p)
{

    printf("                 -==\\                         `//~\\   ~~~~`---.___.-~~\n");
    printf("             ______-==|                         | |  \\           _-~`\n");
    printf("       __--~~~  ,-/-==\\                        | |   `\        ,'\n");
    printf("    _-~       /'    |  \\                      / /      \      /\n");
    printf("  .'        /       |   \\                   /' /        \   /'\n");
    printf(" /  ____  /         |    \`\.__/-~~ ~ \ _ _/'  /          \/'\n");
    printf("/-'~    ~~~~~---__  |     ~-/~         ( )   /'        _--~`\n");
    printf("                  \_|      /        _)   ;  ),   __--~~\n");
    printf("                    '~~--_/      _-~/-  / \   '-~ \ \n");
    printf("                   {\__--_/}    / \\_>- )<__\      \ \n");
    printf("                   /'   (_/  _-~  | |__>--<__|      |\n");
    printf("                  |0  0 _/) )-~     | |__>--<__|     |\n");
    printf("                  / /~ ,_/       / /__>---<__/      |\n");
    printf("                 o o _//        /-~_>---<__-~      /\n");
    printf("                 (^(~          /~_>---<__-      _-~\n");
    printf("                ,/|           /__>--<__/     _-~\n");
    printf("             ,//('(          |__>--<__|     /                  .----_\n");
    printf("            ( ( '))          |__>--<__|    |                 /' _---_~\ \n");
    printf("         `-)) )) (           |__>--<__|    |               /'  /     ~\`\ \n");
    printf("        ,/,'//( (             \__>--<__\    \            /'  //        ||\n");
    printf("      ,( ( ((, ))              ~-__>--<_~-_  ~--____---~' _/'/        /'\n");
    printf("    `~/  )` ) ,/|                 ~-_~>--<_/-__       __-~ _/\n");
    printf("   ;'( ')/ ,)(                              ~~~~~~~~~~\n");
	int choiceMenu;
	printf("====Main Menu==== \n\n");
	printf("1. Create new game \n");
	printf("2. Load Saved Game \n");
	printf("3. About \n");
	printf("4. Your account \n");
	printf("5. Exit \n");
	printf("Your choice? \n");


	do
    {
        scanf("%d",&choiceMenu);
        switch(choiceMenu)
        {
            case 1:
                printf("Please enter your name here:  ");
                char yourname[50];
                scanf("%s",yourname);
                printf("Hello %s ! Welcome to the story of our game\n", yourname);
                srand(time(NULL));
                loading();
                adventure(p);
                break;
            case 2:
                printf("Server loading please wait...");
                loading();
                break;
            case 3:
                printf(" Name of student: \n DANG Ngoc Ha Lan \n PELENIO DJ Everson \n");
                printf("This is the story of our game:");
                break;
            case 4:
                printf("choose your account");
                break;
            case 5:
                printf("Bye Bye");
                break;
            default:
                printf("Please choose a number between 1 and 5 \n");
                break;
        }
    }
    while (choiceMenu != 5);
}


void start(int numeroMonstre)
{
    struct Monster monstreActif;
    printf(" \n\n Start \n\n");
    struct Monster monster1;
    struct Monster monster2;
    struct Monster monster3;
    struct Monster monster4;
    struct Monster monster5;
    struct Monster monster6;
    struct Player player;

    player.pv =70;
    player.force =6;
    player.critique = 0;
    player.defense = 0;
    player.xp=0;
    player.niveau=1;

    monster1.pv = 20;
    monster1.force =4;
    monster1.critique = 0;
    monster1.defense = 0;
    monster1.xp=1;

    monster2.pv = 25;
    monster2.force =6;
    monster2.critique = 0;
    monster2.defense = 2;
    monster2.xp = 3;


    monster3.pv = 40;
    monster3.force =9;
    monster3.critique = 0;
    monster3.defense = 2;
    monster3.xp = 5;

    monster4.pv = 50;
    monster4.force =13;
    monster4.critique = 0;
    monster4.defense = 3;
    monster3.xp = 7;

    monster5.pv = 65;
    monster5.force =18;
    monster5.critique = 0;
    monster5.defense = 3;
    monster3.xp = 9;

    monster6.pv = 90;
    monster6.force =24;
    monster6.critique = 0;
    monster6.defense = 4;
    monster3.xp = 11;
    if (numeroMonstre == 1)
    {
        monstreActif = monster1;
    }
    else if (numeroMonstre == 2)
    {
        monstreActif = monster2;
    }
    else if (numeroMonstre == 3)
    {
        monstreActif = monster3;
    }
    else if (numeroMonstre == 4)
    {
        monstreActif = monster4;
    }
    else if (numeroMonstre == 5)
    {
        monstreActif = monster5;
    }
    else if (numeroMonstre == 6)
    {
        monstreActif = monster6;
    }

    // COMBAT contre monstreActif
    printf("\n\n ATTACK avec monstre %d \n\n",numeroMonstre);
    Attack(&player,&monstreActif);
    printf("\n\n END Combat avec monster %d \n\n",numeroMonstre);


 printf("\n\n END START \n\n");
 return 0;
}
/*void continuer(struct Player* player, struct Monster *monster1,struct Monster *monster2,struct Monster *monster3,struct Monster *monster4,struct Monster *monster5,struct Monster *monster6)
{
    if(player->niveau == 1 && player->xp>=0 && player->xp<1)
    {
        printf("\n\n ATTACK avec monstre 1 \n\n");
        Attack(&player,&monster1);
        printf("\n\n END Combat avec monster 1 \n\n");
    }
    else if(player->niveau == 1 && player->xp>=1 && player->xp<4 )
    {
        printf("\n\n ATTACK avec monstre 2 \n\n");
        Attack(&player,&monster2);
        printf("\n\n END Combat avec monster 2 \n\n");
    }
    else if(player->niveau == 2 && player->xp>=4 && player->xp<9 )
    {
        printf("\n\n ATTACK avec monstre 3 \n\n");
        Attack(&player,&monster3);
        printf("\n\n END Combat avec monster 3 \n\n");
    }
    else if(player->niveau == 3 && player->xp>=9 && player->xp<16 )
    {
        printf("\n\n ATTACK avec monstre 4 \n\n");
        Attack(&player,&monster4);
        printf("\n\n END Combat avec monster 4 \n\n");
    }
    else if(player->niveau == 4 && player->xp>=16 && player->xp<25)
    {
        printf("\n\n ATTACK avec monstre 5 \n\n");
        Attack(&player,&monster5);
        printf("\n\n END Combat avec monster 5 \n\n");
    }
    else if(player->niveau == 5 && player->xp>=25 && player->xp<36)
    {
        printf("\n\n ATTACK avec monstre 6 \n\n");
        Attack(&player,&monster6);
        printf("\n\n END Combat avec monster 6 \n\n");
    }
}
*/

